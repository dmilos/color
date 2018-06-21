#ifndef color_rgb_trait_component_split3
#define color_rgb_trait_component_split3


#include "../../../generic/type/pack3.hpp"

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
         struct pick_component3
          {
           typedef ::color::type::error_t component_type;
          };

        template<>
         struct pick_component3<8>
          {
           typedef ::color::_internal::utility::component::pack8 component_type;
          };

        template<>
         struct pick_component3<16>
          {
           typedef ::color::_internal::utility::component::pack16 component_type;
          };

        template<>
         struct pick_component3<32>
          {
           typedef ::color::_internal::utility::component::pack32 component_type;
          };

        template<>
         struct pick_component3<64>
          {
           typedef ::color::_internal::utility::component::pack64 component_type;
          };

       }
     }

    template
     <
      unsigned first_index,   unsigned first_size,
      unsigned second_index,  unsigned second_size,
      unsigned third_index,   unsigned third_size
     >
     struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::pack3< first_size, second_size, third_size >, first_index, second_index, third_index > > >
      : public ::color::trait::_internal::rgb::pick_component3< first_size + second_size + third_size >::component_type
      {
      };

   }
 }

#endif

