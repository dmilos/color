#ifndef color_yiq_get_quadrature
#define color_yiq_get_quadrature

// ::color::get::quadrature( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::yiq< tag_name> >::component_const_type
      quadrature( ::color::model< ::color::category::yiq< tag_name> > const& color_parameter )
       {
        typedef ::color::category::yiq< tag_name>  category_type;
        enum{ quadrature_p  = ::color::place::_internal::quadrature<category_type>::position_enum };

        return color_parameter.template get<quadrature_p>();
       }

    }
  }

#endif 
