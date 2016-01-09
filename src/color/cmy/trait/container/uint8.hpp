#ifndef color_cmy_trait_container_uint8
#define color_cmy_trait_container_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/container/cner332.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::cmy_uint8 >
      : public  ::color::_internal::utility::container::cner332<  unsigned  >
      {
      };

   }
 }

#endif
