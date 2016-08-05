#ifndef color_YDbDr_get_blue
#define color_YDbDr_get_blue

// ::color::get::blue( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/YDbDr.hpp"
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
      typename ::color::trait::component< typename ::color::akin::rgb<::color::category::YDbDr<tag_name> >::akin_type >::return_type
      blue( ::color::model< ::color::category::YDbDr<tag_name> > const& color_parameter )
       {
        typedef ::color::category::YDbDr<tag_name>  category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type>   normalize_type;

        typedef ::color::constant::YDbDr< category_type >  YDbDr_const_type;

        enum { blue_p  = ::color::place::_internal::blue<akin_type>::position_enum };

        scalar_type b = 0; //!< TODO

        return diverse_type::template process<blue_p>( b );
       }

    }
  }

#endif
