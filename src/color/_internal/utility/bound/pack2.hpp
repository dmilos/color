#ifndef color__internal_utility_bound_pack2
#define color__internal_utility_bound_pack2

// ::color::_internal::utility::bound::pack2< index_type, 1, 2 >


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
          ,unsigned first_size, unsigned second_size
         >
         struct pack2
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
               second_max  = (1 << second_size) - 1
              };

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   maximum( )
               {
                static const instance_type max_list[] = { first_max, second_max };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   maximum( index_input_const_type  index )
              {
                static const instance_type max_list[] = { first_max, second_max };
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
                static const instance_type max_list[] = { first_max, second_max };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   range(   index_input_const_type  index )
              {
                static const instance_type max_list[] = { first_max, second_max };
                return max_list[index];
              }
          };

        template< typename unsigned_name, unsigned first_size, unsigned second_size >
         using pack2_N_t = ::color::_internal::utility::bound::pack3< unsigned_name, unsigned, first_size, second_size >;

       }
     }
   }
 }

#endif
