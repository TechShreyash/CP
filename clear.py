import os

def delete_files_with_extensions(base_dir, extensions):
    """
    Deletes all files with the specified extensions in the given directory and its subdirectories.

    :param base_dir: The directory to start scanning from.
    :param extensions: A tuple of file extensions to delete.
    """
    for root, _, files in os.walk(base_dir):
        for file in files:
            if file.endswith(extensions):
                file_path = os.path.join(root, file)
                try:
                    os.remove(file_path)
                    print(f"Deleted: {file_path}")
                except Exception as e:
                    print(f"Failed to delete {file_path}: {e}")

if __name__ == "__main__":
    # Define the directory to scan (current directory) and the extensions to look for
    current_directory = os.getcwd()
    extensions_to_delete = (".exe", ".ilk", ".obj", ".pdb")

    delete_files_with_extensions(current_directory, extensions_to_delete)
