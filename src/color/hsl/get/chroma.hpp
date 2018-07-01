#ifndef color_hsl_get_chroma
#define color_hsl_get_chroma

// ::color::get::chroma( c )

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"



 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::hsl< tag_name> >::component_const_type
      chroma( ::color::model< ::color::category::hsl< tag_name> > const& color_parameter )
       {
        typedef ::color::category::hsl< tag_name >  category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef ::color::_internal::diverse< category_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type>   normalize_type;

        enum
         {
           saturation_p  = ::color::place::_internal::saturation<category_type>::position_enum
          ,lightness_p   = ::color::place::_internal::lightness<category_type>::position_enum
         };

        scalar_type s = normalize_type::template process<saturation_p>( color_parameter.template get<saturation_p>() );
        scalar_type l = normalize_type::template process<lightness_p >( color_parameter.template get<lightness_p >() );

        return diverse_type::template process<lightness_p>( s * l );
       }

    }
  }

#endif