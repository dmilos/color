#ifndef color_hsi_trait_bound_float
#define color_hsi_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsi_float >
      : public ::color::_internal::hsi::bound::scalar< typename ::color::trait::index< ::color::category::hsi_float >::instance_type, float >
      {
      };

    template< >
     struct bound< ::color::category::hsi_double >
      : public ::color::_internal::hsi::bound::scalar< typename ::color::trait::index< ::color::category::hsi_double >::instance_type, double >
      {
      };

    template< >
     struct bound< ::color::category::hsi_ldouble >
      : public ::color::_internal::hsi::bound::scalar< typename ::color::trait::index< ::color::category::hsi_ldouble >::instance_type, long double >
      {
      };

   }
 }

#endif
