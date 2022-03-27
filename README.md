# Building

Requirements: `python3`, `make`<br/>
`git clone` this repository in a WSL 2 directory<br/>

Place a vanilla japanese chameleon twist rom (v1.0) in the root directory in big endian format named `baserom.jp.z64`<br/>
Run `make setup` to split the rom, then run `make` to build the rom<br/>
`make clean` will clean the asm/ assets/ and build/ directories<br/>
