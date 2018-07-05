#ifndef color__internal_utility_container_pack3
#define color__internal_utility_container_pack3

// ::color::_internal::utility::container::pack3< index_name >

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
          ,unsigned first_size, unsigned second_size, unsigned third_size
         >
         struct pack3
          {
           public:
             typedef container_name  instance_type;
             typedef component_name     value_type;
             typedef index_name         index_type;

             typedef ::color::_internal::utility::container::pack3< container_name, component_name, index_name, first_size, second_size, third_size > this_type;


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

             enum { size_entity = 3 };
             enum
              {
                first_position = 0,
               second_position = first_size,
                third_position = first_size + second_size
              };

             enum
              {
                first_mask = ( 1 <<  first_size )-1 ,
               second_mask = ( 1 << second_size )-1 ,
                third_mask = ( 1 <<  third_size )-1
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
                }
               return 0;
              }

             template< index_instance_type index >
              static component_return_const_type get( model_type container )
               {
                //TODO C++14 static_assert( index <  size_entity, "Index is out of range." );
                switch( index )
                 {
                  case( 0 ): return ( ( container >> (  first_position ) ) &  first_mask );
                  case( 1 ): return ( ( container >> ( second_position ) ) & second_mask );
                  case( 2 ): return ( ( container >> (  third_position ) ) &  third_mask );
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
                }
              }

             template< index_instance_type index >
              static set_return_type set( input_type container, component_input_const_type value )
               {
                //TODO C++14 static_assert( index <  size_entity, "Index is out of range." );
                switch( index )
                 {
                  case( 0 ) : container = ( container & ~(   first_mask << (  first_position ) ) )  |  ( ((instance_type)value) << (  first_position ) ); break;
                  case( 1 ) : container = ( container & ~(  second_mask << ( second_position ) ) )  |  ( ((instance_type)value) << ( second_position ) ); break;
                  case( 2 ) : container = ( container & ~(   third_mask << (  third_position ) ) )  |  ( ((instance_type)value) << (  third_position ) ); break;
                 }
               }

             static /*constexpr*/ size_return_image_type size()
              {
               static const size_instance_type local_length = size_entity;
               return local_length;
              }
          };

        template< typename container_name, typename component_name, unsigned first_size, unsigned second_size, unsigned third_size >
         using pack3_N_N_t = ::color::_internal::utility::container::pack3< container_name,  component_name, unsigned, first_size, second_size, third_size >;

        template<  unsigned first_size, unsigned second_size, unsigned third_size >
         using pack3_8_8_t = ::color::_internal::utility::container::pack3_N_N_t< std::uint8_t,  std::uint8_t, first_size, second_size, third_size >;

        template<  unsigned first_size, unsigned second_size, unsigned third_size >
         using pack3_16_8_t = ::color::_internal::utility::container::pack3_N_N_t< std::uint16_t,  std::uint8_t, first_size, second_size, third_size >;

        template<  unsigned first_size, unsigned second_size, unsigned third_size >
         using pack3_32_16_t = ::color::_internal::utility::container::pack3_N_N_t< std::uint32_t,  std::uint16_t, first_size, second_size, third_size >;

        template<  unsigned first_size, unsigned second_size, unsigned third_size >
         using pack3_64_16_t = ::color::_internal::utility::container::pack3_N_N_t< std::uint64_t,  std::uint16_t, first_size, second_size, third_size >;

        template<  unsigned first_size, unsigned second_size, unsigned third_size >
         using pack3_64_32_t = ::color::_internal::utility::container::pack3_N_N_t< std::uint64_t,  std::uint32_t, first_size, second_size, third_size >;

        using split233_t = ::color::_internal::utility::container::pack3_8_8_t<  2, 3, 3 >;
        using split323_t = ::color::_internal::utility::container::pack3_8_8_t<  3, 2, 3 >;
        using split332_t = ::color::_internal::utility::container::pack3_8_8_t<  3, 3, 2 >;

        using split422_t = ::color::_internal::utility::container::pack3_8_8_t<  4, 2, 2 >;
        using split242_t = ::color::_internal::utility::container::pack3_8_8_t<  2, 4, 2 >;
        using split224_t = ::color::_internal::utility::container::pack3_8_8_t<  2, 2, 4 >;

        using split655_t = ::color::_internal::utility::container::pack3_16_8_t< 6, 5, 5 >;
        using split565_t = ::color::_internal::utility::container::pack3_16_8_t< 5, 6, 5 >;
        using split556_t = ::color::_internal::utility::container::pack3_16_8_t< 5, 5, 6 >;

       }
     }
   }
 }

#endif
