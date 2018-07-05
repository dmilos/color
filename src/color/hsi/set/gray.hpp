#ifndef color_hsi_set_gray
#define color_hsi_set_gray

// ::color::set::gray( c, val )

#include "../category.hpp"

#include "../../gray/place/place.hpp"
#include "../../gray/akin/hsi.hpp"
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
                  ::color::model< ::color::category::hsi< tag_name > >                               & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::gray< ::color::category::hsi< tag_name > >::akin_type >::model_type         component_parameter
       )
       {
        typedef ::color::category::hsi< tag_name >    category_type;
        typedef typename ::color::akin::gray< category_type >::akin_type     akin_type;

        typedef ::color::_internal::reformat< category_type, akin_type >    reformat_type;

        enum
         {
          intensity_p = ::color::place::_internal::intensity<category_type>::position_enum
         };

        color_parameter.template set<intensity_p>( reformat_type::template process<intensity_p,0>( component_parameter ) );
       }

    }
  }

#endif
