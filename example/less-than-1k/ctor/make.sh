#!/bin/bash

colorTestCounter=$(($colorTestCounter+1)); echo [$colorTestCounter][$(date)]$(pwd)

cd ./const
./make.sh
cd ..

cd ./list
./make.sh
cd ..