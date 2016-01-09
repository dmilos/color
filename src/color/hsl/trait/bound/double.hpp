#ifndef color_hsl_trait_bound_double
#define color_hsl_trait_bound_double

#include "../../category.hpp"

#include "../../../_internal/utility/bound/hsl.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsl_double >
      : public ::color::_internal::utility::bound::hsl_scalar< unsigned, double >
      {
      };

   }
 }

#endif