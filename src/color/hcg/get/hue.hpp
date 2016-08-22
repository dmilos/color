#ifndef color_hcg_get_hue
#define color_hcg_get_hue

// ::color::get::hue( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::hcg< tag_name> >::component_const_type
      hue( ::color::model< ::color::category::hcg< tag_name> > const& color_parameter )
       {
        typedef ::color::category::hcg< tag_name>  category_type;
        enum{ hue_p  = ::color::place::_internal::hue<category_type>::position_enum };

        return color_parameter.template get<hue_p>();
       }

    }
  }

#endif 