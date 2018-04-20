#ifndef color_cmyk_get_white
#define color_cmyk_get_white

// ::color::get::white( c )

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../generic/operation/invert.hpp"


 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< ::color::category::cmyk< tag_name > >::return_type
      white( ::color::model< ::color::category::cmyk< tag_name > const& color_parameter )
       {
        typedef ::color::category::cmyk< tag_name > category_type;

        typedef  ::color::operation::_internal::invert< category_type > invert_type;

        enum { black_p      = ::color::place::_internal::black< category_type >::position_enum };

        auto b = color_parameter.template get< black_p >();

        return invert_type::template component< black_p >( b );
       }

    }
  }


#endif