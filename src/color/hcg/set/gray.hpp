#ifndef color_hcg_set_gray
#define color_hcg_set_gray

// ::color::set::gray( c, val )

#include "../category.hpp"

#include "../../gray/place/place.hpp"
#include "../../gray/akin/hsl.hpp"
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
                  ::color::model< ::color::category::hcg< tag_name > >                               & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::gray< ::color::category::hcg< tag_name > >::akin_type >::input_const_type         component_parameter
       )
       {
        typedef ::color::category::hcg< tag_name >    category_type;
        typedef typename ::color::akin::gray< category_type >::akin_type     akin_type;
        typedef double  scalar_type;

        typedef ::color::_internal::reformat< category_type, akin_type, scalar_type >    reformat_type;

        enum
         {
          value_p = ::color::place::_internal::value<category_type>::position_enum
         };

        color_parameter.template set<value_p>( reformat_type::template process<value_p,0>( component_parameter ) );
       }

    }
  }

#endif
