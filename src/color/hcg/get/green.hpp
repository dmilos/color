#ifndef color_hcg_get_green
#define color_hcg_get_green

// ::color::get::green( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/hcg.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"



 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb<::color::category::hcg<tag_name> >::akin_type >::return_type
      green( ::color::model< ::color::category::hcg<tag_name> > const& color_parameter )
       {
        typedef ::color::category::hcg<tag_name>  category_type;
        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;
        enum { green_p  = ::color::place::_internal::green<akin_type>::position_enum };

        return ::color::model< akin_type >( color_parameter ).template get<green_p>();
       }

    }
  }

#endif
