#ifndef color__internal_utility_bound_split3
#define color__internal_utility_bound_split3

// ::color::_internal::utility::bound::split3< index_type, 1, 2, 3 >


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
         struct split3
          {
           public:
             typedef unsigned_name       unsigned_type;
             typedef index_name          index_type;

             typedef ::color::_internal::utility::type::traitP< unsigned_type >   trait_type;
             typedef ::color::_internal::utility::type::index< index_type >       index_trait_type;

             typedef typename trait_type::instance_type          instance_type;
             typedef typename trait_type::return_image_type      return_image_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::input_const_type index_input_const_type;

             enum 
              {
                first_max  = (1 <<  first_size) - 1,
               second_max  = (1 << second_size) - 1,
                third_max  = (1 <<  third_size) - 1,
              };

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   maximum( )
               {
                static instance_type max_list[] = { first_max, second_max, third_max };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   maximum( index_input_const_type  index )
              {
                static instance_type max_list[] = { first_max, second_max, third_max };
                return max_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   minimum( )
               {
                static instance_type value=0;
                return value;
               }

             static /*constexpr*/ return_image_type   minimum( index_input_const_type  index )
              {
               static instance_type value=0;
               return value;
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   range()
               {
                static instance_type max_list[] = { first_max, second_max, third_max };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   range(   index_input_const_type  index )
              {
                static instance_type max_list[] = { first_max, second_max, third_max };
                return max_list[index];
              }
          };           

         using split233 = ::color::_internal::utility::bound::split3< std::uint8_t,  unsigned, 2, 3, 3 >;
         using split323 = ::color::_internal::utility::bound::split3< std::uint8_t,  unsigned, 3, 2, 3 >;
         using split332 = ::color::_internal::utility::bound::split3< std::uint8_t,  unsigned, 3, 3, 2 >;

         using split422 = ::color::_internal::utility::bound::split3< std::uint8_t,  unsigned, 4, 2, 2 >;
         using split242 = ::color::_internal::utility::bound::split3< std::uint8_t,  unsigned, 2, 4, 2 >;
         using split224 = ::color::_internal::utility::bound::split3< std::uint8_t,  unsigned, 2, 2, 4 >;

         using split655 = ::color::_internal::utility::bound::split3< std::uint16_t, unsigned, 6, 5, 5 >;
         using split565 = ::color::_internal::utility::bound::split3< std::uint16_t, unsigned, 5, 6, 5 >;
         using split556 = ::color::_internal::utility::bound::split3< std::uint16_t, unsigned, 5, 5, 6 >;


       }
     }
   }
 }

#endif
