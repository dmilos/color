#ifndef color_hsl_trait_bound_float
#define color_hsl_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsl_float >
      : public ::color::_internal::hsl::bound::scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::hsl_double >
      : public ::color::_internal::hsl::bound::scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::hsl_ldouble >
      : public ::color::_internal::hsl::bound::scalar< unsigned, long double >
      {
      };

   }
 }

#endif