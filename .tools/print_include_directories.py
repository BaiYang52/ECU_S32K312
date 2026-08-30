#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
扫描IAR_PROJECT目录下的所有文件夹，并以$PROJ_DIR$格式打印路径
用于方便用户添加include目录
"""

import os

# 项目路径配置
PROJECT_ROOT = r"E:\Project\GitHub\ECU_S32K312\IAR_Project"

# 递归扫描目录并打印格式化为$PROJ_DIR$的路径
def scan_directories(root_dir):
    # 存储所有目录路径
    directories = []
    
    # 递归遍历所有子目录
    for dirpath, dirnames, filenames in os.walk(root_dir):
        # 过滤掉隐藏目录（以.开头的目录）和DEBUG目录
        dirnames[:] = [d for d in dirnames if not d.startswith('.') and d != 'Debug' and d != 'Release']
        
        # 计算相对路径
        rel_path = os.path.relpath(dirpath, PROJECT_ROOT)
        
        # 如果是根目录，跳过
        if rel_path == '.':
            continue
        
        # 跳过包含Debug或Release的路径
        if 'Debug' in rel_path or 'Release' in rel_path:
            continue
        
        # 转换为IAR格式的路径
        iar_path = f"$PROJ_DIR$\\{rel_path.replace('/', '\\')}"
        directories.append(iar_path)
    
    # 按字母顺序排序
    directories.sort()
    
    # 打印所有目录路径
    for directory in directories:
        print(directory)

def main():
    print("开始扫描IAR_PROJECT目录下的所有文件夹...")
    print(f"扫描目录: {PROJECT_ROOT}")
    print("\n" + "="*50)
    print("以下是格式化后的include目录路径:")
    print("="*50)
    
    scan_directories(PROJECT_ROOT)
    
    print("\n" + "="*50)
    print("扫描完成!")

if __name__ == "__main__":
    main()