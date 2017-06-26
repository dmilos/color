#ifndef color_lms_trait_component_float
#define color_lms_trait_component_float

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::lms::reference_enum reference_number >
     struct component< ::color::category::lms_float<reference_number> >
      : public ::color::_internal::utility::component::array< float, typename ::color::trait::index< ::color::category::lms_float<reference_number> >::instance_type >
      {
      };

    template< ::color::constant::lms::reference_enum reference_number >
     struct component< ::color::category::lms_double<reference_number> >
      : public ::color::_internal::utility::component::array< double, typename ::color::trait::index< ::color::category::lms_double<reference_number> >::instance_type >
      {
      };

    template< ::color::constant::lms::reference_enum reference_number >
     struct component< ::color::category::lms_ldouble<reference_number> >
      : public ::color::_internal::utility::component::array< long double, typename ::color::trait::index< ::color::category::lms_ldouble<reference_number> >::instance_type >
      {
      };

   }
 }

#endif