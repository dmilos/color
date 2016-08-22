#ifndef color_yuv_akin_hcg
#define color_yuv_akin_hcg

#include "../../generic/akin/yuv.hpp"
#include "../category.hpp"
#include "../../hcg/category.hpp"

namespace color
 {
  namespace akin
   {

    template< ::color::constant::yuv::reference_enum reference_number >struct yuv< ::color::category::hcg_uint8  , reference_number >{ typedef ::color::category::yuv_uint8  <reference_number> akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct yuv< ::color::category::hcg_uint16 , reference_number >{ typedef ::color::category::yuv_uint16 <reference_number> akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct yuv< ::color::category::hcg_uint32 , reference_number >{ typedef ::color::category::yuv_uint32 <reference_number> akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct yuv< ::color::category::hcg_uint64 , reference_number >{ typedef ::color::category::yuv_uint64 <reference_number> akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct yuv< ::color::category::hcg_float  , reference_number >{ typedef ::color::category::yuv_float  <reference_number> akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct yuv< ::color::category::hcg_double , reference_number >{ typedef ::color::category::yuv_double <reference_number> akin_type; };
    template< ::color::constant::yuv::reference_enum reference_number >struct yuv< ::color::category::hcg_ldouble, reference_number >{ typedef ::color::category::yuv_ldouble<reference_number> akin_type; };

   }
 }

#endif
