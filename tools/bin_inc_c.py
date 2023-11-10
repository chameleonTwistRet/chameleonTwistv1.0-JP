#!/usr/bin/env python3

from pathlib import Path
from sys import argv
from os import remove as deleteFile

if __name__ == "__main__":
    infile, outfile = argv[1:]
    cname = infile.split("/")[-1].replace(".", "_")[:-4] #get rid of _bin too because that is guaranteed
    if cname[0].isdigit(): cname="d"+cname
    with open(outfile, "w") as f:
        f.write(f"unsigned char {cname}[] = {{ ")

        with open(infile, "rb") as i:
            for char in i.read():
                f.write(f"0x{char:02X}, ")

        f.write(f"}};\n")
    #if you have to bother converting a bin to inc you probably dont plan on using the bin
    deleteFile(infile)