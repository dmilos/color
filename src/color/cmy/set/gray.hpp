#ifndef color_cmy_set_gray
#define color_cmy_set_gray

// ::color::set::gray( c, val )

#include "../../generic/trait/scalar.hpp"
#include "../../generic/operation/operation.hpp"
#include "../../gray/constant.hpp"







 namespace color
  {
   namespace set
    {

     template< typename tag_name >
      inline
      void
      gray
       (
         ::color::_internal::model< ::color::category::cmy<tag_name> >                                   & color_parameter,
         typename ::color::_internal::model< ::color::category::cmy<tag_name> >::component_input_const_type         component_parameter
       )
       {
        typedef ::color::category::cmy< tag_name >    category_type;
        typedef typename ::color::akin::gray< category_type >::akin_type     akin_type;
        typedef typename ::color::trait::scalar< category_type >::instance_type   scalar_type;

        typedef ::color::_internal::normalize< category_type > normalize_cmy_type;
        typedef ::color::_internal::normalize< akin_type >     normalize_akin_type;

        typedef  ::color::constant::gray< akin_type > gray_const_type;

        scalar_type value = // convert to R G B
             gray_const_type::Rc() * ( scalar_type(1) - normalize_cmy_type::template process<0>( color_parameter.template get<0>() ) )
           + gray_const_type::Gc() * ( scalar_type(1) - normalize_cmy_type::template process<0>( color_parameter.template get<1>() ) )
           + gray_const_type::Bc() * ( scalar_type(1) - normalize_cmy_type::template process<0>( color_parameter.template get<2>() ) );

        value = normalize_akin_type::template process<0>( component_parameter ) / value;

        ::color::operation::scale( color_parameter,  scalar_type(1) - value );
       }

    }
  }

#endif