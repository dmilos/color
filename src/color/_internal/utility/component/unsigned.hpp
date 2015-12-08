#ifndef color__internal_utility_component_unsigned
#define color__internal_utility_component_unsigned

// ::color::_internal::utility::component::Unsigned< unsigned_name, width, index_type>

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

        template< typename unsigned_name, unsigned  width, typename index_name >
         class Unsigned
          {
           public:
             typedef unsigned_name      unsigned_type;
             typedef index_name         index_type;

             typedef ::color::_internal::utility::type::traitP< unsigned_name >         trait_type;



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
                static instance_type value= ((( 1 << (width-1)) - 1 )<< 1) + 1 ;
                return value;
               }

             static /*constexpr*/ const_return_type   maximum( index_const_input_type  index )
              {
               static instance_type value = ((( 1 << (width-1)) - 1 )<< 1) + 1 ;
               return value;
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
               { // TODO this is BUG!!!
                static instance_type value = ((( 1 << (width-1)) - 1 )<< 1) + 1 ;
                return value;
               }

             static /*constexpr*/ const_return_type   range(   index_const_input_type  index )
              { // TODO this is BUG!!!
               static instance_type value = ((( 1 << (width-1)) - 1 )<< 1) + 1 ;
               return value;
              }
          };

       }
     }
   }
 }

#endif
