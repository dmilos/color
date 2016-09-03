#!/bin/bash 

output_dir=out
copyright_file=../../src/color/copyright.hpp
include_color=../../src

if [ -f ./${output_dir} ]; then 
    mkdir $(output_dir)
fi


g++ ../../src/color/color.body.hpp  -o ./${output_dir}/color.pp2f0.hpp -E 


sed '/^#/ d'                    < ./${output_dir}/color.pp2f0.hpp > ./${output_dir}/color.pp2f1.hpp
astyle --options=./astyle.conf  < ./${output_dir}/color.pp2f1.hpp > ./${output_dir}/color.pp2f2.hpp
cat -s                          < ./${output_dir}/color.pp2f2.hpp > ./${output_dir}/color.pp2f3.hpp

rm  ./${output_dir}/color.pp2f4.hpp
cat                             < ${copyright_file}                 > ./${output_dir}/color.pp2f4.hpp
cat                             < ./${output_dir}/color.pp2f3.hpp  >> ./${output_dir}/color.pp2f4.hpp