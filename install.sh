#!/bin/bash

# Debian and derivatives (apt)
if cat /etc/os-release | grep -E 'ID=debian|ID_LIKE=(.*)debian' &> /dev/null; then
    supported=true

    echo "Installing packages for Debian or derivative (apt)"

    # Add i386 arch for wine32
    # sudo dpkg --add-architecture i386
    sudo apt update
    sudo apt -y install python3 python3-pip ipython3
    pip install -r tools/splat/requirements.txt

    sudo apt install -y gcc
    sudo apt-get install -y gcc-mips-linux-gnu
    sudo wget -qO /usr/local/bin/ninja.gz https://github.com/ninja-build/ninja/releases/latest/download/ninja-linux.zip
    sudo gunzip /usr/local/bin/ninja.gz
    sudo chmod a+x /usr/local/bin/ninja

    pip install pylibyaml
    pip install capstone
    pip install n64img
    pip install spimdisasm
    pip install tqdm
    pip install colorama
    pip install intervaltree
    chmod +x tools/ido_5.3/usr/lib/ #give exec permissions to ido folder (will change in the future)
fi