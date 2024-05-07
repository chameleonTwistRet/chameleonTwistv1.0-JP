import os
import re

def find_and_replace(directory, file_extension, regex_pattern, replacement_string):
    """
    Function to parse a given directory for a specific file type, and if found,
    then searches for a given regex string and replaces the matched regex strings
    with a new given string.
    """
    # Iterate over all files in the directory and its subdirectories
    for root, _, files in os.walk(directory):
        for file in files:
            # Check if the file has the desired extension
            if file.endswith(file_extension):
                file_path = os.path.join(root, file)
                # Read the file
                with open(file_path, 'r') as f:
                    content = f.read()
                # Search for the regex pattern in the content
                new_content = re.sub(regex_pattern, replacement_string, content)
                # Write the modified content back to the file
                with open(file_path, 'w') as f:
                    f.write(new_content)

def fix_gfx_syms():
    directory_to_search = "assets/"
    file_extension = ".inc.c"

    regex_pattern = r'D_80129730_([^,]+)'
    replacement_string = "D_80129730" 
    find_and_replace(directory_to_search, file_extension, regex_pattern, replacement_string)

    regex_pattern = r'D_80129770_([^,]+)'
    replacement_string = "gGraphicsList[0].UnkGroup.mtx[0]" 
    find_and_replace(directory_to_search, file_extension, regex_pattern, replacement_string)

    regex_pattern = r'D_801297B0_([^,]+)'
    replacement_string = "gGraphicsList[0].UnkGroup.mtx[1]" 
    find_and_replace(directory_to_search, file_extension, regex_pattern, replacement_string)

    regex_pattern = r'D_801297F0_([^,]+)'
    replacement_string = "gGraphicsList[0].UnkGroup.mtx[2]" 
    find_and_replace(directory_to_search, file_extension, regex_pattern, replacement_string)

    regex_pattern = r'D_80129830_([^,]+)'
    replacement_string = "gGraphicsList[0].UnkGroup.mtx[3]" 
    find_and_replace(directory_to_search, file_extension, regex_pattern, replacement_string)

    regex_pattern = r'D_80129870_([^,]+)'
    replacement_string = "gGraphicsList[0].UnkGroup.mtx[4]" 
    find_and_replace(directory_to_search, file_extension, regex_pattern, replacement_string)

    regex_pattern = r'D_801298B0_([^,]+)'
    replacement_string = "gGraphicsList[0].UnkGroup.mtx[5]" 
    find_and_replace(directory_to_search, file_extension, regex_pattern, replacement_string)

    regex_pattern = r'D_801298F0_([^,]+)'
    replacement_string = "gGraphicsList[0].UnkGroup.mtx[6]" 
    find_and_replace(directory_to_search, file_extension, regex_pattern, replacement_string)

    regex_pattern = r'D_80129930_([^,]+)'
    replacement_string = "gGraphicsList[0].UnkGroup.mtx[7]" 
    find_and_replace(directory_to_search, file_extension, regex_pattern, replacement_string)

    regex_pattern = r'D_80129970_([^,]+)'
    replacement_string = "gGraphicsList[0].UnkGroup.mtx[8]" 
    find_and_replace(directory_to_search, file_extension, regex_pattern, replacement_string)

    regex_pattern = r'D_801299B0_([^,]+)'
    replacement_string = "gGraphicsList[0].UnkGroup.mtx[9]" 
    find_and_replace(directory_to_search, file_extension, regex_pattern, replacement_string)

    regex_pattern = r'D_801299F0_([^,]+)'
    replacement_string = "gGraphicsList[0].UnkGroup.mtx[10]" 
    find_and_replace(directory_to_search, file_extension, regex_pattern, replacement_string)

    regex_pattern = r'D_80129A30_([^,]+)'
    replacement_string = "gGraphicsList[0].UnkGroup.mtx[11]" 
    find_and_replace(directory_to_search, file_extension, regex_pattern, replacement_string)
