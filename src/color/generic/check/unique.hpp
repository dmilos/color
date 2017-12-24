#ifndef color_generic_check_unique
#define color_generic_check_unique
// ::color::check::unique< category >( model )

#include "../../generic/model.hpp"

namespace color
 {
  namespace check
   {
    namespace _internal
     {

      template< typename category_name >
       struct unique
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

    /* there are no other combination of values that's represent same color as this one
     * e.g. RGB are always unique, HSL not.
     * */
    template< typename category_name >
     inline
     bool unique( ::color::model<category_name> const& m )
      {
       return ::color::check::_internal::unique<category_name>::process( m );
      }

   }
 }

#endif
