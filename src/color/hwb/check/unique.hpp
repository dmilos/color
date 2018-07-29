#ifndef color_hwb_check_unique
#define color_hwb_check_unique
// ::color::check::unique< category >( model )

#include "../category.hpp"
#include "../place/place.hpp"
#include "../trait/bound.hpp"

#include "../../generic/check/unique.hpp"


namespace color
 {
  namespace check
   {
    namespace _internal
     {

      template< typename tag_name >
       struct unique< ::color::category::hwb< tag_name > >
        {
         public:
           typedef ::color::category::hwb< tag_name > category_type;

           typedef ::color::model<category_type>          model_type;
           typedef ::color::trait::bound< category_type >        bound_type;

           enum
            {
              hue_p   = ::color::place::_internal::hue<category_type>::position_enum
             ,white_p = ::color::place::_internal::white<category_type>::position_entity
             ,black_p = ::color::place::_internal::black<category_type>::position_entity
            };

           static bool process( model_type const& m )
            {

             if( m.template get<white_p>()     == bound_type::template minimum <white_p>() )
              {
               if( m.template get<black_p>() == bound_type::template maximum<black_p>() )
                {
                 return false;
                }
              }

             if( m.template get<white_p>()     == bound_type::template maximum<white_p>() )
              {
               if( m.template get<black_p>() == bound_type::template minimum<black_p>() )
                {
                 return false;
                }
              }

             return true;
            }
        };

     }
   }
 }

#endif
