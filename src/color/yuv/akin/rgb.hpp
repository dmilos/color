#ifndef color_yuv_akin_rgb
#define color_yuv_akin_rgb

#include "../../generic/akin/yuv.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, ::color::constant::yuv::reference_enum reference_number, unsigned ... index >
     struct yuv  < ::color::category::rgb< ::color::category::_internal::rgb_scramble< component_name, index ... > >, reference_number >
      {
       public:
         typedef ::color::category::yuv  < component_name, reference_number> akin_type;
      };

   }
 }

#endif
