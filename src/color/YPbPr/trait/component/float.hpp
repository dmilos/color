#ifndef color_YPbPr_trait_component_float
#define color_YPbPr_trait_component_float

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct component< ::color::category::YPbPr_float<reference_number> >
      : public ::color::_internal::utility::component::array< float >
      {
      };

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct component< ::color::category::YPbPr_double<reference_number> >
      : public ::color::_internal::utility::component::array< double >
      {
      };

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct component< ::color::category::YPbPr_ldouble<reference_number> >
      : public ::color::_internal::utility::component::array< long double >
      {
      };

   }
 }

#endif
