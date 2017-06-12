#ifndef color_hwb_trait_bound_float
#define color_hwb_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hwb_float >
      : public ::color::_internal::hwb::bound::scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::hwb_double >
      : public ::color::_internal::hwb::bound::scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::hwb_ldouble >
      : public ::color::_internal::hwb::bound::scalar< unsigned, long double >
      {
      };

   }
 }

#endif
