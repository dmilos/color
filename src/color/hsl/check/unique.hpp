#ifndef color_hsl_check_unique
#define color_hsl_check_unique
// ::color::check::unique< category >( model )

#include "../category.hpp"
#include "../trait/bound.hpp"
#include "../../generic/check/unique.hpp"


namespace color
 {
  namespace check
   {
    namespace _internal
     {

      template< typename tag_name >
       struct unique< ::color::category::hsl< tag_name> >
        {
         public:
           typedef ::color::category::hsl<tag_name> category_type;

           typedef ::color::_internal::model<category_type>      model_type;
           typedef ::color::trait::bound< category_type >        bound_type;

           enum
            {
                     hue_p = ::color::place::_internal::hue<category_type>::position_enum
             ,saturation_p = ::color::place::_internal::saturation<category_type>::position_enum
             , lightness_p = ::color::place::_internal::lightness<category_type>::position_enum
            };

           static bool process( model_type const& m )
            {
             if( m.template get<1>() == bound_type::template minimum<1>() ) { return false; }
             if( m.template get<2>() == bound_type::template minimum<2>() ) { return false; }
             if( m.template get<2>() == bound_type::template maximum<2>() ) { return false; }
             return true;
            }
        };

     }
   }
 }

#endif
