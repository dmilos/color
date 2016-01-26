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
         typedef double  scalar_type;

         typedef ::color::trait::scalar< category_left_type > scalar_trait_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type cc = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
           scalar_type cm = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
           scalar_type cy = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

           scalar_type k = std::min( { cc, cm, cy } );
           scalar_type c = scalar_type(0);
           scalar_type m = scalar_type(0);
           scalar_type y = scalar_type(0);

           if( false == scalar_trait_type::is_small( 1 - k ) )
            {
             c = (cc-k) / ( 1-k );
             m = (cm-k) / ( 1-k );
             y = (cy-k) / ( 1-k );
            }

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( c ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( m ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( y ) );
           container_left_trait_type::template set<3>( left, diverse_type::template process<3>( k ) );
          }
      };

   }
 }

#endif