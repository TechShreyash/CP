import os

def rename_files_with_padding(base_dir, extension, total_digits=4):
    """
    Renames files with the specified extension by adding zero-padding to their names.

    :param base_dir: The directory to start scanning from.
    :param extension: The file extension to filter (e.g., '.cpp').
    :param total_digits: The total number of digits for zero-padding (default is 4).
    """
    for root, _, files in os.walk(base_dir):
        for file in files:
            if file.endswith(extension):
                name, ext = os.path.splitext(file)
                if name.isdigit():
                    padded_name = name.zfill(total_digits)
                    new_file_name = f"{padded_name}{ext}"
                    old_file_path = os.path.join(root, file)
                    new_file_path = os.path.join(root, new_file_name)

                    try:
                        os.rename(old_file_path, new_file_path)
                        print(f"Renamed: {old_file_path} -> {new_file_path}")
                    except Exception as e:
                        print(f"Failed to rename {old_file_path}: {e}")

if __name__ == "__main__":
    # Define the directory to scan (current directory) and the extension to look for
    current_directory = os.getcwd()
    file_extension = ".cpp"

    rename_files_with_padding(current_directory, file_extension)
