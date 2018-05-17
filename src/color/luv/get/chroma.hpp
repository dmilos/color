#ifndef color_luv_get_saturation
#define color_luv_get_saturation

// ::color::get::saturation( c )

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../xyz/constant/illuminant.hpp"




 namespace color
  {
   namespace get
    {

     template
       <
      //, ::color::constant::xyz::illuminant::name_entity
      //, ::color::constant::xyz::illuminant::observer_entity
          typename tag_name
       >
      inline
      typename ::color::model< ::color::category::luv< tag_name> >::component_const_type
      saturation( ::color::model< ::color::category::luv< tag_name> > const& c )
       {
        typedef ::color::category::luv< tag_name>  category_type;

        typedef typename ::color::trait::scalar<category_type>     scalar_trait_type;
        typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

        typedef ::color::constant::xyz::illuminant::point< scalar_type, ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity  > white_point_type;

        enum
         {
          lightness_p  = ::color::place::_internal::lightness<category_type>::position_enum
         };

        static scalar_type un = scalar_type(4)* white_point_type::X()/( white_point_type::X() +  scalar_type(15)*white_point_type::Y() + scalar_type(3)*white_point_type::Z() );
        static scalar_type vn = scalar_type(9)* white_point_type::Y()/( white_point_type::X() +  scalar_type(15)*white_point_type::Y() + scalar_type(3)*white_point_type::Z() );

        scalar_type l = c.template get<lightness_p>();
        scalar_type u = c.template get<1>() - un;
        scalar_type v = c.template get<2>() - vn;

        return scalar_type(13) * sqrt( u*u + v*v ) * l;
       }

    }
  }

#endif