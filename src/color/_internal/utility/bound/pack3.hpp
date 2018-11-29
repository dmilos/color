#ifndef color__internal_utility_bound_pack3
#define color__internal_utility_bound_pack3

// ::color::_internal::utility::bound::pack3< index_type, 1, 2, 3 >


#include "../type/traitp.hpp"
#include "../type/index.hpp"



namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace bound
       {

        template
         <
           typename unsigned_name
          ,typename index_name
          ,unsigned first_size, unsigned second_size, unsigned third_size
         >
         struct pack3
          {
           public:
             typedef unsigned_name       unsigned_type;
             typedef index_name          index_type;

             typedef ::color::_internal::utility::type::traitP< unsigned_type >   trait_type;
             typedef ::color::_internal::utility::type::index< index_type >       index_trait_type;

             typedef typename trait_type::instance_type          instance_type;
             typedef typename trait_type::return_image_type      return_image_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::model_type index_input_const_type;

             enum
              {
                first_max  = (1 <<  first_size) - 1,
               second_max  = (1 << second_size) - 1,
                third_max  = (1 <<  third_size) - 1,
              };

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   maximum( )
               {
                static const instance_type max_list[] = { first_max, second_max, third_max };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   maximum( index_input_const_type  index )
              {
                static const instance_type max_list[] = { first_max, second_max, third_max };
                return max_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   minimum( )
               {
                static const instance_type value=0;
                return value;
               }

             static /*constexpr*/ return_image_type   minimum( index_input_const_type  index )
              {
               static const instance_type value=0;
               return value;
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   range()
               {
                static const instance_type max_list[] = { first_max, second_max, third_max };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   range(   index_input_const_type  index )
              {
                static const instance_type max_list[] = { first_max, second_max, third_max };
                return max_list[index];
              }
          };

        template< typename unsigned_name, unsigned first_size, unsigned second_size, unsigned third_size >
         using pack3_N_t = ::color::_internal::utility::bound::pack3< unsigned_name, unsigned, first_size, second_size, third_size >;

        template<  unsigned first_size, unsigned second_size, unsigned third_size >
         using pack3_8_t = ::color::_internal::utility::bound::pack3_N_t< std::uint8_t,   first_size, second_size, third_size >;

        template<  unsigned first_size, unsigned second_size, unsigned third_size >
         using pack3_16_t = ::color::_internal::utility::bound::pack3_N_t< std::uint16_t, first_size, second_size, third_size >;

        template<  unsigned first_size, unsigned second_size, unsigned third_size >
         using pack3_32_t = ::color::_internal::utility::bound::pack3_N_t< std::uint32_t, first_size, second_size, third_size >;

        template<  unsigned first_size, unsigned second_size, unsigned third_size >
         using pack3_64_t = ::color::_internal::utility::bound::pack3_N_t< std::uint64_t, first_size, second_size, third_size >;

        using split233_t = ::color::_internal::utility::bound::pack3_8_t< 2, 3, 3 >;
        using split323_t = ::color::_internal::utility::bound::pack3_8_t< 3, 2, 3 >;
        using split332_t = ::color::_internal::utility::bound::pack3_8_t< 3, 3, 2 >;

        using split422_t = ::color::_internal::utility::bound::pack3_8_t< 4, 2, 2 >;
        using split242_t = ::color::_internal::utility::bound::pack3_8_t< 2, 4, 2 >;
        using split224_t = ::color::_internal::utility::bound::pack3_8_t< 2, 2, 4 >;

        using split655_t = ::color::_internal::utility::bound::pack3_16_t< 6, 5, 5 >;
        using split565_t = ::color::_internal::utility::bound::pack3_16_t< 5, 6, 5 >;
        using split556_t = ::color::_internal::utility::bound::pack3_16_t< 5, 5, 6 >;


       }
     }
   }
 }

#endif
