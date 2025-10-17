#ifndef color_YDbDr_akin_rgb
#define color_YDbDr_akin_rgb

#include "../../generic/akin/YDbDr.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, unsigned ... index >
     struct YDbDr< ::color::category::rgb< ::color::category::_internal::rgb_scramble<component_name, index ... > > >
      {
       public:
         typedef ::color::category::YDbDr< component_name> akin_type;
      };

   }
 }

#endif
