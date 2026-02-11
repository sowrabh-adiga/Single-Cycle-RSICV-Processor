def hex_to_bin(hex_str):
    # Convert hex str to bin
    bin_str = bin(int(str(hex_str), 16))[2:]
    bin_str = bin_str.zfill(32)
    return bin_str.upper()



imem = []
with open("test_imemory.hex", "r") as file:
    for line in file:
        # Ignore comments
        line_content = line.split("//")[0].strip()
        if line_content:
            imem.append(hex_to_bin(line_content))

print(imem)