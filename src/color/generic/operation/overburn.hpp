#ifndef color_generic_operation_overburn
#define color_generic_operation_overburn
// color::operation::overburn< category >( model )

#include "../../_internal/model.hpp"

namespace color
 {
  namespace operation
   {
    namespace _internal
     {

      template< typename category_name >
       struct overburn
        {
         public:
          typedef category_name category_type;

          typedef ::color::_internal::model<category_type>          model_type;
          typedef ::color::_internal::bound<category_type>          bound_type;
          typedef ::color::_internal::container< category_name >    container_trait_type;
          typedef ::color::_internal::index<category_type>          index_trait_type;

          typedef typename index_trait_type::instance_type          index_type;

          typedef ::color::operation::_internal::overburn<category_type>   this_type;

          static bool process( model_type const& m )
           {
            for( index_type index = 0; index < container_trait_type::size(); index ++ )
             {
              if( m.get( index ) <  bound_type::minimum( index ) )
               {
                return true;
                continue;
               }
              if(  bound_type::maximum( index ) < m.get( index ) )
               {
                return true;
                continue;
               }
             }
            return false;
           }

        };
     }

    template< typename category_name >
     inline
     bool overburn( ::color::_internal::model<category_name> const& m )
      {
       return  ::color::operation::_internal::overburn<category_name>::process( m );
      }

   }
 }

#endif
