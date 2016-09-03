#!/bin/bash 

output_dir=out
copyright_file=../../src/color/copyright.hpp
include_color=../../src


if [ -f ./out ]; then 
    mkdir out
fi  

if [ -f ./out/color.pp2f0-no-yiq.hpp ]; then 
    rm  ./out/color.pp2f0-no-yiq.hpp 
fi
if [ -f ./out/color.pp2f1-no-yiq.hpp ]; then 
    rm  ./out/color.pp2f1-no-yiq.hpp 
fi
if [ -f ./out/color.pp2f2-no-yiq.hpp ]; then 
    rm  ./out/color.pp2f2-no-yiq.hpp 
fi
if [ -f ./out/color.pp2f3-no-yiq.hpp ]; then 
    rm  ./out/color.pp2f3-no-yiq.hpp 
fi

g++ ../../src/color/color.body.hpp  -o ./out/color.pp2f0.hpp -E  -D COLOR_EXCLUDE_MODEL_YIQ


sed '/^#/ d'                    < ./out/color.pp2f0.hpp > ./out/color.pp2f1.hpp
astyle --options=./astyle.conf  < ./out/color.pp2f1.hpp > ./out/color.pp2f2.hpp
cat -s                          < ./out/color.pp2f2.hpp > ./out/color.pp2f3.hpp

rm  ./out/color.pp2f4-no-yiq.hpp
cat                             < ../../src/color/copyright.hpp     > ./out/color.pp2f4-no-yiq.hpp
cat                             < ./out/color.pp2f3.hpp            >> ./out/color.pp2f4-no-yiq.hpp