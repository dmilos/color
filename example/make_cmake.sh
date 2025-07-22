#!/bin/bash

mkdir _buildGC-11
cd _buildGC-11
cmake ..  -DCMAKE_CXX_STANDARD=11 -DCMAKE_CXX_STANDARD_REQUIRED=ON
make -j6
cd ..

mkdir _buildGC-14
cd _buildGC-14
cmake ..  -DCMAKE_CXX_STANDARD=14 -DCMAKE_CXX_STANDARD_REQUIRED=ON
make -j6
cd ..

mkdir _buildGC-17
cd _buildGC-17
cmake ..  -DCMAKE_CXX_STANDARD=17 -DCMAKE_CXX_STANDARD_REQUIRED=ON
make -j6
cd ..

mkdir _buildGC-20
cd _buildGC-20
cmake ..  -DCMAKE_CXX_STANDARD=20 -DCMAKE_CXX_STANDARD_REQUIRED=ON
make -j6
cd ..
