#ifndef color_rgb_trait_bound_split3
#define color_rgb_trait_bound_split3


#include "../../../generic/type/split3.hpp"

#include "../../../_internal/utility/bound/split3.hpp"

#include "../../../generic/trait/bound.hpp"

#include "../../category.hpp"

namespace color
 {
  namespace trait
   {

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split233_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::bound::split233_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split323_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::bound::split323_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split332_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::bound::split332_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split422_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::bound::split422_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split242_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::bound::split242_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split224_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::bound::split224_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split556_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::bound::split556_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split565_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::bound::split565_t
      {
      };

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split655_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::bound::split655_t
      {
      };

   }
 }

#endif
