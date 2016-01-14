#ifndef color_rgb_trait_bound_uint16
#define color_rgb_trait_bound_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/bound/655.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::rgb_uint16 >
      : public ::color::_internal::utility::bound::bound655< unsigned >
      {
      };

   }
 }

#endif