#ifndef color_lab_trait_bound_float
#define color_lab_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"





namespace color
 {
  namespace trait
   {

    template< ::color::constant::lab::reference_enum reference_number >
     struct bound< ::color::category::lab_float<reference_number> >
      : public ::color::_internal::lab::bound::scalar< typename ::color::trait::index< ::color::category::lab_float<reference_number> >::instance_type, float, reference_number >
      {
      };

    template< ::color::constant::lab::reference_enum reference_number >
     struct bound< ::color::category::lab_double<reference_number> >
      : public ::color::_internal::lab::bound::scalar< typename ::color::trait::index< ::color::category::lab_double<reference_number> >::instance_type, double, reference_number >
      {
      };

    template< ::color::constant::lab::reference_enum reference_number >
     struct bound< ::color::category::lab_ldouble<reference_number> >
      : public ::color::_internal::lab::bound::scalar< typename ::color::trait::index< ::color::category::lab_ldouble<reference_number> >::instance_type, long double, reference_number >
      {
      };

   }
 }

#endif
