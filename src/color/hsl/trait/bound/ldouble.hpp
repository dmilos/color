#ifndef color_hsl_trait_bound_ldouble
#define color_hsl_trait_bound_ldouble

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsl_ldouble >
      : public ::color::_internal::utility::bound::hsl_scalar< unsigned, long double >
      {
      };

   }
 }

#endif