class ImportedAsset:
    def __init__(self, assetName, assetGfxFile, yaml) -> None:
        self.assetName = assetName
        self.assetGfxFile = assetGfxFile
        self.yaml = yaml

        self.validTypesForSegAddr = ["vtx", "ci8", "ci4", "ia8", "ia4", "rgba16", "rgba32", "palette"]

        self.matrixElsewhere = False
        self.ops = []
        self.args = []

        self.localSegAddrs = []
        self.filePaths = {}
        self.addresses = []
        self.typesToReplace = [] #ordered list of types to replace

        self.currAdrr = ""
        self.currFilePath = ""
        self.currType = ""

    def getLocalSegAddrs(self):
        with open(self.assetGfxFile, "r") as f:
            for line in f:
                l = line.strip()
                op = l.split("(")[0]
                self.ops.append(op)
                self.args.append(l.split("(")[1].split(")")[0].split(", "))

                if "(D_" in l or "&D" in l:
                    l = l.split("D_")[1].split("_")[0]
                    if l.startswith("03") and "gsSPMatrix" != op: 
                        self.localSegAddrs.append(l)

            self.localSegAddrs.sort(key=lambda h: int(h, 16))

    def getFileName(self, line):
        currAdrr = ""
        filePath = ""
        # get file name and rom addr from yaml
        if "vtx" in line:
            currAdrr = line.split("0x")[1].split(",")[0]
            filePath = line.split("name:")[1].split("}")[0].strip() + ".vtx.inc.c"
            _type = "vtx"
        elif "palette" in line:
            currAdrr = line.split("0x")[1].split(",")[0]
            filePath = line.split(",")[2].strip()+".png"
            _type = "palette"
        elif "ci8" in line:
            currAdrr = line.split("0x")[1].split(",")[0]
            filePath = line.split(",")[2].strip()+".png"
            _type = "ci8"
    
        if currAdrr and filePath:
            return currAdrr, filePath, _type
        return None, None, None

    def getFilePathsAndAddrs(self): 
        with open(self.yaml, "r") as f:
            currAsset = False
            lines = f.readlines()
            for i in range(len(lines)):
                if "name: %s" % self.assetName in lines[i]:
                    currAsset = True
                    continue
                if currAsset:
                    if "\n" == lines[i] or "- start: " in lines[i]:
                        return
                    address, filePath, _type = self.getFileName(lines[i])
                    if address and filePath and _type:
                        self.filePaths[address] = filePath
                        self.addresses.append(address)
                        self.typesToReplace.append(_type)
                
    def replaceSegAddr(self):           
        for i in range(len(self.ops)):
            for j in range(len(self.localSegAddrs)):
                if self.localSegAddrs[j] in str(self.args[i]):
                    if self.ops[i] == "gsSPVertex":
                        print("replacing %s with %s" % (self.localSegAddrs[j], self.addresses[j]))
                        self.args[i][0] = self.filePaths[self.addresses[j]]
                        print(self.ops[i], self.args[i])
                    elif self.ops[i] == "gsSPMatrix":
                        print("replacing %s with %s" % (self.localSegAddrs[j], self.addresses[j]))
                        self.args[i][0] = self.filePaths[self.addresses[j]]
                        print(self.ops[i], self.args[i])
                    elif self.ops[i] == "gsDPLoadTLUT_pal256":
                        print("replacing %s with %s" % (self.localSegAddrs[j], self.addresses[j]))
                        self.args[i][0] = self.filePaths[self.addresses[j]]
                        print(self.ops[i], self.args[i])
                    elif self.ops[i] == "gsDPLoadTextureTile":
                        print("replacing %s with %s" % (self.localSegAddrs[j], self.addresses[j]))
                        self.args[i][0] = self.filePaths[self.addresses[j]]
                        print(self.ops[i], self.args[i])
                else:
                    if self.ops[i] == "gsSPMatrix":
                        self.matrixElsewhere = True
        if self.matrixElsewhere:
            print("WARNING: Matrix Loaded From Earlier Asset")

    def getOpsAndArgs(self):
        return self.ops, self.args
            
    def __str__(self) -> str:
        outstr = ""
        for i in range(len(self.ops)):
            outstr += self.ops[i] + "("
            for j in range(len(self.args[i])):
                outstr += self.args[i][j]
                if j != len(self.args[i]) - 1:
                    outstr += ", "
            outstr += "),\n"
        return outstr

assetName = "fallenLogStump"
assetGfxFileName = "./assets/model/JungleLand/fallenLogStump/fallenLogStump.gfx.inc.c"
yaml = "./chameleontwist.jp.yaml"
asset = ImportedAsset(assetName=assetName, assetGfxFile=assetGfxFileName, yaml=yaml)

asset.getLocalSegAddrs()
asset.getFilePathsAndAddrs()
asset.replaceSegAddr()

print("\n ======================================================= \n")

ops, args = asset.getOpsAndArgs()

#print(asset)




