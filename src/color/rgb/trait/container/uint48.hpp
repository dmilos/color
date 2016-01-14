#ifndef color_rgb_trait_container_uint48
#define color_rgb_trait_container_uint48

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::rgb_uint48 >
      : public ::color::_internal::utility::container::array< std::uint16_t, 3 >
      {
      };

   }
 }

#endif