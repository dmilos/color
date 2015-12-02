#ifndef color__internal_utility_container_array
#define color__internal_utility_container_array

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace container
       {

        template< typename value_name, unsigned length >
          struct array
           {
            public:

              typedef value_name                      value_type;

              typedef std::array< value_name, length> instance_type;

              typedef instance_type const&     const_return_type;
              typedef instance_type      &     return_type;
              typedef instance_type const&     const_input_type;
              typedef instance_type      &     input_type;

              typedef ::color::_internal::utility::type::index< typename instance_type::size_type >   index_trait_type;

              typedef typename index_trait_type::instance_type     index_instance_type;
              typedef typename index_trait_type::const_input_type  index_const_input_type;
              typedef typename index_trait_type::const_return_type index_const_return_type;

              typedef ::color::_internal::utility::type::traitC< value_name >         component_trait_type;

              typedef typename component_trait_type::const_return_type    component_const_return_type;
              typedef typename component_trait_type::const_input_type     component_const_input_type;
              typedef typename component_trait_type::instance_type        component_type;

              typedef void set_return_type;

              static component_const_return_type get( const_input_type container, index_const_input_type index )
               {
                return container[index];
               }

              template< index_instance_type index >
               static component_const_return_type get( const_input_type container )
                {
                 return container[index];
                }

              static set_return_type set( input_type container, index_const_input_type index, component_const_input_type value )
               {
                container[index] = value;
               }

              template< index_instance_type index >
               static set_return_type set( input_type container, component_const_input_type value )
                {
                 container[index] = value;
                }

              static index_const_return_type size()
               {
                static index_instance_type local_length = length;
                return local_length;
               }
           }; 
       }
     }
   }
 }

#endif
