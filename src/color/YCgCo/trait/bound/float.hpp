#ifndef color_YCgCo_trait_bound_float
#define color_YCgCo_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::YCgCo_float >
      : public ::color::_internal::YCgCo::bound::scalar< typename ::color::trait::index< ::color::category::YCgCo_float >::instance_type, float >
      {
      };

    template< >
     struct bound< ::color::category::YCgCo_double >
      : public ::color::_internal::YCgCo::bound::scalar< typename ::color::trait::index< ::color::category::YCgCo_double >::instance_type, double >
      {
      };

    template< >
     struct bound< ::color::category::YCgCo_ldouble >
      : public ::color::_internal::YCgCo::bound::scalar< typename ::color::trait::index< ::color::category::YCgCo_ldouble >::instance_type, long double >
      {
      };

   }
 }

#endif
