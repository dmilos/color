#ifndef color_cmy_convert_cmyk
#define color_cmy_convert_cmyk

#include "../category.hpp"

#include "../../_internal/convert.hpp"

#include "../../cmyk/cmyk.hpp"



#include "../place/place.hpp"

#include "../../generic/operation/diverse.hpp"
#include "../../generic/operation/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../_internal/normalize.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename cmy_tag_name, typename cmyk_tag_name >
     struct convert
      <
        ::color::category::cmy< cmy_tag_name >
       ,::color::category::cmyk<cmyk_tag_name>
      >
       {
        public:
          typedef ::color::category::cmy< cmy_tag_name > category_left_type;
          typedef ::color::category::cmyk<cmyk_tag_name> category_right_type;
          typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

          typedef ::color::trait::container<category_left_type>     container_left_trait_type;
          typedef ::color::trait::container<category_right_type>    container_right_trait_type;

          typedef typename container_left_trait_type::input_type         container_left_input_type;
          typedef typename container_right_trait_type::model_type  container_right_const_input_type;

          typedef ::color::_internal::diverse< category_left_type >    diverse_type;
          typedef ::color::_internal::normalize< category_right_type > normalize_type;


         enum
          {
            cl_p  = ::color::place::_internal::cyan<category_left_type>::position_enum
           ,ml_p  = ::color::place::_internal::magenta<category_left_type>::position_enum
           ,yl_p  = ::color::place::_internal::yellow<category_left_type>::position_enum
          };

         enum
          {
            cr_p  = ::color::place::_internal::cyan<category_right_type>::position_enum
           ,mr_p  = ::color::place::_internal::magenta<category_right_type>::position_enum
           ,yr_p  = ::color::place::_internal::yellow<category_right_type>::position_enum
           ,kr_p  = ::color::place::_internal::key<category_right_type>::position_enum
          };


          static void process
           (
             container_left_input_type         left
            ,container_right_const_input_type  right
           )
           {
            scalar_type cc = normalize_type::template process<cr_p>( container_right_trait_type::template get<cr_p>( right ) );
            scalar_type cm = normalize_type::template process<mr_p>( container_right_trait_type::template get<mr_p>( right ) );
            scalar_type cy = normalize_type::template process<yr_p>( container_right_trait_type::template get<yr_p>( right ) );
            scalar_type ck = normalize_type::template process<kr_p>( container_right_trait_type::template get<kr_p>( right ) );

            scalar_type c = cc * (1-ck) + ck;
            scalar_type m = cm * (1-ck) + ck;
            scalar_type y = cy * (1-ck) + ck;

            container_left_trait_type::template set<cl_p>( left, diverse_type::template process<cl_p>( c ) );
            container_left_trait_type::template set<ml_p>( left, diverse_type::template process<ml_p>( m ) );
            container_left_trait_type::template set<yl_p>( left, diverse_type::template process<yl_p>( y ) );
           }
       };

   }
 }

#endif
