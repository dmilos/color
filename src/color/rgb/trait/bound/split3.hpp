#ifndef color_rgb_trait_bound_split3
#define color_rgb_trait_bound_split3


#include "../../../generic/type/pack3.hpp"

#include "../../../_internal/utility/bound/pack3.hpp"

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
         struct pick_bound3
          {
           typedef ::color::type::error_t bound_type;
          };

        template<>
         struct pick_bound3<8>
          {
           template< unsigned first_size, unsigned second_size, unsigned third_size >
            using bound_type = ::color::_internal::utility::bound::pack3_8_t<  first_size, second_size, third_size >;
          };

        template<>
         struct pick_bound3<16>
          {
           template< unsigned first_size, unsigned second_size, unsigned third_size >
            using bound_type = ::color::_internal::utility::bound::pack3_16_t< first_size, second_size, third_size >;
          };

        template<>
         struct pick_bound3<32>
          {
           template< unsigned first_size, unsigned second_size, unsigned third_size >
            using bound_type = ::color::_internal::utility::bound::pack3_32_t< first_size, second_size, third_size >;
          };

        template<>
         struct pick_bound3<64>
          {
           template< unsigned first_size, unsigned second_size, unsigned third_size >
            using bound_type = ::color::_internal::utility::bound::pack3_64_t< first_size, second_size, third_size >;
          };

       }
     }

    template
     <
      unsigned first_index,   unsigned first_size,
      unsigned second_index,  unsigned second_size,
      unsigned third_index,   unsigned third_size
     >
     struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::pack3< first_size, second_size, third_size >, first_index, second_index, third_index > > >
      : public ::color::trait::_internal::rgb::pick_bound3< first_size + second_size + third_size >:: template bound_type<first_size, second_size, third_size>
      {
      };

   }
 }

#endif
