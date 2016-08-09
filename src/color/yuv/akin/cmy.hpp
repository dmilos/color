#ifndef color_yuv_akin_cmy
#define color_yuv_akin_cmy

#include "../../generic/akin/yuv.hpp"
#include "../category.hpp"
#include "../../cmy/category.hpp"

namespace color
 {
  namespace akin
   {

    template< ::color::constant::yuv::reference_enum reference_number > struct yuv< ::color::category::cmy_uint8  , reference_number >{ typedef ::color::category::yuv_uint8  <reference_number> akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number > struct yuv< ::color::category::cmy_uint16 , reference_number >{ typedef ::color::category::yuv_uint16 <reference_number> akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number > struct yuv< ::color::category::cmy_uint32 , reference_number >{ typedef ::color::category::yuv_uint32 <reference_number> akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number > struct yuv< ::color::category::cmy_uint64 , reference_number >{ typedef ::color::category::yuv_uint64 <reference_number> akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number > struct yuv< ::color::category::cmy_float  , reference_number >{ typedef ::color::category::yuv_float  <reference_number> akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number > struct yuv< ::color::category::cmy_double , reference_number >{ typedef ::color::category::yuv_double <reference_number> akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number > struct yuv< ::color::category::cmy_ldouble, reference_number >{ typedef ::color::category::yuv_ldouble<reference_number> akin_type; };

   }
 }

#endif
