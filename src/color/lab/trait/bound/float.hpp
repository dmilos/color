#ifndef color_lab_trait_bound_float
#define color_lab_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::lab_float >
      : public ::color::_internal::lab::bound::scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::lab_double >
      : public ::color::_internal::lab::bound::scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::lab_ldouble >
      : public ::color::_internal::lab::bound::scalar< unsigned, long double >
      {
      };

   }
 }

#endif
