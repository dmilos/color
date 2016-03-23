#ifndef color_rgb_trait_container_split422
#define color_rgb_trait_container_split422


#include "../../../generic/type/split3.hpp"

#include "../../../_internal/utility/container/split3.hpp"

#include "../../../generic/trait/container.hpp"

#include "../../category.hpp"


namespace color
 {
  namespace trait
   {

    template< unsigned first_position, unsigned second_position, unsigned third_position > 
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split422_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split422
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position > 
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split242_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split242
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position > 
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split224_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split224
      {
      };

   }
 }

#endif