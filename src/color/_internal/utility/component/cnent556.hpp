#ifndef color__internal_utility_component_cnent556
#define color__internal_utility_component_cnent556

// ::color::_internal::utility::component::cnent556< index_type >

#include "../type/bound.hpp"
#include "../type/traitp.hpp"
#include "../type/index.hpp"

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace component
       {

        template< typename index_name >
         class cnent556
          {
           public:
             typedef std::uint16_t      unsigned_type;
             typedef index_name         index_type;

             typedef ::color::_internal::utility::type::traitP< unsigned_type >         trait_type;



             typedef typename trait_type::instance_type          instance_type;
             typedef typename trait_type::const_type             const_type;
             typedef typename trait_type::const_return_type      const_return_type;
             typedef typename trait_type::return_type            return_type;
             typedef typename trait_type::const_input_type       const_input_type;
             typedef typename trait_type::input_type             input_type;

             typedef ::color::_internal::utility::type::index< index_type >   index_trait_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::const_input_type index_const_input_type;


             template< index_instance_type index >
              static /*constexpr*/ const_return_type   maximum( )
               {
                static instance_type max_list[] = { 31, 31, 63 };
                return max_list[index];
               }

             static /*constexpr*/ const_return_type   maximum( index_const_input_type  index )
              {
                static instance_type max_list[] = { 31, 31, 63 };
                return max_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ const_return_type   minimum( )
               {
                static instance_type value=0;
                return value;
               }

             static /*constexpr*/ const_return_type   minimum( index_const_input_type  index )
              {
               static instance_type value=0;
               return value;
              }

             template< index_instance_type index >
              static /*constexpr*/ const_return_type   range()
               {
                static instance_type max_list[] = { 31, 31, 63 };
                return max_list[index];
               }

             static /*constexpr*/ const_return_type   range(   index_const_input_type  index )
              {
                static instance_type max_list[] = { 31, 31, 63 };
                return max_list[index];
              }
          };

       }
     }
   }
 }

#endif 