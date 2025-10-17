#ifndef color_lms_akin_rgb
#define color_lms_akin_rgb

#include "../../generic/akin/lms.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, ::color::constant::lms::reference_enum reference_number, unsigned ... index >
     struct lms  < ::color::category::rgb< ::color::category::_internal::rgb_scramble< component_name, index ... > >, reference_number >
      {
       public:
         typedef ::color::category::lms  < component_name, reference_number > akin_type;
      };

   }
 }

#endif
