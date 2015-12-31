#ifndef color__internal_utility_bound_yiq
#define color__internal_utility_bound_yiq

// ::color::_internal::utility::bound::yiq_float< index_type, float_name >


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

        template< typename index_name, typename float_name >
         struct yiq_float
          {
           public:
             typedef float_name  float_type;
             typedef index_name  index_type;

             typedef ::color::_internal::utility::type::traitC< float_type >   trait_type;
             typedef ::color::_internal::utility::type::index< index_type >    index_trait_type;

             typedef typename trait_type::instance_type          instance_type;
             typedef typename trait_type::return_const_type      return_const_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::input_const_type index_input_const_type;

             template< index_instance_type index >
              static /*constexpr*/ return_const_type   maximum( )
               {
                static instance_type max_list[] = { 1, 0.5957161349127745527, 0.5225910452916111683 };
                return max_list[index];
               }

             static /*constexpr*/ return_const_type   maximum( index_input_const_type  index )
              {
                static instance_type max_list[] = { 1, 0.5957161349127745527, 0.5225910452916111683 };
                return max_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_const_type   minimum( )
               {
                static instance_type min_list[] = { 0, -0.5957161349127745527, -0.5225910452916111683 };
                return min_list[index];
               }

             static /*constexpr*/ return_const_type   minimum( index_input_const_type  index )
              {
                static instance_type min_list[] = { 0, -0.5957161349127745527, -0.5225910452916111683 };
                return min_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_const_type   range()
               {
                static instance_type range_list[] = { 1, 2*0.5957161349127745527, 2 * 0.5225910452916111683 };
                return range_list[index];
               }

             static /*constexpr*/ return_const_type   range(   index_input_const_type  index )
              {
                static instance_type range_list[] = { 1, 2*0.5957161349127745527, 2*0.5225910452916111683 };
                return range_list[index];
              }
          };

       }
     }
   }
 }

#endif