#ifndef color_rgb_trait_component_split2222
#define color_rgb_trait_component_split2222


#include "../../../generic/type/pack4.hpp"

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

    namespace _internal
     {
      namespace rgb
       {

        template< unsigned size_size >
         struct pick_component4
          {
           typedef ::color::type::error_t component_type;
          };

        template<>
         struct pick_component4<8>
          {
           typedef ::color::_internal::utility::component::pack8 component_type;
          };

        template<>
         struct pick_component4<16>
          {
           typedef ::color::_internal::utility::component::pack16 component_type;
          };

        template<>
         struct pick_component4<32>
          {
           typedef ::color::_internal::utility::component::pack32 component_type;
          };

        template<>
         struct pick_component4<64>
          {
           typedef ::color::_internal::utility::component::pack64 component_type;
          };

       }
     }

    template
     <
      unsigned first_index,   unsigned first_size,
      unsigned second_index,  unsigned second_size,
      unsigned third_index,   unsigned third_size,
      unsigned fourth_index,  unsigned fourth_size
     >
     struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::pack4< first_size, second_size, third_size, fourth_size >, first_index, second_index, third_index, fourth_index > > >
      : public ::color::trait::_internal::rgb::pick_component4< first_size + second_size + third_size + fourth_size >::component_type
      {
      };

   }
 }

#endif

