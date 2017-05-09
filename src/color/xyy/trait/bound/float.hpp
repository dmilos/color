#ifndef color_xyy_trait_bound_float
#define color_xyy_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::xyy_float >
      : public ::color::_internal::xyy::bound::scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::xyy_double >
      : public ::color::_internal::xyy::bound::scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::xyy_ldouble >
      : public ::color::_internal::xyy::bound::scalar< unsigned, long double >
      {
      };

   }
 }

#endif
