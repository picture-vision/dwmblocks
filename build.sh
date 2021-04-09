#!/bin/sh

rm -f blocks.h
rm -f *.rej
make clean
make
sudo make install
