#ifndef color_YDbDr_get_green
#define color_YDbDr_get_green

// ::color::get::green( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/YDbDr.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"



 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::YDbDr<tag_name> >::akin_type >::return_type
      green( ::color::model< ::color::category::YDbDr<tag_name> > const& color_parameter )
       {
        typedef ::color::category::YDbDr<tag_name>  category_type;
        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;
        enum { green_p  = ::color::place::_internal::green<akin_type>::position_enum };

        return ::color::model< akin_type >( color_parameter ).template get<green_p>();
       }

    }
  }

#endif
