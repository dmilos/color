mkdir out

if [ -f ./out/color.pp2f0-no-YPbPr.hpp ]; then 
    rm  ./out/color.pp2f0-no-YPbPr.hpp 
fi
if [ -f ./out/color.pp2f1-no-YPbPr.hpp ]; then 
    rm  ./out/color.pp2f1-no-YPbPr.hpp 
fi
if [ -f ./out/color.pp2f2-no-YPbPr.hpp ]; then 
    rm  ./out/color.pp2f2-no-YPbPr.hpp 
fi
if [ -f ./out/color.pp2f3-no-YPbPr.hpp ]; then 
    rm  ./out/color.pp2f3-no-YPbPr.hpp 
fi

g++ ../../src/color/color.body.hpp  -o ./out/color.pp2f0-no-YPbPr.hpp -E  -D COLOR_EXCLUDE_MODEL_YPbPr


sed '/^#/ d'                    < ./out/color.pp2f0-no-YPbPr.hpp > ./out/color.pp2f1-no-YPbPr.hpp
astyle --options=./astyle.conf  < ./out/color.pp2f1-no-YPbPr.hpp > ./out/color.pp2f2-no-YPbPr.hpp
cat -s                          < ./out/color.pp2f2-no-YPbPr.hpp > ./out/color.pp2f3-no-YPbPr.hpp

rm  ./out/color.pp2f4-no-YPbPr.hpp
cat                             < ../../src/color/copyright.hpp     > ./out/color.pp2f4-no-YPbPr.hpp
cat                             < ./out/color.pp2f3.hpp            >> ./out/color.pp2f4-no-YPbPr.hpp