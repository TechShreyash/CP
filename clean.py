import os


def delete_non_cpp_files(base_dir, script_name):
    # Define folders to ignore
    ignored_folders = {".vscode", ".git"}

    # Define files to skip
    ignored_files = {".gitignore", "debug.hpp", "README.md", script_name}

    for root, dirs, files in os.walk(base_dir):
        # Skip the ignored directories
        dirs[:] = [d for d in dirs if d not in ignored_folders]

        for file in files:
            # Skip the ignored files and keep only `.cpp` files
            if file not in ignored_files and not file.endswith(".cpp"):
                file_path = os.path.join(root, file)
                try:
                    os.remove(file_path)
                    print(f"Deleted: {file_path}")
                except Exception as e:
                    print(f"Failed to delete {file_path}: {e}")


if __name__ == "__main__":
    current_directory = os.getcwd()
    script_name = os.path.basename(__file__)  # Get the name of the script
    delete_non_cpp_files(current_directory, script_name)
