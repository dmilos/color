#!/bin/bash

pwd

cd ./bound
./run.sh
cd .. 

cd ./component
./run.sh
cd .. 

cd ./container
./run.sh
cd .. 

cd ./index
./run.sh
cd .. 

cd ./scalar
./run.sh
cd .. 