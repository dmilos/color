#ifndef color_rgb_trait_container_splitAAA2
#define color_rgb_trait_container_splitAAA2

#include "../../category.hpp"

#include "../../../generic/type/splitAAA2.hpp"

#include "../../../_internal/utility/container/aaa2.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< unsigned first_position, unsigned second_position, unsigned third_position > 
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::splitAAA2_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::cnerAAA2< unsigned > 
      {
      };

   }
 }

#endif