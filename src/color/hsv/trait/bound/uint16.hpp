#ifndef color_hsv_trait_bound_uint16
#define color_hsv_trait_bound_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsv_uint16 >
      : public ::color::_internal::utility::bound::general< std::uint16_t, unsigned >
      {
      };

   }
 }

#endif