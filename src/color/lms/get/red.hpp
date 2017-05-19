#ifndef color_lms_get_red
#define color_lms_get_red

// ::color::get::red( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/lms.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"



 namespace color
  {
   namespace get
    {

     template< typename tag_name  /*, ::color::constant::lms::reference_enum reference_number*/ >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::lms<tag_name> >::akin_type >::return_type
      red( ::color::model< ::color::category::lms<tag_name> > const& color_parameter )
       {
        typedef ::color::category::lms<tag_name> category_type;
        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_category_type;
        enum { red_p  = ::color::place::_internal::red<akin_category_type>::position_enum };

        return ::color::model< akin_category_type >( color_parameter ).template get<red_p>();
       }

    }
  }

#endif
