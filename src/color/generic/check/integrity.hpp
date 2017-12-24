#ifndef color_generic_check_integrity
#define color_generic_check_integrity
// ::color::check::integrity< category >( model )

#include "../../generic/model.hpp"

namespace color
 {
  namespace check
   {
    namespace _internal
     {

      template< typename category_name >
       struct integrity
        {
         public:
          typedef category_name category_type;

          typedef ::color::model<category_type>          model_type;

          static bool process( model_type const& )
           {
            //Model specific.
            return true;
           }

        };
     }

    template< typename category_name >
     inline
     bool integrity( ::color::model<category_name> const& m )
      {
       return ::color::check::_internal::integrity<category_name>::process( m );
      }

   }
 }

#endif
