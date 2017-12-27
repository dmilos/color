#ifndef color_xyz_get_red
#define color_xyz_get_red

// ::color::get::red( c )

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
      red( ::color::model< ::color::category::xyz<tag_name> > const& color_parameter )
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
            red_p  = ::color::place::_internal::red<akin_type>::position_enum
         };

        static const scalar_type i11 = xyz_matrix_type::i11(), i12 = xyz_matrix_type::i12(), i13 = xyz_matrix_type::i13();

        scalar_type x = normalize_type::template process<0>( color_parameter.template get<0>() );
        scalar_type y = normalize_type::template process<1>( color_parameter.template get<1>() );
        scalar_type z = normalize_type::template process<2>( color_parameter.template get<2>() );

        scalar_type r = i11 * x + i12 * y + i13 * z;

        r = xyz_gamma_type::encode( r );

        return diverse_type::template process<red_p>( r );
       }

    }
  }

#endif
