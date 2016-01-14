#ifndef color_rgb_trait_bound_uint48
#define color_rgb_trait_bound_uint48

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::rgb_uint48 >
      : public ::color::_internal::utility::bound::general< std::uint16_t, unsigned >
      {
      };

   }
 }

#endif