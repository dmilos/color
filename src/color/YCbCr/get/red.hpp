#ifndef color_YCbCr_get_red
#define color_YCbCr_get_red

// ::color::get::red( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/YCbCr.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"
#include "../constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb<::color::category::YCbCr<tag_name> >::akin_type >::return_type
      red( ::color::model< ::color::category::YCbCr<tag_name> > const& color_parameter )
       {
        typedef ::color::category::YCbCr< tag_name >  category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type>   normalize_type;

        typedef ::color::constant::YCbCr< category_type >  YCbCr_const_type; 

        enum { red_p  = ::color::place::_internal::red<akin_type>::position_enum };

        scalar_type r = 0; //!< TODO

        return diverse_type::template process<red_p>( r );
       }

    }
  }

#endif
