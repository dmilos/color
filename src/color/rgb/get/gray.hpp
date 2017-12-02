#ifndef color_rgb_get_gray
#define color_rgb_get_gray

// ::color::get::gray( c )

//#include "../../gray/place/place.hpp"
#include "../../gray/akin/rgb.hpp"
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
      typename ::color::trait::component< typename ::color::akin::gray< ::color::category::rgb<tag_name> >::akin_type >::return_type
      gray( ::color::model< ::color::category::rgb<tag_name> > const& color_parameter )
       {
        typedef ::color::category::rgb< tag_name > category_type;

        typedef typename ::color::trait::scalar< category_type >::instance_type   scalar_type;

        typedef typename ::color::akin::gray< category_type >::akin_type     akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize< category_type > normalize_type;

        typedef ::color::constant::gray::rgb< akin_type > gray_const_type;

        enum
         {
            red_p   = ::color::place::_internal::red<category_type>::position_enum
          , green_p = ::color::place::_internal::green<category_type>::position_enum
          , blue_p  = ::color::place::_internal::blue<category_type>::position_enum
         };

        scalar_type value =
             gray_const_type::Rc() * normalize_type::template process<red_p   >( color_parameter.template get<red_p   >() )
           + gray_const_type::Gc() * normalize_type::template process<green_p >( color_parameter.template get<green_p >() )
           + gray_const_type::Bc() * normalize_type::template process<blue_p  >( color_parameter.template get<blue_p  >() )
         ;

        return diverse_type::template process<0>( /*typename ::color::trait::scalar<akin_type>::instance_type ( */value /* ) */);
       }

    }
  }

#endif