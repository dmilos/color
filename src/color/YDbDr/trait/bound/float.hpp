#ifndef color_YDbDr_trait_bound_float
#define color_YDbDr_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::YDbDr_float >
      : public ::color::_internal::YDbDr::bound::scalar< typename ::color::trait::index< ::color::category::YDbDr_float >::instance_type, float >
      {
      };

    template< >
     struct bound< ::color::category::YDbDr_double >
      : public ::color::_internal::YDbDr::bound::scalar< typename ::color::trait::index< ::color::category::YDbDr_double >::instance_type, double >
      {
      };

    template< >
     struct bound< ::color::category::YDbDr_ldouble >
      : public ::color::_internal::YDbDr::bound::scalar< typename ::color::trait::index< ::color::category::YDbDr_ldouble >::instance_type, long double >
      {
      };

   }
 }

#endif
