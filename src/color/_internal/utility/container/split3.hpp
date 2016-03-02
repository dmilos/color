#ifndef color__internal_utility_container_split3
#define color__internal_utility_container_split3

// ::color::_internal::utility::container::split3< index_name >

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
          ,unsigned first_size, unsigned second_size, unsigned third_size
         >
         struct split3
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
                     third_position = first_size + second_size
                  };


             enum
              {
                first_mask = ( 1 <<  first_size )-1 ,
               second_mask = ( 1 << second_size )-1 ,
                third_mask = ( 1 <<  third_size )-1
              };

             static component_return_const_type get( input_const_type container, index_input_const_type index )
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
              static component_return_const_type get( input_const_type container )
               {
                //TODO C++14 static_assert( index <  length, "Index is out of range." );   
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
                //TODO C++14 static_assert( index <  length, "Index is out of range." );
                switch( index )
                 {
                  case( 0 ) : container = ( container & ~(   first_mask << (  first_position ) ) )  |  ( ((instance_type)value) << (  first_position ) ); break;
                  case( 1 ) : container = ( container & ~(  second_mask << ( second_position ) ) )  |  ( ((instance_type)value) << ( second_position ) ); break;
                  case( 2 ) : container = ( container & ~(   third_mask << (  third_position ) ) )  |  ( ((instance_type)value) << (  third_position ) ); break;
                 }
               }

             static /*constexpr*/ index_return_image_type size()
              {
               static const index_instance_type local_length = 3;
               return local_length;
              }
          };


         using split233 = ::color::_internal::utility::container::split3< std::uint8_t,  std::uint8_t, unsigned, 2, 3, 3 >;
         using split323 = ::color::_internal::utility::container::split3< std::uint8_t,  std::uint8_t, unsigned, 3, 2, 3 >;
         using split332 = ::color::_internal::utility::container::split3< std::uint8_t,  std::uint8_t, unsigned, 3, 3, 2 >;

         using split422 = ::color::_internal::utility::container::split3< std::uint8_t,  std::uint8_t, unsigned, 4, 2, 2 >;
         using split242 = ::color::_internal::utility::container::split3< std::uint8_t,  std::uint8_t, unsigned, 2, 4, 2 >;
         using split224 = ::color::_internal::utility::container::split3< std::uint8_t,  std::uint8_t, unsigned, 2, 2, 4 >;

         using split655 = ::color::_internal::utility::container::split3< std::uint16_t, std::uint8_t, unsigned, 6, 5, 5 >;
         using split565 = ::color::_internal::utility::container::split3< std::uint16_t, std::uint8_t, unsigned, 5, 6, 5 >;
         using split556 = ::color::_internal::utility::container::split3< std::uint16_t, std::uint8_t, unsigned, 5, 5, 6 >;

       }
     }
   }
 }

#endif
