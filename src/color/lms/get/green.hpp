#ifndef color_lms_get_green
#define color_lms_get_green

// ::color::get::green( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/lms.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"



 namespace color
  {
   namespace get
    {

     template< typename tag_name/*, ::color::constant::lms::reference_enum reference_number */ >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::lms<tag_name/*,reference_number*/> >::akin_type >::return_type
      green( ::color::model< ::color::category::lms<tag_name/*,reference_number*/> > const& color_parameter )
       {
        typedef ::color::category::lms<tag_name/*,reference_number*/> category_type;
        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_category_type;
        enum { green_p  = ::color::place::_internal::green<akin_category_type>::position_enum };

        return ::color::model< akin_category_type >( color_parameter ).template get<green_p>();
       }

    }
  }

#endif
