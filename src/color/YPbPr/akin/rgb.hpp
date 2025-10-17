#ifndef color_YPbPr_akin_rgb
#define color_YPbPr_akin_rgb

#include "../../generic/akin/YPbPr.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, ::color::constant::YPbPr::reference_enum reference_number, unsigned ... index >
     struct YPbPr< ::color::category::rgb< ::color::category::_internal::rgb_scramble< component_name, index ... > >, reference_number >
      {
       public:
         typedef ::color::category::YPbPr< component_name, reference_number > akin_type;
      };

   }
 }

#endif
