#ifndef color_hsl_trait_bound_float
#define color_hsl_trait_bound_float

#include "../../category.hpp"

#include "../../../_internal/utility/bound/hsl.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsl_float >
      : public ::color::_internal::utility::bound::hsl_scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::hsl_double >
      : public ::color::_internal::utility::bound::hsl_scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::hsl_ldouble >
      : public ::color::_internal::utility::bound::hsl_scalar< unsigned, long double >
      {
      };

   }
 }

#endif