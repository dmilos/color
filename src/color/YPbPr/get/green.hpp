#ifndef color_YPbPr_get_green
#define color_YPbPr_get_green

// ::color::get::green( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/YPbPr.hpp"
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
      typename ::color::trait::component< typename ::color::akin::rgb<::color::category::YPbPr<tag_name> >::akin_type >::return_type
      green( ::color::model< ::color::category::YPbPr<tag_name> > const& color_parameter )
       {
        typedef ::color::category::YPbPr<tag_name>  category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type>   normalize_type;

        typedef ::color::constant::YPbPr< category_type >  YPbPr_const_type; 

        enum { green_p  = ::color::place::_internal::green<akin_type>::position_enum };

        scalar_type g = 0; //!< TODO

        return diverse_type::template process<green_p>( g );
       }

    }
  }

#endif
