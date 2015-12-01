#ifndef color__internal_trait_container_2b5ebab4_efad_473f_aaa7_2aedc159860a
#define color__internal_trait_container_2b5ebab4_efad_473f_aaa7_2aedc159860a

// ::color::_internal::traiy::container


#include <cstdint>

#include "./type.hpp"

namespace color
 {
  namespace _internal
   {
    namespace trait
     {

      template
       <
         typename component_trait_name
        ,typename container_name
        ,typename index_trait_name
        ,unsigned length
       >
       struct container
       {
        public:
          typedef container_name           container_type;
          typedef component_trait_name     component_trait_type;
          typedef index_trait_name         index_trait_type;

          typedef ::color::_internal::trait::type::commonC< container_type > commonC container_trait_type;

          typedef typename index_trait_type::instance_type      index_instance_type;
          typedef typename index_trait_type::const_input_type   index_const_input_type;
          typedef typename index_trait_type::const_return_type  index_const_return_type;

          typedef typename component_trait_type::const_input_type   component_const_input_type;
          typedef typename component_trait_type::const_return_type  component_const_return_type;

          typedef typename container_trait_type::const_input_type  container_const_input_type;
          typedef typename container_trait_type::input_type        container_input_type;

          template< index_instance_type index >
           static component_const_return_type get( container_const_input_type container)
            {
             return container[index];
            }

          static component_const_return_type get( container_const_input_type container, index_const_input_type index )
           {
            return container[index];
           }

          template< index_instance_type index >
           static set_return_type set( container_input_type container, component_const_input_type value )
            {
             container[index] = value;
            }

          static set_return_type set( container_input_type container, index_const_input_type index, component_const_input_type value )
           {
            container[index] = value;
           }

          static index_const_return_type size()
           {
            static index_instance_type length = length;
            return length;
           }
       };

      template
       <
        ,typename index_trait_name
        ,unsigned length
       >
       struct container< ::color::_internal::trait::type::commonP<uint8_t>, uint32_t, index_trait_name, length >
       {
        public:
          typedef uint32_t                                              container_type;
          typedef ::color::_internal::trait::type::commonP<uint8_t>     component_trait_type;
          typedef index_trait_name                                      index_trait_type;

          typedef ::color::_internal::trait::type::commonC< container_type > commonC container_trait_type;

          typedef typename index_trait_type::instance_type      index_instance_type;
          typedef typename index_trait_type::const_input_type   index_const_input_type;
          typedef typename index_trait_type::const_return_type  index_const_return_type;

          typedef typename component_trait_type::const_input_type   component_const_input_type;
          typedef typename component_trait_type::const_return_type  component_const_return_type;

          typedef typename container_trait_type::const_input_type  container_const_input_type;
          typedef typename container_trait_type::input_type        container_input_type;

          template< index_instance_type index >
           static component_const_return_type get( container_const_input_type container )
            {
             return  (component_type) ( ( container >> ( index << 3 )) & 0xFF );
            }

          static component_const_return_type get( container_const_input_type container, index_const_input_type index )
           {
            return  (component_type) ( ( container >> ( index << 3 )) & 0xFF );
           }

          template< index_instance_type index >
           static set_return_type set( container_input_type container, component_const_input_type value )
            {
             container = ( container & ~(  0xFF << ( index << 3 ) ) )  |  ( ((container_type)value) << ( index << 3) );
            }

          static set_return_type set( container_input_type container, index_const_input_type index, component_const_input_type value )
           {
            container = ( container & ~(  0xFF << ( index << 3 ) ) )  |  ( ((container_type)value) << ( index << 3) );
           }

          static index_const_return_type size()
           {
            static index_instance_type length = length;
            return length;
           }
       };

     }
   }
 }
#endif