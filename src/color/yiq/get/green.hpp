#ifndef color_yiq_get_green
#define color_yiq_get_green

// ::color::get::green( c )

#include "../../rgb/akin/yiq.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"
#include "../constant.hpp"
#include "../place/place.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::yiq<tag_name> >::akin_type >::return_type
      green( ::color::model< ::color::category::yiq<tag_name> > const& color_parameter )
       {
        typedef ::color::category::yiq<tag_name> category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type          akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type> normalize_type;

        typedef ::color::constant::yiq<category_type> yiq_const_type;

        enum
         {
                 luma_p  = ::color::place::_internal::luma<category_type>::position_enum
          ,   inphase_p  = ::color::place::_internal::inphase<category_type>::position_enum
          ,quadrature_p  = ::color::place::_internal::quadrature<category_type>::position_enum
         };

        enum
         {
            green_p  = ::color::place::_internal::green<akin_type>::position_enum
         };

        static scalar_type a21 = yiq_const_type::a21(), a22 = yiq_const_type::a22(), a23 = yiq_const_type::a23();

        scalar_type y = normalize_type::template process<      luma_p>( color_parameter.template get<      luma_p>() );
        scalar_type i = normalize_type::template process<   inphase_p>( color_parameter.template get<   inphase_p>() );
        scalar_type q = normalize_type::template process<quadrature_p>( color_parameter.template get<quadrature_p>() );

        i = ( scalar_type(2) * i - scalar_type(1) ) * yiq_const_type::i_max();
        q = ( scalar_type(2) * q - scalar_type(1) ) * yiq_const_type::q_max();

        scalar_type g = a21 * y + a22 * i + a23 * q;

        return diverse_type::template process<green_p>( g );
       }

    }
  }

#endif
