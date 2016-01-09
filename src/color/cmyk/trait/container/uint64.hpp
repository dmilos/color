#ifndef color_cmyk_trait_container_uint64
#define color_cmyk_trait_container_uint64

#include "../../category.hpp"

#include "../../../_internal/utility/container/unsigned.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::cmyk_uint64 >
      : public ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint16_t, unsigned, 4, 16 > 
      {
      };

   }
 }

#endif