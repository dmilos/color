
#include "./generic/generic.hpp"

#ifndef COLOR_EXCLUDE_MODEL_GRAY
#include "./gray/gray.hpp"
#endif

#ifndef COLOR_EXCLUDE_MODEL_CMY
#include "./cmy/cmy.hpp"
#endif

#ifndef COLOR_EXCLUDE_MODEL_CMYK
#include "./cmyk/cmyk.hpp"
#endif

#ifndef COLOR_EXCLUDE_MODEL_HSL
#include "./hsl/hsl.hpp"
#endif

#ifndef COLOR_EXCLUDE_MODEL_HSV
#include "./hsv/hsv.hpp"
#endif

#ifndef COLOR_EXCLUDE_MODEL_HSI
#include "./hsi/hsi.hpp"
#endif

#ifndef COLOR_EXCLUDE_MODEL_RGB
#include "./rgb/rgb.hpp"
#endif

#ifndef COLOR_EXCLUDE_MODEL_YIQ
#include "./yiq/yiq.hpp"
#endif

#ifndef COLOR_EXCLUDE_MODEL_YUV
#include "./yuv/yuv.hpp"
#endif

#ifndef COLOR_EXCLUDE_MODEL_YCgCo
#include "./YCgCo/YCgCo.hpp"
#endif

#ifndef COLOR_EXCLUDE_MODEL_YDbDr
#include "./YDbDr/YDbDr.hpp"
#endif

#ifndef COLOR_EXCLUDE_MODEL_YPbPr
#include "./YPbPr/YPbPr.hpp"
#endif


#include "./generic/operation/operation.hpp"
#include "./generic/compare/compare.hpp"
#include "./generic/make/make.hpp"

using namespace ::color::operation::arithmetic;
using namespace ::color::compare::operators;
