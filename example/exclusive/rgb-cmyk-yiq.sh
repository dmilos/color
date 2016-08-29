#!/bin/bash 

output_dir=out
output_0th=color.pp2f0-rgb-cmyk-yiq.hpp
output_1st=color.pp2f1-rgb-cmyk-yiq.hpp
output_2nd=color.pp2f2-rgb-cmyk-yiq.hpp
output_3rd=color.pp2f3-rgb-cmyk-yiq.hpp
output_4th=color.pp2f4-rgb-cmyk-yiq.hpp

copyright_file=../../src/color/copyright.hpp

input_dir=.
input_main=rgb-cmyk-yiq.hpp

include_color=../../src


if [ -f ./${output_dir} ]; then 
    mkdir $(output_dir)
fi

g++ ${input_dir}/${input_main} -std=c++11 -I${include_color} -o ./${output_dir}/${output_0th} -E 


sed '/^#/ d'                    < ./${output_dir}/${output_0th} > ./${output_dir}/${output_1st}
astyle --options=./astyle.conf  < ./${output_dir}/${output_1st} > ./${output_dir}/${output_2nd}
cat -s                          < ./${output_dir}/${output_2nd} > ./${output_dir}/${output_3rd}

if [ -f ./${output_dir}/${output_4th} ]; then 
    rm  ./${output_dir}/${output_4th}
fi 

cat                             < ${copyright_file}                 > ./${output_dir}/${output_4th}
cat                             < ./${output_dir}/${output_3rd}    >> ./${output_dir}/${output_4th}
