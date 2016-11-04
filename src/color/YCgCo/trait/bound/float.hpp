#ifndef color_YCgCo_trait_bound_float
#define color_YCgCo_trait_bound_float

#include "../../category.hpp"

#include "../../../_internal/utility/bound/YCgCo.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::YCgCo_float >
      : public ::color::_internal::utility::bound::YCgCo_scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::YCgCo_double >
      : public ::color::_internal::utility::bound::YCgCo_scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::YCgCo_ldouble >
      : public ::color::_internal::utility::bound::YCgCo_scalar< unsigned, long double >
      {
      };

   }
 }

#endif
