#ifndef color__internal_utility_container_split2
#define color__internal_utility_container_split2

// ::color::_internal::utility::container::split2< index_name >

#include "../type/index.hpp"
#include "../type/traitp.hpp"


namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace container
       {

        template
         <
           typename container_name,
           typename component_name,
           typename index_name
          ,unsigned first_size, unsigned second_size
         >
         struct split2
          {
           public:
             typedef container_name  instance_type;
             typedef component_name     value_type;
             typedef index_name         index_type;

             typedef instance_type const      const_type;
             typedef instance_type const&     return_image_type;
             typedef instance_type      &     return_type;
             typedef instance_type      &     return_original_type;
             typedef instance_type const&     input_const_type;
             typedef instance_type      &     input_type;
             typedef instance_type      &     output_type;

             typedef ::color::_internal::utility::type::index< index_type >   index_trait_type;

             typedef typename index_trait_type::instance_type     index_instance_type;

             typedef typename index_trait_type::input_const_type  index_input_const_type;
             typedef typename index_trait_type::return_image_type index_return_image_type;

             typedef ::color::_internal::utility::type::traitP< value_type >         component_trait_type;

             typedef typename component_trait_type::instance_type        component_type;
             typedef typename component_trait_type::const_type           component_const_type;
             typedef typename component_trait_type::return_image_type    component_return_const_type;
             typedef typename component_trait_type::input_const_type     component_input_const_type;

             typedef void set_return_type;

             enum { size_enum = 3 };
             enum {  first_position = 0, 
                    second_position = first_size, 
                  };


             static component_return_const_type get( input_const_type container, index_input_const_type index )
              {
               switch( index )
                {
                 case( 0 ): return ( ( container >> (  first_position ) ) & ( ( 1 <<  first_size )-1 ) );
                 case( 1 ): return ( ( container >> ( second_position ) ) & ( ( 1 << second_size )-1 ) );
                }
               return 0;
              }

             template< index_instance_type index >
              static component_return_const_type get( input_const_type container )
               {
                switch( index )
                 {
                  case( 0 ): return ( ( container >> (  first_position ) ) & ( ( 1 <<  first_size )-1 ) );
                  case( 1 ): return ( ( container >> ( second_position ) ) & ( ( 1 << second_size )-1 ) );
                 }
                return 0;
               }

             static set_return_type set( input_type container, index_input_const_type index, component_input_const_type value )
              {
               switch( index )
                {
                 case( 0 ) : container = ( container & ~(  ( ( 1 <<  first_size )-1 ) << (  first_position ) ) )  |  ( ((instance_type)value) << (  first_position ) ); break;
                 case( 1 ) : container = ( container & ~(  ( ( 1 << second_size )-1 ) << ( second_position ) ) )  |  ( ((instance_type)value) << ( second_position ) ); break;
                }
              }

             template< index_instance_type index >
              static set_return_type set( input_type container, component_input_const_type value )
               {
                switch( index )
                 {
                  case( 0 ) : container = ( container & ~(  ( ( 1 <<  first_size )-1 ) << (  first_position ) ) )  |  ( ((instance_type)value) << (  first_position ) ); break;
                  case( 1 ) : container = ( container & ~(  ( ( 1 << second_size )-1 ) << ( second_position ) ) )  |  ( ((instance_type)value) << ( second_position ) ); break;
                 }
               }

             static /*constexpr*/ index_return_image_type size()
              {
               static const index_instance_type local_length = 2;
               return local_length;
              }
          };

       }
     }
   }
 }

#endif
