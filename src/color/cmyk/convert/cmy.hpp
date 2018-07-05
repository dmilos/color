#ifndef color_cmyk_convert_cmy
#define color_cmyk_convert_cmy

#include "../../_internal/convert.hpp"
#include "../../cmy/cmy.hpp"

#include "../../_internal/diverse.hpp"
#include "../../_internal/normalize.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename cmyk_tag_name, typename cmy_tag_name >
     struct convert
      <
        ::color::category::cmyk< cmyk_tag_name >
       ,::color::category::cmy<   cmy_tag_name >
      >
      {
       public:
         typedef ::color::category::cmyk< cmyk_tag_name > category_left_type;
         typedef ::color::category::cmy<   cmy_tag_name > category_right_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::trait::scalar< category_left_type > scalar_trait_type;

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
           ,kl_p  = ::color::place::_internal::key<category_left_type>::position_enum
          };

         enum
          {
            cr_p  = ::color::place::_internal::cyan<category_right_type>::position_enum
           ,mr_p  = ::color::place::_internal::magenta<category_right_type>::position_enum
           ,yr_p  = ::color::place::_internal::yellow<category_right_type>::position_enum
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

           scalar_type k = std::min/*<scalar_type>*/( { cc, cm, cy } );
           scalar_type c = scalar_type(0);
           scalar_type m = scalar_type(0);
           scalar_type y = scalar_type(0);

           if( false == scalar_trait_type::is_small( 1 - k ) )
            {
             c = (cc-k) / ( 1-k );
             m = (cm-k) / ( 1-k );
             y = (cy-k) / ( 1-k );
            }

           container_left_trait_type::template set<cl_p>( left, diverse_type::template process<cl_p>( c ) );
           container_left_trait_type::template set<ml_p>( left, diverse_type::template process<ml_p>( m ) );
           container_left_trait_type::template set<yl_p>( left, diverse_type::template process<yl_p>( y ) );
           container_left_trait_type::template set<kl_p>( left, diverse_type::template process<kl_p>( k ) );
          }
      };

   }
 }

#endif