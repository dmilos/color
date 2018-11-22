#!/bin/bash

OUTPUT_FOLDER=../../../tmp/pp2f


g++ ../../../src/color/color.body.hpp  -o ${OUTPUT_FOLDER}/color.pp2f0.hpp -E
sed '/^#/ d'                    < ${OUTPUT_FOLDER}/color.pp2f0.hpp > ${OUTPUT_FOLDER}/color.pp2f1.hpp
astyle --options=./astyle.conf  < ${OUTPUT_FOLDER}/color.pp2f1.hpp > ${OUTPUT_FOLDER}/color.pp2f2.hpp
cat -s                          < ${OUTPUT_FOLDER}/color.pp2f2.hpp > ${OUTPUT_FOLDER}/color.pp2f3.hpp

rm  ${OUTPUT_FOLDER}/color.pp2f4.hpp
cat                             < ../../../src/color/copyright.hpp      > ${OUTPUT_FOLDER}/color.pp2f4.hpp
cat                             < ${OUTPUT_FOLDER}/color.pp2f3.hpp     >> ${OUTPUT_FOLDER}/color.pp2f4.hpp