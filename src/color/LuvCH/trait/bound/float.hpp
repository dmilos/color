#ifndef color_LuvCH_trait_bound_float
#define color_LuvCH_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::LuvCH_float >
      : public ::color::_internal::LuvCH::bound::scalar< typename ::color::trait::index< ::color::category::LuvCH_float >::instance_type, float >
      {
      };

    template< >
     struct bound< ::color::category::LuvCH_double >
      : public ::color::_internal::LuvCH::bound::scalar< typename ::color::trait::index< ::color::category::LuvCH_double >::instance_type, double >
      {
      };

    template< >
     struct bound< ::color::category::LuvCH_ldouble >
      : public ::color::_internal::LuvCH::bound::scalar< typename ::color::trait::index< ::color::category::LuvCH_ldouble >::instance_type, long double >
      {
      };

   }
 }

#endif
