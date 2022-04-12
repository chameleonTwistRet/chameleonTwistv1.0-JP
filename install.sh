#!/bin/bash

# Debian and derivatives (apt)
if cat /etc/os-release | grep -E 'ID=debian|ID_LIKE=(.*)debian' &> /dev/null; then
    supported=true

    echo "Installing packages for Debian or derivative (apt)"

    # Add i386 arch for wine32
    # sudo dpkg --add-architecture i386
    sudo apt -y install python3-pip
    sudo apt-get install -y gcc-mips-linux-gnu
    pip install pylibyaml
    pip install capstone
    chmod +x tools/usr/lib/* #give exec permissions to ido folder (will change in the future)
    mv tools/asm-processor/prelude.inc tools/asm-processor/prelude.s #this is needed for some reason...maybe this isn't set up correctly
fi