#!/bin/bash

output_dir=out
copyright_file=../../src/color/copyright.hpp
include_color=../../src


if [ ! -d ./${output_dir} ]; then
    mkdir ${output_dir}
fi

if [ -f ./out/color-only-rgb.pp2f0.hpp ]; then
    rm  ./out/color-only-rgb.pp2f0.hpp
fi
if [ -f ./out/color-only-rgb.pp2f1.hpp ]; then
    rm  ./out/color-only-rgb.pp2f1.hpp
fi
if [ -f ./out/color-only-rgb.pp2f2.hpp ]; then
    rm  ./out/color-only-rgb.pp2f2.hpp
fi
if [ -f ./out/color-only-rgb.pp2f3.hpp ]; then
    rm  ./out/color-only-rgb.pp2f3.hpp
fi

if [ -f ./out/color.pp2f4-only-rgb.hpp ]; then
    rm  ./out/color.pp2f4-only-rgb.hpp
fi

g++ ../../src/color/rgb.body.hpp   -std=c++11  -o ./out/color.pp2f0-only-rgb.hpp -E

sed '/^#/ d'                    < ./out/color.pp2f0-only-rgb.hpp > ./out/color.pp2f1-only-rgb.hpp
astyle --options=./astyle.conf  < ./out/color.pp2f1-only-rgb.hpp > ./out/color.pp2f2-only-rgb.hpp
cat -s                          < ./out/color.pp2f2-only-rgb.hpp > ./out/color.pp2f3-only-rgb.hpp

cat                             < ../../src/color/copyright.hpp     > ./out/color.pp2f4-only-rgb.hpp
cat                             < ./out/color.pp2f3-only-rgb.hpp            >> ./out/color.pp2f4-only-rgb.hpp