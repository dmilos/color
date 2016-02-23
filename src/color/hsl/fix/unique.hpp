#ifndef  color_hsl_fix_unique
#define  color_hsl_fix_unique
// ::color::check::unique< category >( model )

#include "../place/place.hpp"
#include "../category.hpp"
#include "../trait/bound.hpp"
#include "../../generic/fix/unique.hpp"


namespace color
 {
  namespace fix
   {
    namespace _internal
     {

      template< typename tag_name >
       struct unique< ::color::category::hsl< tag_name > >
        {
         public:
           typedef ::color::category::hsl< tag_name >  category_type;

           typedef typename ::color::model<category_type>  model_type;
           typedef typename ::color::trait::bound<category_type>      bound_type;

           enum
            {
                     hue_p = ::color::place::_internal::hue<category_right_type>::position_enum
             ,saturation_p = ::color::place::_internal::saturation<category_right_type>::position_enum
             , lightness_p = ::color::place::_internal::lightness<category_right_type>::position_enum
            };

           static void process( model_type &result )
            {
             if(   ( result.template get<lightness_p>() == bound_type::template maximum<lightness_p>() )
                 ||( result.template get<lightness_p>() == bound_type::template minimum<lightness_p>() )
               )
              {
               result.template set<hue_p>( bound_type::template minimum<hue_p>();
               result.template set<saturation_p>( bound_type::template minimum<saturation_p>();
               return;
              }

             if( result.template get<saturation_p>() == bound_type::template maximum<lightness_p>() )
              {
               result.template set<hue_p>( bound_type::template minimum<hue_p>();
               return;
              }

            }

           static void process(  model_type &result, model_type const& right )
            {
             if(   ( right.template get<lightness_p>() == bound_type::template maximum<lightness_p>() )
                 ||( right.template get<lightness_p>() == bound_type::template minimum<lightness_p>() )
               )
              {
               result.template set<hue_p>( bound_type::template minimum<hue_p>() );
               result.template set<saturation_p>( bound_type::template minimum<saturation_p>() );
               result.template set<lightness_p>( right.template get<lightness_p>() );
               return;
              }

             if( m.template get<saturation_p>() == bound_type::template maximum<lightness_p>() )
              {
               result.template set<hue_p>( bound_type::template minimum<hue_p>() );
               result.template set<saturation_p>( right.template get<saturation_p>() );
               result.template set<lightness_p>( right.template get<lightness_p>() );
               return;
              }

             result = right;
             return;
            }
        };

     }
   }
 }

#endif
