#ifndef color_xyz_get_blue
#define color_xyz_get_blue

// ::color::get::blue( c )

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
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::xyz<tag_name> >::akin_type >::return_type
      blue( ::color::model< ::color::category::xyz<tag_name> > const& color_parameter )
       {
        typedef ::color::category::xyz<tag_name> category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type          akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type> normalize_type;

        typedef ::color::constant::xyz::transformation::matrix< scalar_type > xyz_matrix_type;
        typedef ::color::constant::xyz::space::gamma< scalar_type, ::color::constant::xyz::space::sRGB_entity > xyz_gamma_type;

        enum
         {
            blue_p  = ::color::place::_internal::blue<akin_type>::position_enum
         };

        static const scalar_type i31 = xyz_matrix_type::i31(), i32 = xyz_matrix_type::i32(), i33 = xyz_matrix_type::i33();

        scalar_type x = normalize_type::template process<0>( color_parameter.template get<0>() );
        scalar_type y = normalize_type::template process<1>( color_parameter.template get<1>() );
        scalar_type z = normalize_type::template process<2>( color_parameter.template get<2>() );

        scalar_type b = i31 * x + i32 * y + i33 * z;

        b = xyz_gamma_type::encode( b );

        return diverse_type::template process<blue_p>( b );
       }

    }
  }

#endif
