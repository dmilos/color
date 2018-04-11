cd ./gray
./make.sh
cd ..


g++ -fexceptions -std=c++11 -g -I../../../src blue_cmy.cpp     -o  blue_cmy
g++ -fexceptions -std=c++11 -g -I../../../src blue_cmyk.cpp    -o  blue_cmyk
g++ -fexceptions -std=c++11 -g -I../../../src blue_gray.cpp    -o  blue_gray
g++ -fexceptions -std=c++11 -g -I../../../src blue_hsl.cpp     -o  blue_hsl
g++ -fexceptions -std=c++11 -g -I../../../src blue_hsv.cpp     -o  blue_hsv
g++ -fexceptions -std=c++11 -g -I../../../src blue_rgb.cpp     -o  blue_rgb
g++ -fexceptions -std=c++11 -g -I../../../src blue_yiq.cpp     -o  blue_yiq
g++ -fexceptions -std=c++11 -g -I../../../src blue_yuv.cpp     -o  blue_yuv
g++ -fexceptions -std=c++11 -g -I../../../src green_cmy.cpp    -o  green_cmy
g++ -fexceptions -std=c++11 -g -I../../../src green_cmyk.cpp   -o  green_cmyk
g++ -fexceptions -std=c++11 -g -I../../../src green_gray.cpp   -o  green_gray
g++ -fexceptions -std=c++11 -g -I../../../src green_hsl.cpp    -o  green_hsl
g++ -fexceptions -std=c++11 -g -I../../../src green_hsv.cpp    -o  green_hsv
g++ -fexceptions -std=c++11 -g -I../../../src green_rgb.cpp    -o  green_rgb
g++ -fexceptions -std=c++11 -g -I../../../src green_yiq.cpp    -o  green_yiq
g++ -fexceptions -std=c++11 -g -I../../../src green_yuv.cpp    -o  green_yuv
g++ -fexceptions -std=c++11 -g -I../../../src red_cmy.cpp      -o  red_cmy
g++ -fexceptions -std=c++11 -g -I../../../src red_cmyk.cpp     -o  red_cmyk
g++ -fexceptions -std=c++11 -g -I../../../src red_gray.cpp     -o  red_gray
g++ -fexceptions -std=c++11 -g -I../../../src red_hsl.cpp      -o  red_hsl
g++ -fexceptions -std=c++11 -g -I../../../src red_hsv.cpp      -o  red_hsv
g++ -fexceptions -std=c++11 -g -I../../../src red_rgb.cpp      -o  red_rgb
g++ -fexceptions -std=c++11 -g -I../../../src red_yiq.cpp      -o  red_yiq
g++ -fexceptions -std=c++11 -g -I../../../src red_yuv.cpp      -o  red_yuv
g++ -fexceptions -std=c++11 -g -I../../../src hue_rgb.cpp       -o  hue_rgb
g++ -fexceptions -std=c++11 -g -I../../../src hue_rgb_acos.cpp  -o  hue_rgb_acos
g++ -fexceptions -std=c++11 -g -I../../../src hue_rgb_atan2.cpp -o  hue_rgb_atan2
g++ -fexceptions -std=c++11 -g -I../../../src hue_rgb_hex.cpp   -o  hue_rgb_hex
g++ -fexceptions -std=c++11 -g -I../../../src hue_rgb_polar.cpp -o  hue_rgb_polar
