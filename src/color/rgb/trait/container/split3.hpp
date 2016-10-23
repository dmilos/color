#ifndef color_rgb_trait_container_split233
#define color_rgb_trait_container_split233


#include "../../../generic/type/split3.hpp"

#include "../../../_internal/utility/container/split3.hpp"

#include "../../../generic/trait/container.hpp"

#include "../../category.hpp"


namespace color
 {
  namespace trait
   {

    template< unsigned first_index, unsigned second_index, unsigned third_index >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split233_t, first_index, second_index, third_index > > >
      : public ::color::_internal::utility::container::split233
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split323_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split323
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split332_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split332
      {
      };

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

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split655_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split655
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split565_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split565
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split556_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split556
      {
      };

   }
 }

#endif
