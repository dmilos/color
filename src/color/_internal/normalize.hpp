#ifndef color__internal_normalize
#define color__internal_normalize

// ::color::_internal::normalize< >(   )
// ::color::_internal::normalize< >(   )

#include "./component.hpp"
#include "./index.hpp"
#include "./bound.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename category_name, typename float_name = double >
     struct normalize
      {
       public:
         typedef float_name float_type;
         typedef ::color::_internal::bound< category_name >      bound_trait_type;
         typedef ::color::_internal::component< category_name >  component_trait_type;
         typedef ::color::_internal::index< category_name >      index_trait_type;

         typedef typename component_trait_type::instance_type      component_instance_type;
         typedef typename component_trait_type::input_const_type   component_input_const_type;

         typedef typename index_trait_type::instance_type       index_instance_type;
         typedef typename index_trait_type::input_const_type    index_input_const_type;

         static
         float_type
         process(  component_input_const_type divergent, index_input_const_type  index )
          {
           float_name normal = static_cast<component_instance_type>( divergent ); 

           normal -= bound_trait_type::minimum( index );
           normal /= bound_trait_type::range( index );
           return normal;
          }

         template< index_instance_type index_size >
          static
          float_type
          process( component_input_const_type divergent )
           {
            float_name normal = static_cast<component_instance_type>( divergent ); 

            normal -= bound_trait_type::template minimum<index_size>( );
            normal /= bound_trait_type::template range<index_size>( );

            return normal;
           }

      };

   }
 }

#endif
