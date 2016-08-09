#ifndef color_cmy_akin_yuv
#define color_cmy_akin_yuv

#include "../../generic/akin/cmy.hpp"
#include "../category.hpp"
#include "../../yuv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< ::color::constant::yuv::reference_enum reference_number >struct cmy< ::color::category::yuv_uint8  <reference_number> >{ typedef ::color::category::cmy_uint8   akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct cmy< ::color::category::yuv_uint16 <reference_number> >{ typedef ::color::category::cmy_uint16  akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct cmy< ::color::category::yuv_uint32 <reference_number> >{ typedef ::color::category::cmy_uint32  akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct cmy< ::color::category::yuv_uint64 <reference_number> >{ typedef ::color::category::cmy_uint64  akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct cmy< ::color::category::yuv_float  <reference_number> >{ typedef ::color::category::cmy_float   akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct cmy< ::color::category::yuv_double <reference_number> >{ typedef ::color::category::cmy_double  akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct cmy< ::color::category::yuv_ldouble<reference_number> >{ typedef ::color::category::cmy_ldouble akin_type; };

   }
 }

#endif
