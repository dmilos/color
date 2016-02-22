#ifndef color_rgb_trait_container_split422
#define color_rgb_trait_container_split422

#include "../../category.hpp"

#include "../../../generic/type/split422.hpp"

#include "../../../_internal/utility/container/cner422.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< unsigned first_position, unsigned second_position, unsigned third_position > 
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split422_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::cner422< unsigned > 
      {
      };

   }
 }

#endif