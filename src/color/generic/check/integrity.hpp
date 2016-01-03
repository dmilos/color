#ifndef color_generic_check_integrity
#define color_generic_check_integrity
// color::check::integrity< category >( model )

#include "../../_internal/model.hpp"

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

          typedef ::color::_internal::model<category_type>          model_type;

          static bool process( model_type const& m )
           {
            // TODO. Model specific
            return true;
           }

        };
     }

    template< typename category_name >
     inline
     bool integrity( ::color::_internal::model<category_name> const& m )
      {
       return  ::color::check::_internal::integrity<category_name>::process( m );
      }

   }
 }

#endif
