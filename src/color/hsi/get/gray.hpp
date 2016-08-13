#ifndef color_hsi_get_gray
#define color_hsi_get_gray

// ::color::get::gray( c )

#include "../../gray/place/place.hpp"
#include "../../gray/akin/hsi.hpp"
#include "../../gray/trait/component.hpp"

#include "../category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::gray< ::color::category::hsi<tag_name> >::akin_type >::return_type
      gray( ::color::model< ::color::category::hsi<tag_name> > const& color_parameter )
       {
        typedef ::color::category::hsi<tag_name> category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::gray<category_type>::akin_type     akin_type;

        typedef ::color::_internal::diverse< akin_type >      diverse_type;
        typedef ::color::_internal::normalize<category_type>  normalize_type;
 
        enum{ intensity_p      = ::color::place::_internal::intensity<category_type>::position_enum }; 
 
        scalar_type g = normalize_type::template process<intensity_p     >( color_parameter.template get<intensity_p     >() );

        return diverse_type::template process<0>( g );
       }

    }
  }

#endif