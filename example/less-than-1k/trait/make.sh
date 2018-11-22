#!/bin/bash

pwd

cd ./bound
./make.sh
cd .. 

cd ./component
./make.sh
cd .. 

cd ./container
./make.sh
cd .. 

cd ./index
./make.sh
cd .. 

cd ./scalar
./make.sh
cd .. 

