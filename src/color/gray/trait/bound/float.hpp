#ifndef color_gray_trait_bound_float
#define color_gray_trait_bound_float

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::gray_float >
      : public ::color::_internal::utility::bound::general< float, typename ::color::trait::index< ::color::category::gray_float >::instance_type >
      {
      };

    template< >
     struct bound< ::color::category::gray_double >
      : public ::color::_internal::utility::bound::general< double, typename ::color::trait::index< ::color::category::gray_double >::instance_type >
      {
      };

    template< >
     struct bound< ::color::category::gray_ldouble >
      : public ::color::_internal::utility::bound::general< long double, typename ::color::trait::index< ::color::category::gray_ldouble >::instance_type >
      {
      };


   }
 }

#endif