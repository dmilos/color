#ifndef color_rgb_trait_container_split4
#define color_rgb_trait_container_split4


#include "../../../generic/type/split4.hpp"

#include "../../../_internal/utility/container/split4.hpp"

#include "../../../generic/trait/container.hpp"

#include "../../category.hpp"


namespace color
 {
  namespace trait
   {

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2222_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::split2222_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split4444_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::split4444_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split5551_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::split5551_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split1555_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::split1555_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split8888_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::split8888_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitAAA2_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::splitAAA2_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2AAA_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::split2AAA_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::container::splitGGGG_t
      {
      };

   }
 }

#endif
