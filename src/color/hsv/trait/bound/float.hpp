#ifndef color_hsv_trait_bound_float
#define color_hsv_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsv_float >
      : public ::color::_internal::hsv::bound::scalar< typename ::color::trait::index< ::color::category::hsv_float >::instance_type, float >
      {
      };

    template< >
     struct bound< ::color::category::hsv_double >
      : public ::color::_internal::hsv::bound::scalar< typename ::color::trait::index< ::color::category::hsv_double >::instance_type, double >
      {
      };

    template< >
     struct bound< ::color::category::hsv_ldouble >
      : public ::color::_internal::hsv::bound::scalar< typename ::color::trait::index< ::color::category::hsv_ldouble >::instance_type, long double >
      {
      };

   }
 }

#endif
