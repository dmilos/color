#ifndef color_hsi_check_unique
#define color_hsi_check_unique
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
       struct unique< ::color::category::hsi< tag_name > >
        {
         public:
           typedef ::color::category::hsi< tag_name > category_type;

           typedef ::color::model<category_type>          model_type;
           typedef ::color::trait::bound< category_type >        bound_type;

           enum
            {
              hue_p        = ::color::place::_internal::hue<category_type>::position_enum
             ,saturation_p = ::color::place::_internal::saturation<category_type>::position_enum
             ,intensity_p  = ::color::place::_internal::intensity<category_type>::position_enum
            };

           static bool process( model_type const& m )
            {

             if( m.template get<saturation_p>() == bound_type::template minimum<saturation_p>() ) { return false; }

             if( m.template get<intensity_p>() == bound_type::template minimum<intensity_p>() ) { return false; }

             if( m.template get<intensity_p>() == bound_type::template maximum<intensity_p>() )
              {
               if( m.template get<saturation_p>() == bound_type::template minimum<saturation_p>() )
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
