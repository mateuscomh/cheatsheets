# To copy a directory:
cp -r ~/Desktop/cruise_pics/ ~/Pictures/

# To create a copy but ask to overwrite:
cp -i ~/Desktop/foo.txt ~/Documents/foo.txt

# To create a backup file with date:
cp foo.txt{,."$(date +%Y%m%d-%H%M%S)"}
# Copy multiple files to a destination directory:
cp file1.txt file2.txt file3.txt ~/Documents/

# Copy a directory and its contents to a new location, preserving symbolic links:
cp -a ~/Documents/my_directory/ ~/Backup/

# Copy a file and preserve the original file attributes (timestamps, permissions, etc.):
cp -p file.txt ~/Documents/

# Copy a directory recursively, excluding certain subdirectories:
cp -r --exclude=dir1 --exclude=dir2 ~/Source/ ~/Destination/

# Copy files verbosely, displaying a progress bar:
cp -v file1.txt file2.txt ~/Documents/

# Copy a file and preserve the directory structure:
cp --parents path/to/file.txt ~/Backup/

# Copy files interactively, prompting before overwriting existing files:
cp -i file1.txt file2.txt ~/Documents/

# Copy files and follow symbolic links, copying the linked files instead of the links:
cp -L file.txt ~/Documents/

# Copy files and preserve extended attributes:
cp -aX file.txt ~/Backup/