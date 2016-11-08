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

    /*template
     <
      typename container_name,
      typename component_name,
      typename index_name,
      unsigned first_index,   unsigned first_size,
      unsigned second_index,  unsigned second_size,
      unsigned third_index,   unsigned third_size
     >
     struct containerX< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split3_t< first_size, second_size, third_size >, first_index, second_index, third_index > > >
      : public ::color::_internal::utility::container::pack3N< container_name, component_name, index_name, first_size, second_size, third_size >
      {
      };*/


    template< unsigned first_index, unsigned second_index, unsigned third_index >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split233_t, first_index, second_index, third_index > > >
      : public ::color::_internal::utility::container::split233_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split323_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split323_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split332_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split332_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split422_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split422_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split242_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split242_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split224_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split224_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split655_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split655_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split565_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split565_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split556_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::container::split556_t
      {
      };

   }
 }

#endif
