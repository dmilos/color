#ifndef color_YCgCo_trait_bound_ldouble
#define color_YCgCo_trait_bound_ldouble

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::YCgCo_ldouble >
      : public ::color::_internal::utility::bound::YCgCo_scalar< unsigned, long double >
      {
      };

   }
 }

#endif