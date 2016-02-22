#ifndef color_rgb_trait_container_split565
#define color_rgb_trait_container_split565

#include "../../category.hpp"

#include "../../../generic/type/split565.hpp"

#include "../../../_internal/utility/container/cner565.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< unsigned first_position, unsigned second_position, unsigned third_position > 
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split565_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::cner565< unsigned > 
      {
      };

   }
 }

#endif