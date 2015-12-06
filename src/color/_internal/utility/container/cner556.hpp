#ifndef color__internal_utility_container_cner332
#define color__internal_utility_container_cner332

// ::color::_internal::utility::container::cner332< index_name >

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

        template<  typename index_name >
          struct cner556
           {
            public:

              typedef index_name     index_type;

              typedef std::uint8_t  value_type;
              typedef std::uint16_t  instance_type;

              typedef instance_type const      const_type;
              typedef instance_type const&     const_return_type;
              typedef instance_type      &     return_type;
              typedef instance_type const&     const_input_type;
              typedef instance_type      &     input_type;

              typedef ::color::_internal::utility::type::index< index_type >   index_trait_type;

              typedef typename index_trait_type::instance_type     index_instance_type;
              typedef typename index_trait_type::const_input_type  index_const_input_type;
              typedef typename index_trait_type::const_return_type index_const_return_type;

              typedef ::color::_internal::utility::type::traitP< value_type >         component_trait_type;

              typedef typename component_trait_type::const_type           component_const_type;
              typedef typename component_trait_type::instance_type        component_type;
              typedef typename component_trait_type::const_return_type    component_const_return_type;
              typedef typename component_trait_type::const_input_type     component_const_input_type;

              typedef void set_return_type;

              static component_const_return_type get( const_input_type container, index_const_input_type index )
               {
                switch( index )
                 {
                  case( 0 ): return ( ( container >>  0 ) & 31 );
                  case( 1 ): return ( ( container >>  5 ) & 31 );
                  case( 2 ): return ( ( container >> 10 ) & 63 );
                 }
                return 0;
               }

              template< index_instance_type index >
               static component_const_return_type get( const_input_type container )
                {
                 switch( index )
                  {
                   case( 0 ): return ( ( container >>  0 ) & 31 );
                   case( 1 ): return ( ( container >>  5 ) & 31 );
                   case( 2 ): return ( ( container >> 10 ) & 63 );
                  }
                 return 0;
                }

              static set_return_type set( input_type container, index_const_input_type index, component_const_input_type value )
               {
                switch( index )
                 {
                  case(0) : container = ( container & ~(  31 << (  0 ) ) )  |  ( ((instance_type)value) << (  0) ); break;
                  case(1) : container = ( container & ~(  31 << (  5 ) ) )  |  ( ((instance_type)value) << (  5) ); break;
                  case(2) : container = ( container & ~(  63 << ( 10 ) ) )  |  ( ((instance_type)value) << ( 10) ); break;
                 }
               }

              template< index_instance_type index >
               static set_return_type set( input_type container, component_const_input_type value )
                {
                switch( index )
                 {
                  case(0) : container = ( container & ~(  31 << (  0 ) ) )  |  ( ((instance_type)value) << (  0) ); break;
                  case(1) : container = ( container & ~(  31 << (  5 ) ) )  |  ( ((instance_type)value) << (  5) ); break;
                  case(2) : container = ( container & ~(  63 << ( 10 ) ) )  |  ( ((instance_type)value) << ( 10) ); break;
                 }
                }

              static /*constexpr*/ index_const_return_type size()
               {
                static index_instance_type local_length = 3;
                return local_length;
               }
           };
       }
     }
   }
 }

#endif