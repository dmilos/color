#ifndef color_xyz_get_gray
#define color_xyz_get_gray

// ::color::get::gray( c )

#include "../../gray/place/place.hpp"
#include "../../gray/akin/xyz.hpp"
#include "../../gray/trait/component.hpp"

#include "../category.hpp"

#include "../../_internal/reformat.hpp"
#include "../../generic/trait/scalar.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::gray< ::color::category::xyz<tag_name> >::akin_type >::return_type
      gray( ::color::model< ::color::category::xyz<tag_name> > const& color_parameter )
       {
        typedef ::color::category::xyz< tag_name > category_type;

        typedef typename ::color::akin::gray< category_type >::akin_type     akin_type;

        typedef ::color::_internal::reformat< akin_type, category_type >  reformat_type;

        return reformat_type::template process<0,0>( color_parameter.template get<0>() );
       }

    }
  }

#endif