import os
from collections import defaultdict


# 在这里填写需要扫描的文件夹路径
FOLDER_PATH = r"E:\Project\GitHub\ECU_S32K312\IAR_Project"

# 只扫描这些扩展名的文件（不区分大小写）
ALLOWED_EXTENSIONS = ('.c', '.h')


def scan_duplicate_files(folder_path):
    """
    扫描指定文件夹下的 .c / .h 文件，找出重复的文件名（不区分大小写）。

    返回一个字典，key 是小写后的文件名，value 是同名文件的完整路径列表。
    """
    if not os.path.isdir(folder_path):
        print(f"错误：路径 '{folder_path}' 不存在或不是一个文件夹。")
        return None

    # 使用字典记录每个文件名出现的所有路径
    # key: 小写文件名, value: 完整路径列表
    filename_map = defaultdict(list)

    for root, dirs, files in os.walk(folder_path):
        for filename in files:
            # 跳过非 .c / .h 文件
            if not filename.lower().endswith(ALLOWED_EXTENSIONS):
                continue
            full_path = os.path.join(root, filename)
            filename_map[filename.lower()].append(full_path)

    # 只保留出现多次的（即重复的）
    duplicates = {k: v for k, v in filename_map.items() if len(v) > 1}

    return duplicates


def print_results(duplicates, folder_path):
    print("=" * 60)
    print(f"扫描文件夹: {folder_path}")
    print(f"文件类型范围: .c / .h")
    print("=" * 60)

    if duplicates is None:
        return

    if not duplicates:
        print("未发现重复的文件名。")
        return

    total_duplicate_groups = len(duplicates)
    total_duplicate_files = sum(len(paths) for paths in duplicates.values())

    print(f"发现 {total_duplicate_groups} 组重复文件名，涉及 {total_duplicate_files} 个文件。")
    print("=" * 60)

    # 按重复数量从多到少排序
    for idx, (lower_name, paths) in enumerate(
        sorted(duplicates.items(), key=lambda x: -len(x[1])), start=1
    ):
        # 使用任意一个原始文件名作为展示名
        display_name = os.path.basename(paths[0])
        print(f"\n[{idx}] 文件名: {display_name}")
        print(f"    不区分大小写的匹配名: {lower_name}")
        print(f"    出现次数: {len(paths)}")
        print(f"    路径列表:")
        for p in paths:
            print(f"      - {p}")

    print()
    print("=" * 60)
    print("扫描完成。")
    print("=" * 60)


def main():
    duplicates = scan_duplicate_files(FOLDER_PATH)
    print_results(duplicates, FOLDER_PATH)


if __name__ == "__main__":
    main()