#ifndef color_rgb_trait_container_split4
#define color_rgb_trait_container_split4

#include "../../category.hpp"

#include "../../../generic/type/split4.hpp"

#include "../../../_internal/utility/container/split4.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2222_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::split2222
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split4444_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::split4444
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split5551_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::split5551
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split1555_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::split1555
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split8888_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::split8888
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitAAA2_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::splitAAA2
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2AAA_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::split2AAA
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::splitGGGG
      {
      };

   }
 }

#endif
