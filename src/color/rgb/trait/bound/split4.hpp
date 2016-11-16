#ifndef color_rgb_trait_bound_split4
#define color_rgb_trait_bound_split4


#include "../../../generic/type/pack4.hpp"

#include "../../../_internal/utility/bound/pack4.hpp"

#include "../../../generic/trait/bound.hpp"

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
         struct pick_bound4
          {
           typedef ::color::type::error_t bound_type;
          };

        template<>
         struct pick_bound4<8>
          {
           template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
            using bound_type = ::color::_internal::utility::bound::pack4_8_t<  first_size, second_size, third_size, fourth_size >;
          };

        template<>
         struct pick_bound4<16>
          {
           template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
            using bound_type = ::color::_internal::utility::bound::pack4_16_t< first_size, second_size, third_size, fourth_size >;
          };

        template<>
         struct pick_bound4<32>
          {
           template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
            using bound_type = ::color::_internal::utility::bound::pack4_32_t< first_size, second_size, third_size, fourth_size >;
          };

        template<>
         struct pick_bound4<64>
          {
           template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
            using bound_type = ::color::_internal::utility::bound::pack4_64_t< first_size, second_size, third_size, fourth_size >;
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
     struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::pack4< first_size, second_size, third_size, fourth_size >, first_index, second_index, third_index, fourth_index > > >
      : public ::color::trait::_internal::rgb::pick_bound4< first_size + second_size + third_size + fourth_size >:: template bound_type< first_size, second_size, third_size, fourth_size >
      {
      };

   }
 }

#endif
