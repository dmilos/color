#ifndef color__internal_normalize
#define color__internal_normalize

// ::color::_internal::normalize< >::process(   )
// ::color::_internal::normalize< >::template process< >(   )

#include "../generic/trait/component.hpp"
#include "../generic/trait/index.hpp"
#include "../generic/trait/bound.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename category_name >
     struct normalize
      {
       public:
         typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;
         typedef ::color::trait::bound< category_name >      bound_trait_type;
         typedef ::color::trait::component< category_name >  component_trait_type;
         typedef ::color::trait::index< category_name >      index_trait_type;

         typedef typename component_trait_type::instance_type      component_instance_type;
         typedef typename component_trait_type::model_type   component_input_const_type;

         typedef typename index_trait_type::instance_type       index_instance_type;
         typedef typename index_trait_type::model_type    index_input_const_type;

         static
         scalar_type
         process(  component_input_const_type divergent, index_input_const_type  index )
          {
           scalar_type normal = scalar_type( divergent );

           normal -= scalar_type( bound_trait_type::minimum( index ) );
           normal /= scalar_type( bound_trait_type::range( index ) );
           return normal;
          }

         template< index_instance_type index_size >
          static
          scalar_type
          process( component_input_const_type divergent )
           {
            scalar_type normal = scalar_type( divergent );

            normal -= scalar_type( bound_trait_type::template minimum<index_size>( ) );
            normal /= scalar_type( bound_trait_type::template range<index_size>( ) );

            return normal;
           }

      };

   }
 }

#endif
