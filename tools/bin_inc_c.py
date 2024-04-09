#!/usr/bin/env python3
from sys import argv
if __name__ == "__main__":
    dataOnly, infile, outfile = argv[1:]
    cname = infile.replace("build/include/", "")\
    .replace("assets/", "").replace("/", "_").replace(".", "_").replace("_bin", "") #get rid of _bin too because that is guaranteed
    if cname[0].isdigit(): cname="d"+cname
    dataOnly = bool(int(dataOnly))
    with open(outfile, "w") as f:
        if not dataOnly: f.write(f"unsigned char {cname}[] = {{ ")

        with open(infile, "rb") as i:
            for char in i.read():
                f.write(f"0x{char:02X}, ")

        if not dataOnly: f.write(f"}};")
        f.write(f"\n")