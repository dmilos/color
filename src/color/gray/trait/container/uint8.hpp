#ifndef color_gray_trait_container_uint8
#define color_gray_trait_container_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/container/unsigned.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::gray_uint8 >
      : public ::color::_internal::utility::container::Unsigned< std::uint8_t,  std::uint8_t, unsigned,  1, 8  > 
      {
      };

   }
 }

#endif
