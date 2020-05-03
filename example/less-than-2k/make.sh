#!/bin/bash

pwd

cd ./get
./make.sh
cd ..

g++ $gccBaseSwitch $gccExtraSwitch -I../../src memfill.cpp    -o  memfill

cd ./akin
./make.sh
cd ..

cd ./operation
./make.sh
cd ..

cd ./place
./make.sh
cd ..