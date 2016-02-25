#ifndef color_rgb_set_alpha
#define color_rgb_set_alpha

// ::color::set::alpha( c, val )

#include "../category.hpp"
#include "../place/place.hpp"

 namespace color
  {
   namespace set
    {
     template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
      inline
      void
      alpha
       (
                  ::color::model< ::color::category::rgb< ::color::category::_internal::rgba_scramble < value_name, red_position, green_position, blue_position, alpha_position > > >                                   & color_parameter
       ,typename  ::color::model< ::color::category::rgb< ::color::category::_internal::rgba_scramble < value_name, red_position, green_position, blue_position, alpha_position > > >::component_input_const_type         component_parameter
       )
       {
        typedef ::color::category::_internal::rgba_scramble < value_name, red_position, green_position, blue_position, alpha_position > tag_type;
        typedef ::color::category::rgb<tag_type>  category_type;

        enum{ alpha_p  = ::color::place::_internal::alpha<category_type>::position_enum };

        color_parameter.template set<alpha_p>( component_parameter );
       }

    }
  }

#endif
