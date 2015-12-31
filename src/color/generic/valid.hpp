#ifndef color__internal_valid
#define color__internal_valid
// color::_internal::valid< category >

#include "../_interna/model.hpp"
#include "./boud.hpp"
#include "./container.hpp"
#include "./component.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename category_name >
     struct valid
      {
       public:
        typedef ::color::_internal::model<category_type>          model_type;
        typedef ::color::_internal::boud<category_type>           bound_type;
        typedef ::color::_internal::container< category_name >    container_trait_type;
        typedef ::color::_internal::component< category_name >    component_trait_type;

        typedef ::color::_internal::valid<category_type>   this_type;

        static bool range( model_type const& m )
         {
          typename component_trait_type::instance_type value;
          for( index_type index=0; index < container_trait_type::size() ; ++index )
           {
            value = container_trait_type::get( m, index );
            if( value < bound_type::minimum( index ) )
             {
              return false;
             }
            if( bound_type::maximum( index ) < value )
             {
              return false;
             }
           }
          return true;
         }

        static bool integrity( model_type const& m )
         {
          // TODO. Model specific
          return this_type::range( m );
         }

      };

   }
 }

#endif
