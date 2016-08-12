#ifndef color_YPbPr_get_red
#define color_YPbPr_get_red

// ::color::get::red( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/YPbPr.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"



 namespace color
  {
   namespace get
    {

     template< typename tag_name, ::color::constant::YPbPr::reference_enum reference_number >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::YPbPr<tag_name,reference_number> >::akin_type >::return_type
      red( ::color::model< ::color::category::YPbPr< tag_name, reference_number> > const& color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name,reference_number >  category_type;
        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;
        enum { red_p  = ::color::place::_internal::red<akin_type>::position_enum };

        return ::color::model< akin_type >( color_parameter ).template get<red_p>();
       }

    }
  }

#endif
