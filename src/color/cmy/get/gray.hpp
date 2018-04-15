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
#include "../../generic/get/gray.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::gray< ::color::category::cmy<tag_name> >::akin_type >::return_type
      gray( ::color::model< ::color::category::cmy<tag_name> > const& color_parameter )
       {
        typedef ::color::category::cmy< tag_name > category_type;

        typedef typename ::color::trait::scalar< category_type >::instance_type   scalar_type;

        typedef typename ::color::akin::gray< category_type >::akin_type     akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize< category_type > normalize_type;

        typedef ::color::constant::gray::rgb< akin_type > gray_const_type;

        enum
         {
              cyan_p  = ::color::place::_internal::cyan<category_type>::position_enum
          ,magenta_p  = ::color::place::_internal::magenta<category_type>::position_enum
          , yellow_p  = ::color::place::_internal::yellow<category_type>::position_enum
         };

        scalar_type value =
           gray_const_type::Rc() * ( scalar_type(1) - normalize_type::template process<   cyan_p>( color_parameter.template get<   cyan_p>() ) )
         + gray_const_type::Gc() * ( scalar_type(1) - normalize_type::template process<magenta_p>( color_parameter.template get<magenta_p>() ) )
         + gray_const_type::Bc() * ( scalar_type(1) - normalize_type::template process< yellow_p>( color_parameter.template get< yellow_p>() ) );

        return diverse_type::template process<0>( value );
       }

    }
  }

#endif