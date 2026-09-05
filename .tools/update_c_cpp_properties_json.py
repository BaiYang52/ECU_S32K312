#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
自动更新 .vscode/c_cpp_properties.json 中的 includePath
用途：将 IAR 项目中的所有子目录路径同步到 VSCode 的 C/C++ 配置中
"""

import os
import json

# ===== 配置区域 =====
WORKSPACE_ROOT = r"E:\Project\GitHub\ECU_S32K312"          # VSCode 工作区根目录
IAR_PROJECT_DIR = os.path.join(WORKSPACE_ROOT, "IAR_Project")  # IAR 项目目录
VSCODE_SETTINGS_DIR = os.path.join(WORKSPACE_ROOT, ".vscode")
CPP_PROPERTIES_FILE = os.path.join(VSCODE_SETTINGS_DIR, "c_cpp_properties.json")

# ===== 扫描目录函数 =====
def scan_directories(root_dir):
    """
    递归扫描 root_dir 下的所有子目录（过滤 Debug/Release 等），
    返回相对于 root_dir 的相对路径列表（包含根目录本身）
    """
    directories = []
    # 添加根目录本身（相对路径为空字符串）
    directories.append("")

    for dirpath, dirnames, filenames in os.walk(root_dir):
        # 过滤掉隐藏目录、Debug、Release
        dirnames[:] = [d for d in dirnames
                       if not d.startswith('.')
                       and d not in ('Debug', 'Release')]

        # 计算相对路径
        rel_path = os.path.relpath(dirpath, root_dir)
        if rel_path == '.':
            continue  # 根目录已在开头添加，跳过
        # 额外过滤包含 Debug/Release 的路径（安全冗余）
        if 'Debug' in rel_path or 'Release' in rel_path:
            continue
        # 转换为使用正斜杠（VSCode 配置推荐）
        rel_path = rel_path.replace('\\', '/')
        directories.append(rel_path)

    # 排序（根目录 "" 排在最前）
    directories.sort(key=lambda x: (x != "", x))
    return directories

# ===== 生成 includePath 列表 =====
def generate_include_paths(rel_dirs):
    """
    将相对路径列表转换为 VSCode 的 ${workspaceFolder}/IAR_Project/... 格式
    """
    include_paths = []
    for rel in rel_dirs:
        if rel == "":
            # 根目录
            path = "${workspaceFolder}/IAR_Project"
        else:
            path = f"${{workspaceFolder}}/IAR_Project/{rel}"
        include_paths.append(path)
    return include_paths

# ===== 主程序 =====
def main():
    # 1. 扫描目录
    print("正在扫描 IAR 项目目录...")
    rel_dirs = scan_directories(IAR_PROJECT_DIR)
    print(f"共发现 {len(rel_dirs)} 个目录（含根目录）")

    # 2. 生成新的 includePath
    new_include_paths = generate_include_paths(rel_dirs)

    # 3. 读取现有 c_cpp_properties.json
    if not os.path.exists(CPP_PROPERTIES_FILE):
        print(f"错误：未找到文件 {CPP_PROPERTIES_FILE}")
        return

    with open(CPP_PROPERTIES_FILE, 'r', encoding='utf-8') as f:
        config = json.load(f)

    # 4. 更新 includePath（假设只有一个 configuration）
    if 'configurations' not in config or len(config['configurations']) == 0:
        print("错误：c_cpp_properties.json 中没有 configurations 配置")
        return

    config['configurations'][0]['includePath'] = new_include_paths

    # 5. 写回文件（保持格式，indent=4 与原有风格一致）
    with open(CPP_PROPERTIES_FILE, 'w', encoding='utf-8') as f:
        json.dump(config, f, indent=4, ensure_ascii=False)

    print("✅ c_cpp_properties.json 已更新！")
    print(f"更新后的 includePath 包含 {len(new_include_paths)} 个路径")

if __name__ == "__main__":
    main()