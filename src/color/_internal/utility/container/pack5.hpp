#ifndef color__internal_utility_container_pack5
#define color__internal_utility_container_pack5

// ::color::_internal::utility::container::pack5< index_name >

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
          ,unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size, unsigned fifth_size
         >
         struct pack5
          {
           public:
             typedef container_name  instance_type;
             typedef component_name     value_type;
             typedef index_name         index_type;

             typedef ::color::_internal::utility::container::pack5< container_name, component_name, index_name, first_size, second_size, third_size, fourth_size, fifth_size > this_type;


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

             enum { size_entity = 4 };
             enum
              {
                first_position = 0,
               second_position = first_size,
                third_position = first_size + second_size,
               fourth_position = first_size + second_size + third_size
                fifth_position = first_size + second_size + third_size + fourth_position
              };

             enum
              {
                first_mask = ( 1 <<  first_size )-1 ,
               second_mask = ( 1 << second_size )-1 ,
                third_mask = ( 1 <<  third_size )-1 ,
               fourth_mask = ( 1 << fourth_size )-1
                fifth_mask = ( 1 <<  fifth_size )-1
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
                 case( 0 ): return ( ( container >> (  first_position ) ) &  first_mask );
                 case( 1 ): return ( ( container >> ( second_position ) ) & second_mask );
                 case( 2 ): return ( ( container >> (  third_position ) ) &  third_mask );
                 case( 3 ): return ( ( container >> ( fourth_position ) ) & fourth_mask );
                 case( 4 ): return ( ( container >> (  fifth_position ) ) &  fifth_mask );
                }
               return 0;
              }

             template< index_instance_type index >
              static component_return_const_type get( model_type container )
               {
                //TODO C++14 static_assert( index < size_entity, "Index is out of range." );
                switch( index )
                 {
                  case( 0 ): return ( ( container >> (  first_position ) ) &  first_mask );
                  case( 1 ): return ( ( container >> ( second_position ) ) & second_mask );
                  case( 2 ): return ( ( container >> (  third_position ) ) &  third_mask );
                  case( 3 ): return ( ( container >> ( fourth_position ) ) & fourth_mask );
                  case( 4 ): return ( ( container >> ( fifth_position  ) ) &  fifth_mask );
                 }
                return 0;
               }

             static set_return_type set( input_type container, index_input_const_type index, component_input_const_type value )
              {
               switch( index )
                {
                 default:
                 case( 0 ) : container = ( container & ~(  first_mask << (  first_position ) ) )  |  ( ((instance_type)value) << (  first_position ) ); break;
                 case( 1 ) : container = ( container & ~( second_mask << ( second_position ) ) )  |  ( ((instance_type)value) << ( second_position ) ); break;
                 case( 2 ) : container = ( container & ~(  third_mask << (  third_position ) ) )  |  ( ((instance_type)value) << (  third_position ) ); break;
                 case( 3 ) : container = ( container & ~( fourth_mask << ( fourth_position ) ) )  |  ( ((instance_type)value) << ( fourth_position ) ); break;
                 case( 4 ) : container = ( container & ~(  fifth_mask << (  fifth_position ) ) )  |  ( ((instance_type)value) << (  fifth_position ) ); break;
                }
              }

             template< index_instance_type index >
              static set_return_type set( input_type container, component_input_const_type value )
               {
                //TODO C++14 static_assert( index < size_entity, "Index is out of range." );
                switch( index )
                 {
                  case( 0 ) : container = ( container & ~(   first_mask << (  first_position ) ) )  |  ( ((instance_type)value) << (  first_position ) ); break;
                  case( 1 ) : container = ( container & ~(  second_mask << ( second_position ) ) )  |  ( ((instance_type)value) << ( second_position ) ); break;
                  case( 2 ) : container = ( container & ~(   third_mask << (  third_position ) ) )  |  ( ((instance_type)value) << (  third_position ) ); break;
                  case( 3 ) : container = ( container & ~(  fourth_mask << ( fourth_position ) ) )  |  ( ((instance_type)value) << ( fourth_position ) ); break;
                  case( 3 ) : container = ( container & ~(   fifth_mask << (  fifth_position ) ) )  |  ( ((instance_type)value) << (  fifth_position ) ); break;
                 }
               }

             static /*constexpr*/ size_return_image_type size()
              {
               static const size_instance_type local_length = size_entity;
               return local_length;
              }
          };

        template< typename container_name, typename component_name, unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size, unsigned fifth_size >
         using pack5_N_N_t = ::color::_internal::utility::container::pack4< container_name, component_name, unsigned, first_size, second_size, third_size, fourth_size, fifth_size >;

       }
     }
   }
 }

#endif
