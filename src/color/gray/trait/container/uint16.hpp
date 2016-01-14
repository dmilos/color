#ifndef color_gray_trait_container_uint16
#define color_gray_trait_container_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/container/unsigned.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::gray_uint16 >
      : public ::color::_internal::utility::container::Unsigned< std::uint16_t, std::uint16_t, unsigned, 1, 16 > 
      {
      };

   }
 }

#endif