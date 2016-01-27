#ifndef color_cmy_get_gray
#define color_cmy_get_gray

// ::color::get::gray( c )

#include "../../gray/akin/cmy.hpp"
#include "../../gray/trait/component.hpp"
#include "../../gray/constant.hpp"

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
      typename ::color::trait::component< typename ::color::akin::gray< ::color::category::cmy<tag_name> >::akin_type >::return_type
      gray( ::color::_internal::model< ::color::category::cmy<tag_name> > const& color_parameter )
       {
        typedef ::color::category::cmy< tag_name > category_type;

        typedef typename ::color::trait::scalar< category_type >::instance_type   scalar_type;

        typedef typename ::color::akin::gray< category_type >::akin_type     akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize< category_type > normalize_type;

        typedef  ::color::constant::gray< akin_type > gray_const_type;

        scalar_type value =
           gray_const_type::Rc() * ( 1 - normalize_type::template process<0>( color_parameter.template get<0>() ) )
         + gray_const_type::Gc() * ( 1 - normalize_type::template process<1>( color_parameter.template get<1>() ) )
         + gray_const_type::Bc() * ( 1 - normalize_type::template process<2>( color_parameter.template get<2>() ) );

        return diverse_type::template process<0>( value );
       }

    }
  }

#endif