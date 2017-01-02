#ifndef color_xyz_get_green
#define color_xyz_get_green

// ::color::get::green( c )

#include "../../rgb/akin/xyz.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"
#include "../constant.hpp"
#include "../place/place.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb<::color::category::xyz<tag_name> >::akin_type >::return_type
      green( ::color::model< ::color::category::xyz<tag_name> > const& color_parameter )
       {
        typedef ::color::category::xyz<tag_name> category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type          akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type> normalize_type;

        typedef ::color::constant::xyz::matrix< category_type > xyz_matrix_type;
        typedef ::color::constant::xyz::space::gamma< scalar_type, ::color::constant::xyz::space::sRGB_entity > xyz_gamma_type;

        enum
         {
            green_p  = ::color::place::_internal::green<akin_type>::position_enum
         };

        static const scalar_type a21 = xyz_matrix_type::Mi21(), a22 = xyz_matrix_type::Mi22(), a23 = xyz_matrix_type::Mi23();

        scalar_type x = normalize_type::template process<0>( color_parameter.template get<0>() );
        scalar_type y = normalize_type::template process<1>( color_parameter.template get<1>() );
        scalar_type z = normalize_type::template process<2>( color_parameter.template get<2>() );

        scalar_type g = a21 * x + a22 * y + a23 * z;

        g = xyz_gamma_type::encode( g );

        return diverse_type::template process<green_p>( g );
       }

    }
  }

#endif
