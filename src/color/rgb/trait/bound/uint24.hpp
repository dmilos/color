#ifndef color_rgb_trait_bound_uint24
#define color_rgb_trait_bound_uint24

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::rgb_uint24 >
      : public ::color::_internal::utility::bound::general< std::uint8_t, unsigned >
      {
      };

   }
 }

#endif