#ifndef color_rgb_get_quadrature
#define color_rgb_get_quadrature

// ::color::get::quadrature( c )

#include "../../yiq/akin/rgb.hpp"
#include "../../yiq/trait/component.hpp"
#include "../../yiq/constant.hpp"

#include "../category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"
#include "../../generic/get/quadrature.hpp"


 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< typename ::color::akin::yiq< ::color::category::rgb<tag_name> >::akin_type >::component_const_type
      quadrature( ::color::model< ::color::category::rgb<tag_name> > const& color_parameter )
       {
        typedef ::color::category::rgb<tag_name> category_type;
        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::yiq<category_type >::akin_type     akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize< category_type > normalize_type;

        typedef ::color::constant::yiq< akin_type > yiq_const_type;

        enum
         {
           red_p   = ::color::place::_internal::red<category_type>::position_enum
          ,green_p = ::color::place::_internal::green<category_type>::position_enum
          ,blue_p  = ::color::place::_internal::blue<category_type>::position_enum
         };

        scalar_type value =
           + yiq_const_type::b31() * normalize_type::template process<red_p   >( color_parameter.template get<red_p   >() )
           + yiq_const_type::b32() * normalize_type::template process<green_p >( color_parameter.template get<green_p >() )
           + yiq_const_type::b33() * normalize_type::template process<blue_p  >( color_parameter.template get<blue_p  >() )
           ;

        value = value / yiq_const_type::q_range() + scalar_type(0.5);
        return diverse_type::template process<2>( /*typename ::color::trait::scalar<akin_type>::instance_type ( */value /* ) */);
       }

    }
  }

#endif