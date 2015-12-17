#ifndef color__internal_utility_bound_cnent422
#define color__internal_utility_bound_cnent422

// ::color::_internal::utility::bound::cnent422< index_type >


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

        template< typename index_name >
         struct cnent422
          {
           public:
             typedef std::uint8_t       unsigned_type;
             typedef index_name         index_type;

             typedef ::color::_internal::utility::type::traitP< unsigned_type >   trait_type;
             typedef ::color::_internal::utility::type::index< index_type >       index_trait_type;

             typedef typename trait_type::instance_type          instance_type;
             typedef typename trait_type::return_const_type      return_const_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::input_const_type index_input_const_type;

             template< index_instance_type index >
              static /*constexpr*/ return_const_type   maximum( )
               {
                static instance_type max_list[] = { 15, 3, 3 };
                return max_list[index];
               }

             static /*constexpr*/ return_const_type   maximum( index_input_const_type  index )
              {
                static instance_type max_list[] = { 15, 3, 3 };
                return max_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_const_type   minimum( )
               {
                static instance_type value=0;
                return value;
               }

             static /*constexpr*/ return_const_type   minimum( index_input_const_type  index )
              {
               static instance_type value=0;
               return value;
              }

             template< index_instance_type index >
              static /*constexpr*/ return_const_type   range()
               {
                static instance_type max_list[] = { 15, 3, 3 };
                return max_list[index];
               }

             static /*constexpr*/ return_const_type   range(   index_input_const_type  index )
              {
                static instance_type max_list[] = { 15, 3, 3 };
                return max_list[index];
              }
          };

       }
     }
   }
 }

#endif