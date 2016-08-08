#ifndef color_YPbPr_trait_component_float
#define color_YPbPr_trait_component_float

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::YPbPr_float >
      : public ::color::_internal::utility::component::array< float, unsigned >
      {
      };

   }
 }

#endif