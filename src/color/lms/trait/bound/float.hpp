#ifndef color_lms_trait_bound_float
#define color_lms_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::lms::reference_enum reference_number >
     struct bound< ::color::category::lms_float<reference_number> >
      : public ::color::_internal::lms::bound::scalar< unsigned, float, reference_number >
      {
      };

    template< ::color::constant::lms::reference_enum reference_number >
     struct bound< ::color::category::lms_double<reference_number> >
      : public ::color::_internal::lms::bound::scalar< unsigned, double, reference_number >
      {
      };

    template< ::color::constant::lms::reference_enum reference_number >
     struct bound< ::color::category::lms_ldouble<reference_number> >
      : public ::color::_internal::lms::bound::scalar< unsigned, long double, reference_number >
      {
      };

   }
 }

#endif
