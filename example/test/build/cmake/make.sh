%prg_cmake% -B _outputGCC .
pause

[ -e _buildGC ] || mkdir _buildGC
cd _buildGC
cmake ..  -DCMAKE_CXX_STANDARD=11 -DCMAKE_CXX_STANDARD_REQUIRED=ON
make -j6
cd ..

