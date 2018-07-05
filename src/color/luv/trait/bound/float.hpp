#ifndef color_luv_trait_bound_float
#define color_luv_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./constrain.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::luv_float >
      : public ::color::_internal::luv::bound::constrain< float,       typename ::color::trait::index< ::color::category::luv_float >::instance_type >
      {
      };

    template< >
     struct bound< ::color::category::luv_double >
      : public ::color::_internal::luv::bound::constrain< double,      typename ::color::trait::index< ::color::category::luv_double >::instance_type >
      {
      };

    template< >
     struct bound< ::color::category::luv_ldouble >
      : public ::color::_internal::luv::bound::constrain< long double, typename ::color::trait::index< ::color::category::luv_ldouble >::instance_type >
      {
      };

   }
 }

#endif
