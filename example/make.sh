#!/bin/bash

# Make all examples.
# No Scons, no CMake, no Make or any other make tool
# One line one example
# Designed for easy copy/paste

# TODO COLOR_USE_PP2FILE


# TODO g++ -fexceptions -std=c++11 -g -I../src akin.cpp                -Wextra  -Wall  -Wpedantic -o  akin

reset

#gccBaseSwitch='-fexceptions -std=c++11 -g -D COLOR_USE_PP2FILE'
gccBaseSwitch='-fexceptions -std=c++11'

gccExtraSwitch='-Wmisleading-indentation -Wmissing-braces -Wshadow=local -Winit-self -Wextra  -Wall  -Wpedantic -Wdouble-promotion -Wformat-signedness -Wnull-dereference'

echo $gccBaseSwitch 
echo $gccExtraSwitch

pwd
# -
g++ $gccBaseSwitch $gccExtraSwitch -I../src  readme.cpp     -o  readme
g++ $gccBaseSwitch $gccExtraSwitch -I../src  get_alpha.cpp  -o  get_alpha
g++ $gccBaseSwitch $gccExtraSwitch -I../src  set_green.cpp  -o  set_green
g++ $gccBaseSwitch $gccExtraSwitch -I../src  set_red.cpp    -o  set_red

cd ./less-than-2k
./make.sh
cd ..

cd ./less-than-1k
./make.sh
cd ..
