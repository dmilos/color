#!/bin/bash

# Make all examples.
# No Scons, no CMake, no Make or any other make tool
# One line one example
# Designed for easy copy/paste

# TODO COLOR_USE_PP2FILE


# TODO g++ -fexceptions -std=c++14 -g -I../src akin.cpp                -Wextra  -Wall  -Wpedantic -o  akin

reset
export colorTestCounter=0

colorTestCounter=$(($colorTestCounter+1)); echo [$colorTestCounter][$(date)]$(pwd)

#export gccBaseSwitch='-fexceptions -std=c++14 -g -D COLOR_USE_PP2FILE'
export gccBaseSwitch='-fexceptions -std=c++14'
export gccAnnoyingSwitch='-Wno-unused-parameter -Wno-missing-braces' 
export gccExtraSwitch='-Wmisleading-indentation -Wshadow=local -Winit-self -Wextra -Wall -Wpedantic -Wdouble-promotion -Wformat-signedness -Wnull-dereference'

export gccExtraSwitch=$gccExtraSwitch" "$gccAnnoyingSwitch

echo gccBaseSwitch     = $gccBaseSwitch 
echo gccExtraSwitch    = $gccExtraSwitch
echo gccAnnoyingSwitch = $gccAnnoyingSwitch


# -
g++ $gccBaseSwitch $gccExtraSwitch -I../src  readme.cpp     -o  readme
g++ $gccBaseSwitch $gccExtraSwitch -I../src  get_alpha.cpp  -o  get_alpha
g++ $gccBaseSwitch $gccExtraSwitch -I../src  set_green.cpp  -o  set_green
g++ $gccBaseSwitch $gccExtraSwitch -I../src  set_red.cpp    -o  set_red

cd ./less-than-1k
./make.sh
cd ..

cd ./less-than-2k
./make.sh
cd ..

date
