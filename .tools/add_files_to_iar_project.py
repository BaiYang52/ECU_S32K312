#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
将BSW目录下的所有源文件添加到IAR工程文件中
支持的文件类型: .c, .h, .s, .a
"""

import os
import xml.etree.ElementTree as ET
import shutil

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

# 构建XML元素树
def build_group_structure(root_path, parent_element, base_path):
    # 获取当前目录下的子目录和文件
    try:
        entries = os.listdir(root_path)
    except PermissionError:
        print(f"无法访问目录: {root_path}")
        return
    
    # 按字母顺序排序
    entries.sort()
    
    # 处理子目录
    for entry in entries:
        entry_path = os.path.join(root_path, entry)
        if os.path.isdir(entry_path):
            # 创建新的group元素
            group_element = ET.SubElement(parent_element, "group")
            name_element = ET.SubElement(group_element, "name")
            name_element.text = entry
            
            # 递归处理子目录
            build_group_structure(entry_path, group_element, base_path)
    
    # 处理文件
    for entry in entries:
        entry_path = os.path.join(root_path, entry)
        if os.path.isfile(entry_path) and entry.endswith(SUPPORTED_EXTENSIONS):
            # 计算相对路径
            rel_path = os.path.relpath(entry_path, base_path)
            # 将路径转换为IAR格式（使用\作为分隔符）
            iar_path = f"$PROJ_DIR$\\{rel_path.replace('/', '\\')}"
            
            # 创建file元素
            file_element = ET.SubElement(parent_element, "file")
            name_element = ET.SubElement(file_element, "name")
            name_element.text = iar_path
            
            print(f"已添加文件: {iar_path}")

# 获取现有group结构的映射
def get_group_map(group_element):
    group_map = {}
    for child in group_element:
        if child.tag == "group":
            name = child.find("name").text
            group_map[name] = {
                "element": child,
                "children": get_group_map(child)
            }
    return group_map

# 添加缺失的文件到指定group
def add_missing_files(directory_path, group_element, base_path):
    # 获取当前目录下的所有文件
    try:
        entries = os.listdir(directory_path)
    except PermissionError:
        print(f"无法访问目录: {directory_path}")
        return
    
    # 按字母顺序排序
    entries.sort()
    
    # 获取当前group中的所有文件路径
    existing_files = set()
    for file_elem in group_element.findall(".//file/name"):
        if file_elem.text:
            existing_files.add(file_elem.text)
    
    # 添加缺失的文件
    for entry in entries:
        entry_path = os.path.join(directory_path, entry)
        if os.path.isfile(entry_path) and entry.endswith(SUPPORTED_EXTENSIONS):
            # 计算相对路径
            rel_path = os.path.relpath(entry_path, base_path)
            # 将路径转换为IAR格式
            iar_path = f"$PROJ_DIR$\\{rel_path.replace('/', '\\')}"
            
            # 检查文件是否已存在
            if iar_path not in existing_files:
                # 创建file元素
                file_element = ET.SubElement(group_element, "file")
                name_element = ET.SubElement(file_element, "name")
                name_element.text = iar_path
                
                print(f"已添加文件: {iar_path}")

# 更新工程文件
def update_project_file(file_path):
    print(f"\n正在处理工程文件: {file_path}")
    
    # 备份原始文件
    backup_file(file_path)
    
    # 解析XML文件
    tree = ET.parse(file_path)
    root = tree.getroot()
    
    # 查找或创建BSW group
    bsw_group = None
    for group in root.findall(".//group"):
        if group.find("name") is not None and group.find("name").text == "BSW":
            bsw_group = group
            print("已找到BSW group，将添加缺失的文件和目录")
            break
    
    if bsw_group is None:
        bsw_group = ET.SubElement(root, "group")
        bsw_name = ET.SubElement(bsw_group, "name")
        bsw_name.text = "BSW"
        print("已创建BSW group")
    
    # 获取现有group结构映射
    group_map = get_group_map(bsw_group)
    
    # 递归添加缺失的目录和文件
    def add_missing_groups_and_files(directory_path, parent_group, parent_group_map):
        try:
            entries = os.listdir(directory_path)
        except PermissionError:
            print(f"无法访问目录: {directory_path}")
            return
        
        # 按字母顺序排序
        entries.sort()
        
        # 处理子目录
        for entry in entries:
            entry_path = os.path.join(directory_path, entry)
            if os.path.isdir(entry_path):
                # 检查group是否已存在
                if entry in parent_group_map:
                    # group已存在，递归处理
                    add_missing_groups_and_files(
                        entry_path, 
                        parent_group_map[entry]["element"], 
                        parent_group_map[entry]["children"]
                    )
                else:
                    # 创建新的group
                    print(f"已创建group: {entry}")
                    new_group = ET.SubElement(parent_group, "group")
                    name_elem = ET.SubElement(new_group, "name")
                    name_elem.text = entry
                    
                    # 递归处理新创建的group
                    add_missing_groups_and_files(entry_path, new_group, {})
        
        # 处理文件
        add_missing_files(directory_path, parent_group, PROJECT_ROOT)
    
    # 开始添加缺失的目录和文件
    add_missing_groups_and_files(BSW_DIR, bsw_group, group_map)
    
    # 保存更新后的文件
    # 使用minidom美化XML格式
    import xml.dom.minidom
    
    # 创建minidom对象
    xml_string = ET.tostring(root, encoding="UTF-8", xml_declaration=True)
    dom = xml.dom.minidom.parseString(xml_string)
    
    # 美化XML
    pretty_xml = dom.toprettyxml(indent="    ")
    
    # 保存到文件
    with open(file_path, "w", encoding="UTF-8") as f:
        f.write(pretty_xml)
    
    print(f"已更新工程文件: {file_path}")

def main():
    print("开始将BSW目录下的所有源文件添加到IAR工程中...")
    
    # 检查文件是否存在
    if not os.path.exists(EWP_FILE):
        print(f"错误: 工程文件不存在: {EWP_FILE}")
        return
    
    if not os.path.exists(EWT_FILE):
        print(f"错误: 工作区文件不存在: {EWT_FILE}")
        return
    
    if not os.path.exists(BSW_DIR):
        print(f"错误: BSW目录不存在: {BSW_DIR}")
        return
    
    # 更新ewp文件
    update_project_file(EWP_FILE)
    
    # 更新ewt文件
    update_project_file(EWT_FILE)
    
    print("\n所有操作已完成！")

if __name__ == "__main__":
    main()