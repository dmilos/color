#ifndef color__internal_utility_bound_split4
#define color__internal_utility_bound_split4

// ::color::_internal::utility::bound::split4< ... >


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
          ,unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size
         >
         struct split4
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
               fourth_max  = (1 << fourth_size) - 1,
              };

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   maximum( )
               {
                static instance_type max_list[] = { first_max, second_max, third_max, fourth_max };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   maximum( index_input_const_type  index )
              {
                static instance_type max_list[] = { first_max, second_max, third_max, fourth_max  };
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
                static instance_type max_list[] = { first_max, second_max, third_max, fourth_max  };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   range(   index_input_const_type  index )
              {
                static instance_type max_list[] = { first_max, second_max, third_max, fourth_max  };
                return max_list[index];
              }
          };

         using split2222 = ::color::_internal::utility::bound::split4< std::uint8_t,   unsigned,  2,  2,  2,  2 >;
         using split5551 = ::color::_internal::utility::bound::split4< std::uint16_t,  unsigned,  5,  5,  5,  1 >;
         using splitAAA2 = ::color::_internal::utility::bound::split4< std::uint32_t,  unsigned, 10, 10, 10,  2 >;

       }
     }
   }
 }

#endif
