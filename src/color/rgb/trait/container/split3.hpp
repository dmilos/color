#ifndef color_rgb_trait_container_split233
#define color_rgb_trait_container_split233


#include "../../../generic/type/pack3.hpp"

#include "../../../_internal/utility/container/pack3.hpp"

#include "../../../generic/trait/container.hpp"

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
         struct pick_container3
          {
           typedef ::color::type::error_t container_type;
          };

        template<>
         struct pick_container3<8>
          {
           template< unsigned first_size, unsigned second_size, unsigned third_size >
            using container_type = ::color::_internal::utility::container::pack3_8_8_t<  first_size, second_size, third_size >;
          };

        template<>
         struct pick_container3<16>
          {
           template< unsigned first_size, unsigned second_size, unsigned third_size >
            using container_type = ::color::_internal::utility::container::pack3_16_8_t< first_size, second_size, third_size >;
          };

        template<>
         struct pick_container3<32>
          {
           template< unsigned first_size, unsigned second_size, unsigned third_size >
            using container_type = ::color::_internal::utility::container::pack3_32_16_t< first_size, second_size, third_size >;
          };

        template<>
         struct pick_container3<64>
          {
           template< unsigned first_size, unsigned second_size, unsigned third_size >
            using container_type = ::color::_internal::utility::container::pack3_64_32_t< first_size, second_size, third_size >;
          };

       }
     }

    template
     <
      unsigned first_index,   unsigned first_size,
      unsigned second_index,  unsigned second_size,
      unsigned third_index,   unsigned third_size
     >
     struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::pack3< first_size, second_size, third_size >, first_index, second_index, third_index > > >
      : public ::color::trait::_internal::rgb::pick_container3< first_size + second_size + third_size >:: template container_type<first_size, second_size, third_size>
      {
      };

   }
 }

#endif
