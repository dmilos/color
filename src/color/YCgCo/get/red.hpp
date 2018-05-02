    #ifndef color_YCgCo_get_red
#define color_YCgCo_get_red

// ::color::get::red( c )

#include "../../rgb/place/place.hpp"
#include "../../rgb/akin/YCgCo.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"
#include "../constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::YCgCo<tag_name> >::akin_type >::return_type
      red( ::color::model< ::color::category::YCgCo<tag_name> > const& color_parameter )
       {
        typedef ::color::category::YCgCo< tag_name >  category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type   scalar_type;

        //typedef typename ::color::trait::container<category_type>          container_trait_type;

        typedef typename ::color::akin::rgb<category_type>::akin_type     akin_type;

        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize<category_type>   normalize_type;

        typedef ::color::constant::YCgCo< category_type >  YCgCo_const_type;

        enum { red_p  = ::color::place::_internal::red<akin_type>::position_enum };

        scalar_type Y  = normalize_type::template process<0>( color_parameter.template get<0>() );
        scalar_type Cg = normalize_type::template process<1>( color_parameter.template get<1>() );
        scalar_type Co = normalize_type::template process<2>( color_parameter.template get<2>() );

        Cg = YCgCo_const_type::Cg_diverse( Cg );
        Co = YCgCo_const_type::Co_diverse( Co );

        scalar_type r = Y - Cg + Co;

        return diverse_type::template process<red_p>( r );
       }

    }
  }

#endif
