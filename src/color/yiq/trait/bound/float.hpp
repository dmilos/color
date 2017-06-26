#ifndef color_yiq_trait_bound_float
#define color_yiq_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::yiq_float >
      : public ::color::_internal::yiq::bound::scalar< typename ::color::trait::index< ::color::category::yiq_float >::instance_type, float >
      {
      };

    template< >
     struct bound< ::color::category::yiq_double >
      : public ::color::_internal::yiq::bound::scalar< typename ::color::trait::index< ::color::category::yiq_double >::instance_type, double >
      {
      };

    template< >
     struct bound< ::color::category::yiq_ldouble >
      : public ::color::_internal::yiq::bound::scalar< typename ::color::trait::index< ::color::category::yiq_ldouble >::instance_type, long double >
      {
      };

   }
 }

#endif
