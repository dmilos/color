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
      alpha( ::color::model< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, red_position, green_position, blue_position, alpha_position > > > const& color_parameter )
       {
        typedef ::color::category::_internal::rgba_scramble< value_name, red_position, green_position, blue_position, alpha_position > tag_type;
        typedef ::color::category::rgb< tag_type >  category_type;

        enum { alpha_enum  = ::color::place::_internal::alpha< category_type >::position_enum };

        // TODO c++14 static_assert( alpha_position != alpha_enum, "Internal: Mismach in aplha position." );

        return color_parameter.template get< alpha_position >();
       }

     // TODO template< typename tag_name >
     // TODO  inline
     // TODO  typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
     // TODO  alpha( ::color::model< ::color::category::rgb< tag_name> > const& color_parameter )
     // TODO   {
     // TODO    typedef ::color::category::rgb< tag_name>  category_type;
     // TODO    enum{ alpha_enum  = ::color::place::_internal::alpha<category_type>::position_enum };
     // TODO 
     // TODO   // TODO return if_< ::color::place::_internal::alpha<category_type>::has_enum, maximum() , color_parameter.template get<alpha_enum>()>
     // TODO 
     // TODO    return color_parameter.template get<alpha_enum>();
     // TODO   }

    }
  }

#endif

