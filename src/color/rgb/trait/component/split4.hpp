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
      : public ::color::_internal::utility::component::cnent2222< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split4444_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::cnent4444< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split5551_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::cnent5551< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split1555_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::cnent1555< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split8888_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::cnent8888< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitAAA2_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::cnentAAA2< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2AAA_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::cnent2AAA< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position  >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t, first_position, second_position, third_position, fourth_position > > >
      : public ::color::_internal::utility::component::cnentGGGG< unsigned >
      {
      };

   }
 }

#endif

