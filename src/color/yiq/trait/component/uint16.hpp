#ifndef color_yiq_trait_component_uint16
#define color_yiq_trait_component_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/component/cnent556.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::yiq_uint16 >
      : public ::color::_internal::utility::component::cnent556< unsigned>
      {
      };

   }
 }

#endif