# Building

Requirements: <br/>
`sudo apt -y install python-pip`<br/>
`sudo apt-get install -y gcc-mips-linux-gnu`<br/>
`pip install pylibyaml`<br/>

temporary instructions:
rename `prelude.inc` to `prelude.s`<br/>
`chmod +x tools/usr/lib/*`<br/>

`git clone` this repository in a WSL 2 directory<br/>

Place a vanilla japanese chameleon twist rom (v1.0) in the root directory in big endian format named `baserom.jp.z64`<br/>
Run `make setup` to split the rom, then run `make -j` to build the rom<br/>
`make clean` will clean the asm/ assets/ and build/ directories<br/>
