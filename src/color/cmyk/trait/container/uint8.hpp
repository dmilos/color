#ifndef color_cmyk_trait_container_uint8
#define color_cmyk_trait_container_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/container/cner2222.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::cmyk_uint8 >
      : public ::color::_internal::utility::container::cner2222<  unsigned  >
      {
      };

   }
 }

#endif
