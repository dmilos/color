#ifndef color_xyz_set_gray
#define color_xyz_set_gray

// ::color::set::gray( c, val )

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../gray/place/place.hpp"
#include "../../gray/akin/xyz.hpp"
#include "../../gray/trait/component.hpp"




 namespace color
  {
   namespace set
    {

     template< typename tag_name >
      inline
      void
      gray
       (
                  ::color::model< ::color::category::xyz< tag_name > >                                   & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::gray< ::color::category::xyz< tag_name > >::akin_type >::model_type         component_parameter
       )
       {
        typedef ::color::category::xyz< tag_name >    category_type;
        typedef typename ::color::akin::gray< category_type >::akin_type     akin_type;

        typedef ::color::_internal::reformat< category_type, akin_type >    reformat_type;

        color_parameter.template set<0>( reformat_type::template process<0,0>( component_parameter ) );
       }

    }
  }

#endif
