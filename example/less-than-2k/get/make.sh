#!/bin/bash

colorTestCounter=$(($colorTestCounter+1)); echo [$colorTestCounter][$(date)]$(pwd)

cd ./gray
./make.sh
cd ..

cd ./hue
./make.sh
cd ..
