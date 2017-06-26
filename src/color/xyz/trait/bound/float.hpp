#ifndef color_xyz_trait_bound_float
#define color_xyz_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::xyz_float >
      : public ::color::_internal::xyz::bound::scalar< typename ::color::trait::index< ::color::category::xyz_float >::instance_type, float >
      {
      };

    template< >
     struct bound< ::color::category::xyz_double >
      : public ::color::_internal::xyz::bound::scalar< typename ::color::trait::index< ::color::category::xyz_double >::instance_type, double >
      {
      };

    template< >
     struct bound< ::color::category::xyz_ldouble >
      : public ::color::_internal::xyz::bound::scalar< typename ::color::trait::index< ::color::category::xyz_ldouble >::instance_type, long double >
      {
      };

   }
 }

#endif
