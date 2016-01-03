#ifndef color_generic_check_overburn
#define color_generic_check_overburn
// color::check::overburn< category >( model )

#include "../../_internal/model.hpp"

namespace color
 {
  namespace check
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

          static index_type process( model_type const& m )
           {
            for( index_type index = 0; index < container_trait_type::size(); index ++ )
             {
              if( m.get( index ) <  bound_type::minimum( index ) )
               {
                return index;
                continue;
               }
              if(  bound_type::maximum( index ) < m.get( index ) )
               {
                return index;
                continue;
               }
             }
            return container_trait_type::size();
           }

        };
     }

    template< typename category_name >
     inline
     typename ::color::_internal::index<category_name>::instance_type
     overburn( ::color::_internal::model<category_name> const& m )
      {
       return  ::color::check::_internal::overburn<category_name>::process( m );
      }

   }
 }

#endif
