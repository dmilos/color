#ifndef color_rgb_trait_component_split2222
#define color_rgb_trait_component_split2222


#include "../../../generic/type/split4.hpp"

#include "../../../_internal/utility/component/pack8.hpp"
#include "../../../_internal/utility/component/pack16.hpp"
#include "../../../_internal/utility/component/pack32.hpp"
#include "../../../_internal/utility/component/pack64.hpp"

#include "../../../generic/trait/component.hpp"

#include "../../category.hpp"

namespace color
 {
  namespace trait
   {

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2222_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::split2222_t< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split4444_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::split4444_t< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split5551_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::split5551_t< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split1555_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::split1555_t< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split8888_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::split8888_t< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitAAA2_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::splitAAA2_t< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2AAA_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::split2AAA_t< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::splitGGGG_t< unsigned >
      {
      };

   }
 }

#endif

