#ifndef color_rgb_trait_container_uint16
#define color_rgb_trait_container_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/container/cner655.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::rgb_uint16 >
      : public  ::color::_internal::utility::container::cner655<  unsigned  >
      {
      };

   }
 }

#endif