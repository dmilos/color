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
      : public ::color::_internal::yiq::bound::scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::yiq_double >
      : public ::color::_internal::yiq::bound::scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::yiq_ldouble >
      : public ::color::_internal::yiq::bound::scalar< unsigned, long double >
      {
      };

   }
 }

#endif
