#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
将BSW目录下的所有源文件同步到IAR工程文件中（支持自动添加新增文件，删除失效文件）
支持的文件类型: .c, .h, .s, .a
"""

import os
import shutil
import xml.dom.minidom
import xml.etree.ElementTree as ET

# 项目路径配置
PROJECT_ROOT = r"E:\Project\GitHub\ECU_S32K312\IAR_Project"
EWP_FILE = os.path.join(PROJECT_ROOT, "S32K312_IAR_Project.ewp")
EWT_FILE = os.path.join(PROJECT_ROOT, "S32K312_IAR_Project.ewt")
BSW_DIR = os.path.join(PROJECT_ROOT, "BSW")

# 支持的文件类型
SUPPORTED_EXTENSIONS = (".c", ".h", ".s", ".a")


# 备份原始文件
def backup_file(file_path):
  backup_path = f"{file_path}.bak"
  shutil.copy2(file_path, backup_path)
  print(f"已备份原始文件到: {backup_path}")


# 构建XML元素树（递归根据磁盘目录构建）
def build_group_structure(root_path, parent_element, base_path):
  try:
    entries = os.listdir(root_path)
  except PermissionError:
    print(f"无法访问目录: {root_path}")
    return

  entries.sort()

  # 1. 递归处理子目录
  for entry in entries:
    entry_path = os.path.join(root_path, entry)
    if os.path.isdir(entry_path):
      group_element = ET.SubElement(parent_element, "group")
      name_element = ET.SubElement(group_element, "name")
      name_element.text = entry

      build_group_structure(entry_path, group_element, base_path)

  # 2. 处理当前目录的文件
  for entry in entries:
    entry_path = os.path.join(root_path, entry)
    if os.path.isfile(entry_path) and entry.endswith(SUPPORTED_EXTENSIONS):
      rel_path = os.path.relpath(entry_path, base_path)
      iar_path = f"$PROJ_DIR$\\{rel_path.replace('/', chr(92))}"

      file_element = ET.SubElement(parent_element, "file")
      name_element = ET.SubElement(file_element, "name")
      name_element.text = iar_path


# 更新工程文件
def update_project_file(file_path):
  print(f"\n正在处理工程文件: {file_path}")
  backup_file(file_path)

  tree = ET.parse(file_path)
  root = tree.getroot()

  # 查找或创建 BSW group
  bsw_group = None
  for group in root.findall(".//group"):
    name_node = group.find("name")
    if name_node is not None and name_node.text == "BSW":
      bsw_group = group
      break

  if bsw_group is None:
    bsw_group = ET.SubElement(root, "group")
    bsw_name = ET.SubElement(bsw_group, "name")
    bsw_name.text = "BSW"
    print("已新建 BSW group")
  else:
    # 清空旧内容（保留 <name>BSW</name>），从而剔除已删减的文件及空 group
    for child in list(bsw_group):
      if child.tag != "name":
        bsw_group.remove(child)
    print("已重置 BSW group，开始根据磁盘文件重新同步...")

  # 重新按磁盘实际结构注入
  build_group_structure(BSW_DIR, bsw_group, PROJECT_ROOT)

  # 美化并保存 XML
  xml_string = ET.tostring(root, encoding="UTF-8", xml_declaration=True)
  dom = xml.dom.minidom.parseString(xml_string)
  pretty_xml = dom.toprettyxml(indent="    ")

  with open(file_path, "w", encoding="UTF-8") as f:
    f.write(pretty_xml)

  print(f"已更新工程文件: {file_path}")


def main():
  print("开始同步 BSW 目录文件到 IAR 工程...")

  if not os.path.exists(EWP_FILE):
    print(f"错误: 工程文件不存在: {EWP_FILE}")
    return
  if not os.path.exists(EWT_FILE):
    print(f"错误: 工作区文件不存在: {EWT_FILE}")
    return
  if not os.path.exists(BSW_DIR):
    print(f"错误: BSW目录不存在: {BSW_DIR}")
    return

  update_project_file(EWP_FILE)
  update_project_file(EWT_FILE)
  print("\n所有同步操作已完成！")


if __name__ == "__main__":
  main()