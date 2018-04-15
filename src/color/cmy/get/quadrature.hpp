#ifndef color_cmy_get_quadrature
#define color_cmy_get_quadrature

// ::color::get::quadrature( c )

#include "../../yiq/akin/cmy.hpp"
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

     template< typename tag_name>
      inline
      typename ::color::model<  typename ::color::akin::yiq< ::color::category::cmy< tag_name > >::akin_type >::component_const_type
      quadrature( ::color::model< ::color::category::cmy<tag_name> > const& color_parameter )
       {
        typedef ::color::category::cmy<tag_name>  category_type;
        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        typedef typename ::color::akin::yiq<category_type>::akin_type     akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize< category_type > normalize_type;

        typedef ::color::constant::yiq< akin_type > yiq_const_type;

        enum
         {
              cyan_p  = ::color::place::_internal::cyan<category_type>::position_enum
          ,magenta_p  = ::color::place::_internal::magenta<category_type>::position_enum
          , yellow_p  = ::color::place::_internal::yellow<category_type>::position_enum
         };

        scalar_type value =
           + yiq_const_type::b31() * ( scalar_type(1) - normalize_type::template process<   cyan_p>( color_parameter.template get<   cyan_p>() ) )
           + yiq_const_type::b32() * ( scalar_type(1) - normalize_type::template process<magenta_p>( color_parameter.template get<magenta_p>() ) )
           + yiq_const_type::b33() * ( scalar_type(1) - normalize_type::template process< yellow_p>( color_parameter.template get< yellow_p>() ) )
           ;

        value = yiq_const_type::q_normalize( value );

        return diverse_type::template process<2>( /*typename ::color::trait::scalar<akin_type>::instance_type ( */value /* ) */);
       }

    }
  }

#endif