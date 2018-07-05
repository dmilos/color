#ifndef color_lms_set_gray
#define color_lms_set_gray

// ::color::set::gray( c, val )

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../gray/place/place.hpp"
#include "../../gray/akin/lms.hpp"
#include "../../gray/trait/component.hpp"




 namespace color
  {
   namespace set
    {

     template< typename tag_name , ::color::constant::lms::reference_enum lms_reference_number >
      inline
      void
      gray
       (
                  ::color::model< ::color::category::lms< tag_name, lms_reference_number > >                                   & color_parameter
        ,typename ::color::trait::component< typename ::color::akin::gray< ::color::category::lms< tag_name, lms_reference_number > >::akin_type >::model_type         component_parameter
       )
       {
        typedef ::color::category::lms< tag_name, lms_reference_number >    category_type;
        typedef typename ::color::akin::gray< category_type >::akin_type     akin_category_type;

        typedef ::color::_internal::reformat< category_type, akin_category_type >    reformat_type;

        enum
         {
           lightness_p  = ::color::place::_internal::lightness<category_type>::position_enum
         };

        enum
         {
           gray_p  = ::color::place::_internal::lightness<akin_category_type>::position_enum
         };

        color_parameter.template set<lightness_p>( reformat_type::template process<lightness_p,gray_p>( component_parameter ) );
       }

    }
  }

#endif
