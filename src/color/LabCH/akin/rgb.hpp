#ifndef color_LabCH_akin_rgb
#define color_LabCH_akin_rgb

#include "../../generic/akin/LabCH.hpp"
#include "../category.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename component_name, unsigned ... index >
     struct LabCH< ::color::category::rgb< ::color::category::_internal::rgb_scramble< component_name, index ... > > >
      {
       public:
         typedef ::color::category::LabCH < component_name > akin_type;
      };

   }
 }

#endif
