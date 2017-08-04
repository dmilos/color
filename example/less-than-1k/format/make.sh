
cd ./uint8
./make.sh
cd ..

cd ./uint16
./make.sh
cd ..

cd ./uint32
./make.sh
cd ..


cd ./uint64
./make.sh
cd ..


cd ./float
./make.sh
cd ..


cd ./double
./make.sh
cd ..


cd ./ldouble
./make.sh
cd ..


cd ./233
./make.sh
cd ..


cd ./332
./make.sh
cd ..

cd ./556
./make.sh
cd ..

cd ./655
./make.sh
cd ..

g++ -fexceptions -std=c++11 -g -I../../../src split2222_abgr.cpp      -o  split2222_abgr
g++ -fexceptions -std=c++11 -g -I../../../src split2222_argb.cpp      -o  split2222_argb
g++ -fexceptions -std=c++11 -g -I../../../src split2222_bgra.cpp      -o  split2222_bgra
g++ -fexceptions -std=c++11 -g -I../../../src split2222_rgba.cpp      -o  split2222_rgba
g++ -fexceptions -std=c++11 -g -I../../../src split4444_rgba.cpp      -o  split4444_rgba
g++ -fexceptions -std=c++11 -g -I../../../src split4444_abgr.cpp      -o  split4444_abgr
g++ -fexceptions -std=c++11 -g -I../../../src split4444_argb.cpp      -o  split4444_argb
g++ -fexceptions -std=c++11 -g -I../../../src split4444_bgra.cpp      -o  split4444_bgra
g++ -fexceptions -std=c++11 -g -I../../../src split8888_abgr.cpp      -o  split8888_abgr
g++ -fexceptions -std=c++11 -g -I../../../src split8888_argb.cpp      -o  split8888_argb
g++ -fexceptions -std=c++11 -g -I../../../src split8888_bgra.cpp      -o  split8888_bgra
g++ -fexceptions -std=c++11 -g -I../../../src split8888_rgba.cpp      -o  split8888_rgba
g++ -fexceptions -std=c++11 -g -I../../../src splitAAA2_cmyk.cpp      -o  splitAAA2_cmyk
g++ -fexceptions -std=c++11 -g -I../../../src splitAAA2_rgba.cpp      -o  splitAAA2_rgba
