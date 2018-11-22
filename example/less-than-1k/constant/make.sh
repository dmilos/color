#!/bin/bash

pwd

cd ./cmy
./make.sh
cd ..

cd ./gray
./make.sh
cd ..

cd ./rgb
./make.sh
cd ..

cd ./lab
./make.sh
cd ..

cd ./x11
./make.sh
cd ..
