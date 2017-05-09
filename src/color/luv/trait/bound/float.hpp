#ifndef color_luv_trait_bound_float
#define color_luv_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::luv_float >
      : public ::color::_internal::luv::bound::scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::luv_double >
      : public ::color::_internal::luv::bound::scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::luv_ldouble >
      : public ::color::_internal::luv::bound::scalar< unsigned, long double >
      {
      };

   }
 }

#endif
