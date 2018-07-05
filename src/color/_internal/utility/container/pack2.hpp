#ifndef color__internal_utility_container_pack2
#define color__internal_utility_container_pack2

// ::color::_internal::utility::container::pack2< index_name >

#include "../type/index.hpp"
#include "../type/size.hpp"
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
         struct pack2
          {
           public:
             typedef container_name  instance_type;
             typedef component_name     value_type;
             typedef index_name         index_type;

             typedef ::color::_internal::utility::container::pack2< container_name, component_name, index_name, first_size, second_size > this_type;


             typedef instance_type const      const_type;
             typedef instance_type const&     return_image_type;
             typedef instance_type      &     return_type;
             typedef instance_type      &     return_original_type;
             typedef instance_type const&     model_type;
             typedef instance_type      &     input_type;
             typedef instance_type      &     output_type;

             typedef ::color::_internal::utility::type::index< index_type >   index_trait_type;

             typedef typename index_trait_type::instance_type     index_instance_type;

             typedef typename index_trait_type::model_type  index_input_const_type;
             typedef typename index_trait_type::return_image_type index_return_image_type;

             typedef ::color::_internal::utility::type::traitP< value_type >         component_trait_type;

             typedef typename component_trait_type::instance_type        component_type;
             typedef typename component_trait_type::const_type           component_const_type;
             typedef typename component_trait_type::return_image_type    component_return_const_type;
             typedef typename component_trait_type::model_type     component_input_const_type;

             typedef ::color::_internal::utility::type::size< std::size_t >   size_trait_type;

             typedef typename size_trait_type::return_image_type        size_return_image_type;
             typedef typename size_trait_type::instance_type            size_instance_type;

             typedef void set_return_type;

             enum { size_entity = 2 };
             enum
              {
                first_position = 0,
               second_position = first_size,
              };


             static set_return_type init( input_type container, index_input_const_type index, component_input_const_type value )
              {
               this_type::set( container, index, value );
              }

             template< index_instance_type index >
              static set_return_type init( input_type container, component_input_const_type value )
               {
                this_type:: template set<index>( container, value );
               }

             static component_return_const_type get( model_type container, index_input_const_type index )
              {
               switch( index )
                {
                 default:
                 case( 0 ): return ( ( container >> (  first_position ) ) & ( ( 1 <<  first_size )-1 ) );
                 case( 1 ): return ( ( container >> ( second_position ) ) & ( ( 1 << second_size )-1 ) );
                }
               return 0;
              }

             template< index_instance_type index >
              static component_return_const_type get( model_type container )
               {
                //TODO C++14 static_assert( index <  size_entity, "Index is out of range." );
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
                 default:
                 case( 0 ) : container = ( container & ~(  ( ( 1 <<  first_size )-1 ) << (  first_position ) ) )  |  ( ((instance_type)value) << (  first_position ) ); break;
                 case( 1 ) : container = ( container & ~(  ( ( 1 << second_size )-1 ) << ( second_position ) ) )  |  ( ((instance_type)value) << ( second_position ) ); break;
                }
              }

             template< index_instance_type index >
              static set_return_type set( input_type container, component_input_const_type value )
               {
                //TODO C++14 static_assert( index < size_entity, "Index is out of range." );
                switch( index )
                 {
                  case( 0 ) : container = ( container & ~(  ( ( 1 <<  first_size )-1 ) << (  first_position ) ) )  |  ( ((instance_type)value) << (  first_position ) ); break;
                  case( 1 ) : container = ( container & ~(  ( ( 1 << second_size )-1 ) << ( second_position ) ) )  |  ( ((instance_type)value) << ( second_position ) ); break;
                 }
               }

             static /*constexpr*/ size_return_image_type size()
              {
               static const size_instance_type local_length = size_entity;
               return local_length;
              }
          };

        template< typename container_name, typename component_name, unsigned first_size, unsigned second_size >
         using pack2_N_N_t = ::color::_internal::utility::container::pack4< container_name, component_name, unsigned, first_size, second_size >;

       }
     }
   }
 }

#endif
