#ifndef color__internal_utility_container_scramble5
#define color__internal_utility_container_scramble5

// ::color::_internal::utility::container::scramble5<value_name, first_position, second_position, third_position,fourth_position,fifth_position>

#include "../type/index.hpp"
#include "../type/size.hpp"
#include "../type/traitc.hpp"



namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace container
       {

        template< typename value_name, unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position, unsigned fifth_position >
         struct scramble5
          {
           public:
             typedef value_name                      value_type;

             typedef ::color::_internal::utility::container::scramble5< value_name, first_position, second_position, third_position, fourth_position, fifth_position > this_type;

             typedef std::array< value_name, 5 > instance_type;




             typedef instance_type const      const_type;
             typedef instance_type const&     return_image_type;
             typedef instance_type      &     return_type;
             typedef instance_type      &     return_original_type;
             typedef instance_type const&     model_type;
             typedef instance_type      &     input_type;
             typedef instance_type      &     output_type;

             typedef ::color::_internal::utility::type::index< typename instance_type::size_type >   index_trait_type;

             typedef typename index_trait_type::instance_type     index_instance_type;
             typedef typename index_trait_type::const_type        index_const_type;
             typedef typename index_trait_type::model_type  index_input_const_type;
             typedef typename index_trait_type::return_image_type index_return_image_type;

             typedef ::color::_internal::utility::type::traitC< value_name >         component_trait_type;

             typedef typename component_trait_type::instance_type        component_type;
             typedef typename component_trait_type::const_type           component_const_type;
             typedef typename component_trait_type::return_image_type    component_return_const_type;
             typedef typename component_trait_type::model_type     component_input_const_type;

             typedef ::color::_internal::utility::type::size< typename instance_type::size_type >   size_trait_type;

             typedef typename size_trait_type::return_image_type        size_return_image_type;
             typedef typename size_trait_type::instance_type            size_instance_type;

             typedef void set_return_type;

             enum { size_entity = 5 };


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
                 case( 0 ): return container[first_position];
                 case( 1 ): return container[second_position];
                 case( 2 ): return container[third_position];
                 case( 3 ): return container[fourth_position];
                 case( 4 ): return container[fifth_position];
                }
              }

             template< index_instance_type index >
              static component_return_const_type get( model_type container )
               {
                //TODO C++14 static_assert( index < 5, "Index is out of range." );
                switch( index )
                 {
                  default:
                  case( 0 ): return container[first_position];
                  case( 1 ): return container[second_position];
                  case( 2 ): return container[third_position];
                  case( 3 ): return container[fourth_position];
                  case( 4 ): return container[fifth_position];
                 }
               }

             static set_return_type set( input_type container, index_input_const_type index, component_input_const_type value )
              {
               switch( index )
                {
                 default:
                 case( 0 ): container[first_position] = value; return;
                 case( 1 ): container[second_position] = value; return;
                 case( 2 ): container[third_position] = value; return;
                 case( 3 ): container[fourth_position] = value; return;
                 case( 4 ): container[fifth_position] = value; return;
                }
              }

             template< index_instance_type index >
              static set_return_type set( input_type container, component_input_const_type value )
               {
                //TODO C++14 static_assert( index < 5, "Index is out of range." );
                switch( index )
                 {
                  case( 0 ): container[first_position] = value; return;
                  case( 1 ): container[second_position] = value; return;
                  case( 2 ): container[third_position] = value; return;
                  case( 3 ): container[fourth_position] = value; return;
                  case( 4 ): container[fifth_position] = value; return;
                 }
               }

             static /*constexpr*/ size_return_image_type size()
              {
               static const size_instance_type local_length = size_entity;
               return local_length;
              }
          };

       }
     }
   }
 }

#endif
