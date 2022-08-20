#!/bin/bash

colorTestCounter=$(($colorTestCounter+1)); echo [$colorTestCounter][$(date)]$(pwd)

cd ./addition
./make.sh
cd ..

cd ./distance
./make.sh
cd ..

cd ./invert
./make.sh
cd ..

cd ./multiply
./make.sh
cd ..

cd ./subtract
./make.sh
cd ..
