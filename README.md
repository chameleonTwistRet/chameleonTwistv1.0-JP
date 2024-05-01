# Chameleon Twist Decomp Project
<img src="https://github.com/chameleonTwistRet/chameleonTwistv1.0-JP/actions/workflows/ci.yml/badge.svg"> <img src="https://img.shields.io/endpoint?label=Code%20JP&url=https%3A%2F%2Fprogress.deco.mp%2Fdata%2Fchameleontwist%2Fjp%2Fdefault%2F%3Fmode%3Dshield%26measure%3Dfuncs&color=yellow"/> <img src="https://img.shields.io/endpoint?label=All%20JP&url=https%3A%2F%2Fprogress.deco.mp%2Fdata%2Fchameleontwist%2Fjp%2Fdefault%2F%3Fmode%3Dshield%26measure%3Dbytes&color=orange"/> <img src="https://img.shields.io/badge/ROM%20SHA1-a1faf5c4ca961ab2c029c84ecfa556755e7f70c8-red">

- [Progress Graph](https://elisiah.github.io/DecompProgress) 📈

- [Project Website](https://wiki.chameleontwi.st/) 🌐 | [Currently points to wiki as decomp site is WIP]

## Using the Decompilation:

As the decompilation has not neared completion we don't have any systems in place to let those not helping with the decomp use the code.

We have started work on a modding system that will allow you to use the decompilation to make mods for the game, but more areas of the game need to be decompiled so that we know how to replace them.

If you are interested with helping with the decompilation see the [Developing](#Developing) section below.

## Developing:

### Setup:
1. cloning the repo:
`git clone https://github.com/chameleonTwistRet/chameleonTwistv1.0-JP . --recurse-submodules`

2. making sure splat is up to date:
`git submodule update --remote`

3. install package requirements:
`./install.sh`

4. put the JPv1.0 rom in the root of the repo and name it `baserom.z64` (make sure the SHA1 matches the one in the badge above)

5. run `./configure && ./ninja` to build the rom

Now you can run `./configure && ./ninja` whenever you make changes to make sure the rom builds.

If you have made changes to files - for example: splitting a c file; making a function be asm instead of c (which generates a new file); etc. - you will need to run `./configure --clean` again to make sure the build system doesn't attempt to use old files.

A matching ROM will output an **"OK"** in the console when building.

### Contributing:
All contributions should be done through pull requests for those outside of Rainchus, Elisiah and Nathan R.

Please only make pull requests once your fork/branch has posted **"OK"** on building the rom.

### Progress Tracking:
As of now, progress tracking is automatically handled using github CI. Every time a new push to the main brainch occurs, the CI will make sure the project builds and if there have been changes the API containing our progress data will be updated. The progress data is then used to generate the badges above.

*Do not attempt to manually update the progress data, it will be overwritten by the CI*
