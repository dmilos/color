pwd

cd ./invert
./make.sh
cd ..

cd ./blend
./make.sh
cd ..

cd ./distance
./make.sh
cd ..


g++ -fexceptions -std=c++11 -g -I../../../src convex1.cpp           -o  convex1
g++ -fexceptions -std=c++11 -g -I../../../src convex2.cpp           -o  convex2
g++ -fexceptions -std=c++11 -g -I../../../src mix_alpha.cpp         -o  mix_alpha
g++ -fexceptions -std=c++11 -g -I../../../src mix_noalpha.cpp       -o  mix_noalpha
g++ -fexceptions -std=c++11 -g -I../../../src bias.cpp              -o  bias
g++ -fexceptions -std=c++11 -g -I../../../src gain.cpp              -o  gain
g++ -fexceptions -std=c++11 -g -I../../../src gamma.cpp             -o  gamma
g++ -fexceptions -std=c++11 -g -I../../../src addition.cpp          -o addition
g++ -fexceptions -std=c++11 -g -I../../../src scale.cpp             -o scale
g++ -fexceptions -std=c++11 -g -I../../../src subtract.cpp          -o subtract
g++ -fexceptions -std=c++11 -g -I../../../src divide.cpp            -o divide
g++ -fexceptions -std=c++11 -g -I../../../src multiply.cpp          -o multiply

