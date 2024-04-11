#!/usr/bin/env python3
from sys import argv
if __name__ == "__main__":
    dataOnly, infile, outfile = argv[1:]
    cname = infile.replace("build/assets/", "").replace("assets/", "")
    remove = cname.split("/")
    remove.pop(0)
    group = remove.pop(0)
    symbol = remove.pop(-1).replace(".databin.bin", "")
    cname = group+"_"+symbol+"_Bin" #get rid of _bin too because that is guaranteed
    if cname[0].isdigit(): cname="d"+cname
    dataOnly = bool(int(dataOnly))
    with open(outfile, "w") as f:
        if not dataOnly: f.write(f"unsigned char {cname}[] = {{ ")

        with open(infile, "rb") as i:
            data = i.read()
            for char in data:
                f.write(f"0x{char:02X}, ")

        if not dataOnly: f.write(f"}};")
        f.write(f"\n")