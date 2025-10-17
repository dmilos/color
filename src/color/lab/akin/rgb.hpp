#ifndef color_lab_akin_rgb
#define color_lab_akin_rgb

#include "../../generic/akin/lab.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, ::color::constant::lab::reference_enum reference_number, unsigned ... index >
     struct lab  < ::color::category::rgb< ::color::category::_internal::rgb_scramble< component_name, index ... > >, reference_number >
      {
       public:
         typedef ::color::category::lab  < component_name, reference_number> akin_type;
      };

   }
 }

#endif
