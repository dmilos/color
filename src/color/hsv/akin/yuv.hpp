#ifndef color_hsv_akin_yuv
#define color_hsv_akin_yuv

#include "../../generic/akin/hsv.hpp"
#include "../category.hpp"
#include "../../yuv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< ::color::constant::yuv::reference_enum reference_number >struct hsv< ::color::category::yuv_uint8  <reference_number> >{ typedef ::color::category::hsv_uint8   akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct hsv< ::color::category::yuv_uint16 <reference_number> >{ typedef ::color::category::hsv_uint16  akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct hsv< ::color::category::yuv_uint32 <reference_number> >{ typedef ::color::category::hsv_uint32  akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct hsv< ::color::category::yuv_uint64 <reference_number> >{ typedef ::color::category::hsv_uint64  akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct hsv< ::color::category::yuv_float  <reference_number> >{ typedef ::color::category::hsv_float   akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct hsv< ::color::category::yuv_double <reference_number> >{ typedef ::color::category::hsv_double  akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct hsv< ::color::category::yuv_ldouble<reference_number> >{ typedef ::color::category::hsv_ldouble akin_type; };

   }
 }

#endif
