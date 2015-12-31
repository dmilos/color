#ifndef color_generic_operation_check
#define color_generic_operation_check
// color::operation::check::range< category >( model )
// color::operation::check::integrity< category >( model )

#include "../../_internal/model.hpp"

namespace color
 {
  namespace operation
   {
    namespace _internal
     {

      template< typename category_name >
       struct check
        {
         public:
          typedef category_name category_type;

          typedef ::color::_internal::model<category_type>          model_type;
          typedef ::color::_internal::bound<category_type>          bound_type;
          typedef ::color::_internal::container< category_name >    container_trait_type;
          typedef ::color::_internal::component< category_name >    component_trait_type;
          typedef ::color::_internal::index<category_type>          index_trait_type;

          typedef typename index_trait_type::instance_type          index_type;

          typedef ::color::operation::_internal::check<category_type>   this_type;

          static bool range( model_type const& m )
           {
            typename component_trait_type::instance_type value;
            for( index_type index=0; index < container_trait_type::size() ; ++index )
             {
              value = container_trait_type::get( m.container(), index );
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

    namespace check
     {

      template< typename category_name >
       inline
       bool range( ::color::_internal::model<category_name> const& m )
        {
         return ::color::operation::_internal::check<category_name>::range( m );
        }

      template< typename category_name >
       inline
       bool integrity( ::color::_internal::model<category_name> const& m )
        {
         return  ::color::operation::_internal::check<category_name>::integrity( m );
        }

     }
   }
 }

#endif
