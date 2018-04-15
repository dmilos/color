#ifndef color_gray_get_black
#define color_gray_get_black

// ::color::get::black( c )

#include "../../generic/get/black.hpp"
#include "../../generic/model.hpp"
#include "../category.hpp"
#include "../trait/component.hpp"
#include "../../generic/operation/invert.hpp" 

 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      typename ::color::trait::component< ::color::category::gray<tag_name> >::return_type
      black( ::color::model< ::color::category::gray<tag_name> > const& color_parameter )
       {
        typedef  ::color::category::gray<tag_name> category_type;
        typedef  ::color::operation::_internal::invert< category_type > invert_type;

        return invert_type::template component<0>( color_parameter.template get<0>() );
       }

    }
  }

#endif 