#!/bin/bash 

output_dir=out
copyright_file=../../src/color/copyright.hpp
include_color=../../src

pp2f0=color.pp2f0-complete.hpp
pp2f1=color.pp2f1-complete.hpp
pp2f2=color.pp2f2-complete.hpp
pp2f3=color.pp2f3-complete.hpp
pp2f4=color.pp2f4-complete.hpp


if [ ! -d ./${output_dir} ]; then
    mkdir ${output_dir}
fi

if [ -f ./${output_dir}/${pp2f0} ]; then
    rm  ./${output_dir}/${pp2f0}
fi
if [ -f ./${output_dir}/${pp2f1} ]; then
    rm  ./${output_dir}/${pp2f1}
fi
if [ -f ./${output_dir}/${pp2f2} ]; then
    rm  ./${output_dir}/${pp2f2}
fi
if [ -f ./${output_dir}/${pp2f3} ]; then
    rm  ./${output_dir}/${pp2f3}
fi

if [ -f ./${output_dir}/${pp2f4} ]; then
    rm  ./${output_dir}/${pp2f4}
fi


g++ ../../src/color/color.body.hpp  -o ./${output_dir}/${pp2f0} -E

sed '/^#/ d'                    < ./${output_dir}/${pp2f0} > ./${output_dir}/${pp2f1}
astyle --options=./astyle.conf  < ./${output_dir}/${pp2f1} > ./${output_dir}/${pp2f2}
cat -s                          < ./${output_dir}/${pp2f2} > ./${output_dir}/${pp2f3}

cat                             < ../../src/color/copyright.hpp     > ./${output_dir}/${pp2f4}
cat                             < ./${output_dir}/${pp2f3}            >> ./${output_dir}/${pp2f4}
