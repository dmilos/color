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
      : public ::color::_internal::xyy::bound::scalar< typename ::color::trait::index< ::color::category::xyy_float >::instance_type, float >
      {
      };

    template< >
     struct bound< ::color::category::xyy_double >
      : public ::color::_internal::xyy::bound::scalar< typename ::color::trait::index< ::color::category::xyy_double >::instance_type, double >
      {
      };

    template< >
     struct bound< ::color::category::xyy_ldouble >
      : public ::color::_internal::xyy::bound::scalar< typename ::color::trait::index< ::color::category::xyy_ldouble >::instance_type, long double >
      {
      };

   }
 }

#endif
