#ifndef color_cmyk_set_red
#define color_cmyk_set_red

// ::color::set::red( c, val )

#include "../../rgb/akin/cmyk.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace set
    {

     template< typename tag_name >
      inline
      void
      red
       (
         ::color::_internal::model< ::color::category::cmyk<tag_name> >                                   & color_parameter,
        typename ::color::_internal::model< ::color::category::cmyk<tag_name> >::component_input_const_type         component_parameter
       )
       {
        typedef ::color::category::cmyk< tag_name >    category_type;
        typedef typename ::color::akin::rgb< category_type >::akin_type     akin_type;
        typedef typename ::color::trait::scalar< category_type >::instance_type   scalar_type;



        typedef ::color::_internal::diverse< akin_type >       diverse_type;
        typedef ::color::_internal::normalize< category_type > normalize_type;

        scalar_type value = /* TODO */
               0.2126 * normalize_type::template process<0>( color_parameter.template get<0>() )
             + 0.7152 * normalize_type::template process<1>( color_parameter.template get<1>() )
             + 0.0722 * normalize_type::template process<2>( color_parameter.template get<2>() );

       }

    }
  }

#endif
