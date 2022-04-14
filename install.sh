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
fi