#ifndef color_rgb_trait_container_scramble4
#define color_rgb_trait_container_scramble4

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< typename value_name, unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position > 
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, first_position, second_position, third_position,fourth_position > > >
      : public ::color::_internal::utility::container::array< value_name, 4 > 
      {
      };

   }
 }

#endif