# Building and Splitting

`git clone` this repository in a WSL 2 directory<br/>

Requirements (for debian based systems only currently)<br/>
`./install.sh`<br/>



Place a vanilla japanese chameleon twist rom (v1.0) in the root directory in big endian format named `baserom.jp.z64`<br/>
Run `make setup` to split the rom, then run `make -j` to build the rom<br/>
`make clean` will clean the asm/ assets/ and build/ directories<br/>

# Progresses
