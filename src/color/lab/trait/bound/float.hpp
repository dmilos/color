#ifndef color_lab_trait_bound_float
#define color_lab_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./constrain.hpp"





namespace color
 {
  namespace trait
   {

    template< ::color::constant::lab::reference_enum reference_number >
     struct bound< ::color::category::lab_float<reference_number> >
      : public ::color::_internal::lab::bound::constrain<  float,      typename ::color::trait::index< ::color::category::lab_float<reference_number> >::instance_type,reference_number >
      {
      };

    template< ::color::constant::lab::reference_enum  reference_number >
     struct bound< ::color::category::lab_double<reference_number> >
      : public ::color::_internal::lab::bound::constrain< double,      typename ::color::trait::index< ::color::category::lab_double<reference_number> >::instance_type,  reference_number >
      {
      };

    template< ::color::constant::lab::reference_enum  reference_number >
     struct bound< ::color::category::lab_ldouble<reference_number> >
      : public ::color::_internal::lab::bound::constrain< long double, typename ::color::trait::index< ::color::category::lab_ldouble<reference_number> >::instance_type, reference_number >
      {
      };

   }
 }

#endif
