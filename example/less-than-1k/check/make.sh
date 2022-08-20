#!/bin/bash

colorTestCounter=$(($colorTestCounter+1)); echo [$colorTestCounter][$(date)]$(pwd)

cd ./integrity
./make.sh
cd ..

cd ./oveburn
./make.sh
cd ..

cd ./unique
./make.sh
cd ..

