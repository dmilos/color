#ifndef color_lms_trait_bound_float
#define color_lms_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::lms_float >
      : public ::color::_internal::lms::bound::scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::lms_double >
      : public ::color::_internal::lms::bound::scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::lms_ldouble >
      : public ::color::_internal::lms::bound::scalar< unsigned, long double >
      {
      };

   }
 }

#endif
