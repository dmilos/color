#ifndef color_rgb_trait_container_scramble
#define color_rgb_trait_container_scramble

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< typename value_name, unsigned first_position, unsigned second_position, unsigned third_position > 
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::array< value_name, 3 > 
      {
      };

    template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position > 
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, red_position, green_position, blue_position, alpha_position > > >
      : public ::color::_internal::utility::container::array< value_name, 4 > 
      {
      };


   }
 }

#endif