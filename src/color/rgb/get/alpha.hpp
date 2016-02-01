#ifndef color_rgb_get_alpha
#define color_rgb_get_alpha

// ::color::get::alpha( c )

#include "../category.hpp"


 namespace color
  {
   namespace get
    {

     template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
      inline
      typename ::color::trait::component
       <
        ::color::category::rgb
         <
          ::color::category::_internal::rgba_scramble < value_name, red_position, green_position, blue_position, alpha_position > 
         >
       >::return_image_type
      alpha( ::color::_internal::model< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, red_position, green_position, blue_position, alpha_position > > > const& color_parameter )
       {
        typedef ::color::category::_internal::rgba_scramble< value_name, red_position, green_position, blue_position, alpha_position > tag_type;
        typedef ::color::category::rgb< tag_type >  category_type;

        //enum{ alpha_p  = ::color::place::_internal::alpha< category_type >::position_enum };

        return color_parameter.template get< alpha_position >() ;
       } 

    }
  }

#endif
