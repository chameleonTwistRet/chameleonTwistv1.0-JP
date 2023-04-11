import argparse
import os

def getAsset(start, end, rom):
    currType = ""
    startOfAsset = ""

    with open(rom, "rb") as f:
        f.seek(start)
        while f.tell() < end:
            nextEight = f.read(8).hex()
            if nextEight == "0001000000000000":
                currType = "mtx"
                startOfAsset = hex(f.tell() - 8)
            elif nextEight == "b800000000000000" and currType == "mtx":
                currType = "image"
                print(startOfAsset, "mtx preceedes image")
                print(hex(f.tell()), "image")
            elif nextEight == "b800000000000000" and currType == "image":
                print(hex(f.tell()), "possible palette / new image")
            elif nextEight.startswith("0104"):
                if currType == "mtx":
                    print(startOfAsset, "mtx")
                currType = "gfx"
                print(hex(f.tell() - 8), "gfx")
            elif nextEight == "b800000000000000" and currType == "gfx":
                currType = "vtx"
                print(hex(f.tell()), "vtx")
            elif currType == "mtx":
                if int(hex(f.tell()), 16) - int(startOfAsset, 16) == 64:
                    ifMatEnd = f.read(8).hex()
                    if ifMatEnd != "b800000000000000":
                        currType = "image"
                        print(startOfAsset, "mtx preceeding unk")
                        print(hex(f.tell()-8), "image / other data")
                    f.seek(f.tell()-8)
            elif nextEight == "4545450000000000":
                print("ACHOOOOOOOOOOOOOO")
                currType = "vtx"
                print(hex(f.tell()), "vtx")
            
            #print(hex(f.tell()), f.read(8).hex())
        

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Look for assets given offsets")
    parser.add_argument("-s", "--startOffset", help="Offset to look from (default 0x0)", default="0x0", required=False)
    parser.add_argument("-e", "--endOffset", help="Offset to look to", default="0xB315D0", required=False)
    parser.add_argument("-p", "--buildPath", help="Path to z64 file", required=True, type=os.path.abspath)

    args = parser.parse_args()
    start = int(args.startOffset, 16)
    end = int(args.endOffset, 16)
    buildPath = args.buildPath

    getAsset(start, end, buildPath)
