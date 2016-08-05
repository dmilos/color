#ifndef color_YCgCo_trait_bound_double
#define color_YCgCo_trait_bound_double

#include "../../category.hpp"

#include "../../../_internal/utility/bound/YCgCo.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::YCgCo_double >
      : public ::color::_internal::utility::bound::YCgCo_scalar< unsigned, double >
      {
      };

   }
 }

#endif