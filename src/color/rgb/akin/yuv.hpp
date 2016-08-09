#ifndef color_rgb_akin_yuv
#define color_rgb_akin_yuv

#include "../../generic/akin/rgb.hpp"
#include "../category.hpp"
#include "../../yuv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< ::color::constant::yuv::reference_enum reference_number >struct rgb< ::color::category::yuv_uint8   <reference_number> >{ typedef ::color::category::rgb_uint8   akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct rgb< ::color::category::yuv_uint16  <reference_number> >{ typedef ::color::category::rgb_uint16  akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct rgb< ::color::category::yuv_uint32  <reference_number> >{ typedef ::color::category::rgb_uint32  akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct rgb< ::color::category::yuv_uint64  <reference_number> >{ typedef ::color::category::rgb_uint64  akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct rgb< ::color::category::yuv_float   <reference_number> >{ typedef ::color::category::rgb_float   akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct rgb< ::color::category::yuv_double  <reference_number> >{ typedef ::color::category::rgb_double  akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct rgb< ::color::category::yuv_ldouble <reference_number> >{ typedef ::color::category::rgb_ldouble akin_type; };

   }
 }

#endif
