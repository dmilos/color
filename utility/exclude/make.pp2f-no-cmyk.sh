#!/bin/bash 

output_dir=out
copyright_file=../../src/color/copyright.hpp
include_color=../../src

pp2f0=color.pp2f0-no-cmyk.hpp
pp2f1=color.pp2f1-no-cmyk.hpp
pp2f2=color.pp2f2-no-cmyk.hpp
pp2f3=color.pp2f3-no-cmyk.hpp
pp2f4=color.pp2f4-no-cmyk.hpp


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


g++ ../../src/color/color.body.hpp  -o ./${output_dir}/${pp2f0} -E  -D COLOR_EXCLUDE_MODEL_CMYK

sed '/^#/ d'                    < ./${output_dir}/${pp2f0} > ./${output_dir}/${pp2f1}
astyle --options=./astyle.conf  < ./${output_dir}/${pp2f1} > ./${output_dir}/${pp2f2}
cat -s                          < ./${output_dir}/${pp2f2} > ./${output_dir}/${pp2f3}

cat                             < ../../src/color/copyright.hpp     > ./${output_dir}/${pp2f4}
cat                             < ./${output_dir}/${pp2f3}            >> ./${output_dir}/${pp2f4}
