#ifndef color_tsl_trait_bound_float
#define color_tsl_trait_bound_float

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::tsl_float >
      : public ::color::_internal::utility::bound::general< float, typename ::color::trait::index< ::color::category::tsl_float >::instance_type >
      {
      };

    template< >
     struct bound< ::color::category::tsl_double >
      : public ::color::_internal::utility::bound::general< double, typename ::color::trait::index< ::color::category::tsl_double >::instance_type >
      {
      };

    template< >
     struct bound< ::color::category::tsl_ldouble >
      : public ::color::_internal::utility::bound::general< long double, typename ::color::trait::index< ::color::category::tsl_ldouble >::instance_type >
      {
      };

   }
 }

#endif