#!/bin/bash

colorTestCounter=$(($colorTestCounter+1)); echo [$colorTestCounter][$(date)]$(pwd)

cd ./blue
./make.sh
cd ..

cd ./gray
./make.sh
cd ..