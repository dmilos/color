#!/bin/bash

pwd 

./set_red.exe
./set_green.exe
./readme.exe
./get_alpha.exe

cd ./less-than-1k
./run.sh
cd ..

cd ./less-than-2k
./run.sh
cd ..
