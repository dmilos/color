#ifndef color_yuv_trait_component_float
#define color_yuv_trait_component_float

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::yuv::reference_enum reference_number >
     struct component< ::color::category::yuv_float<reference_number> >
      : public ::color::_internal::utility::component::array< float >
      {
      };

    template< ::color::constant::yuv::reference_enum reference_number >
     struct component< ::color::category::yuv_double<reference_number> >
      : public ::color::_internal::utility::component::array< double >
      {
      };

    template< ::color::constant::yuv::reference_enum reference_number >
     struct component< ::color::category::yuv_ldouble<reference_number> >
      : public ::color::_internal::utility::component::array< long double >
      {
      };

   }
 }

#endif
