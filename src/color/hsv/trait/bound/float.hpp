#ifndef color_hsv_trait_bound_float
#define color_hsv_trait_bound_float

#include "../../category.hpp"

#include "../../../_internal/utility/bound/hsv.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsv_float >
      : public ::color::_internal::utility::bound::hsv_scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::hsv_double >
      : public ::color::_internal::utility::bound::hsv_scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::hsv_ldouble >
      : public ::color::_internal::utility::bound::hsv_scalar< unsigned, long double >
      {
      };

   }
 }

#endif