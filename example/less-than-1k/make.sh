#!/bin/bash

colorTestCounter=$(($colorTestCounter+1)); echo [$colorTestCounter][$(date)]$(pwd)

# Make all examples.
# No Scons, no CMake, no Make or any other make tool

cd ./akin
./make.sh
cd ..

cd ./assign
./make.sh
cd ..

cd ./check
./make.sh
cd ..

cd ./compare
./make.sh
cd ..

cd ./constant
./make.sh
cd ..

cd ./convert
./make.sh
cd ..

cd ./ctor
./make.sh
cd ..

cd ./fix
./make.sh
cd ..

cd ./format
./make.sh
cd ..

cd ./get
./make.sh
cd ..

cd ./operation
./make.sh
cd ..

cd ./operator
./make.sh
cd ..

#cd ./place
#./make.sh
#cd ..

cd ./reference
./make.sh
cd ..

cd ./set
./make.sh
cd ..

cd ./tip
./make.sh
cd ..

cd ./trait
./make.sh
cd ..

g++ $gccBaseSwitch $gccExtraSwitch -I../../src empty.cpp        -o  empty
g++ $gccBaseSwitch $gccExtraSwitch -I../../src hello.cpp        -o  hello
g++ $gccBaseSwitch $gccExtraSwitch -I../../src pp2f.cpp         -o  pp2f

