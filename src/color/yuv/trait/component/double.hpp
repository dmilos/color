#ifndef color_yuv_trait_component_double
#define color_yuv_trait_component_double

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::yuv::reference_enum reference_number >
     struct component< ::color::category::yuv_double<reference_number> >
      : public ::color::_internal::utility::component::array< double, unsigned >
      {
      };

   }
 }

#endif