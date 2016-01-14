#ifndef color_cmyk_trait_container_uint16
#define color_cmyk_trait_container_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/container/unsigned.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::cmyk_uint16 >
      : public ::color::_internal::utility::container::Unsigned< std::uint16_t, std::uint8_t,  unsigned, 4,  4 >
      {
      };

   }
 }

#endif