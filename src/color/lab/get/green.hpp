#ifndef color_lab_get_green
#define color_lab_get_green

// ::color::get::green( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/lab.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"



 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::lab<tag_name> >::akin_type >::return_type
      green( ::color::model< ::color::category::lab<tag_name> > const& color_parameter )
       {
        typedef ::color::category::lab<tag_name> category_type;
        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_category_type;
        enum { green_p  = ::color::place::_internal::green<akin_category_type>::position_enum };

        return ::color::model< akin_category_type >( color_parameter ).template get<green_p>();
       }

    }
  }

#endif
