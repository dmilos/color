#ifndef color_hsv_trait_bound_double
#define color_hsv_trait_bound_double

#include "../../category.hpp"

#include "../../../_internal/utility/bound/hsv.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsv_double >
      : public ::color::_internal::utility::bound::hsv_scalar< unsigned, double >
      {
      };

   }
 }

#endif