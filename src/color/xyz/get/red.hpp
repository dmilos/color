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
      typename ::color::trait::component< typename ::color::akin::rgb<::color::category::xyz<tag_name> >::akin_type >::return_type
      red( ::color::model< ::color::category::xyz<tag_name> > const& color_parameter )
       {
        typedef ::color::category::xyz<tag_name> category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;
        typedef typename ::color::akin::rgb<category_type>::akin_type          akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type> normalize_type;

        //typedef ::color::constant::xyz::matrix< category_right_type > xyz_matrix_type;

        enum
         {
            red_p  = ::color::place::_internal::red<akin_type>::position_enum
         };

        // TODO
        scalar_type r = 0; //a11 * y + a12 * i + a13 * q;

        return diverse_type::template process<red_p>( r );
       }

    }
  }

#endif
