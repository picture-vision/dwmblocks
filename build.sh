#!/bin/sh

rm -f blocks.h
rm -f *.rej
make clean
make
sudo make install
sudo cp -f ./scripts/vpnstatus /usr/local/bin/
sudo chmod +x /usr/local/bin/vpnstatus
