#ifndef color_generic_check_overburn
#define color_generic_check_overburn
// ::color::check::overburn< category >( model )

#include "../../generic/model.hpp"

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

          typedef ::color::model<category_type>          model_type;
          typedef ::color::trait::bound<category_type>          bound_type;
          typedef ::color::trait::container< category_name >    container_trait_type;
          typedef ::color::trait::index<category_type>          index_trait_type;

          typedef typename index_trait_type::instance_type          index_type;

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
     bool
     overburn( ::color::model<category_name> const& m )
      {
       return ::color::check::_internal::overburn<category_name>::process( m );
      }

   }
 }

#endif
