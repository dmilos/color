#ifndef color_rgb_trait_bound_split4
#define color_rgb_trait_bound_split4


#include "../../../generic/type/split4.hpp"

#include "../../../_internal/utility/bound/split4.hpp"

#include "../../../generic/trait/bound.hpp"

#include "../../category.hpp"

namespace color
 {
  namespace trait
   {

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2222_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::bound::split2222_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split4444_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::bound::split4444_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split8888_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::bound::split8888_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split1555_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::bound::split1555_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split5551_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::bound::split5551_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitAAA2_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::bound::splitAAA2_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2AAA_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::bound::split2AAA_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::bound::splitGGGG_t
      {
      };

   }
 }

#endif
