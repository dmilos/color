#ifndef color_hsv_convert_cmy
#define color_hsv_convert_cmy

#include "../../_internal/convert.hpp"
#include "../../cmy/cmy.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename hsv_tag_name, typename cmy_tag_name >
     struct convert
      <
        ::color::category::hsv< hsv_tag_name >
       ,::color::category::cmy< cmy_tag_name >
      >
      {
       public:
         typedef ::color::category::hsv< hsv_tag_name > category_left_type;
         typedef ::color::category::cmy< cmy_tag_name > category_right_type;
         typedef double  scalar_type;

         typedef ::color::trait::scalar<category_left_type> scalar_trait_type;

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
           scalar_type r = scalar_type(1) - normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
           scalar_type g = scalar_type(1) - normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
           scalar_type b = scalar_type(1) - normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

           scalar_type lo = std::min<scalar_type>( {r,g,b} );
           scalar_type v =  std::max<scalar_type>( {r,g,b} );
           scalar_type delta = v - lo;

           scalar_type h = 0;
           scalar_type s = 0;


           if(    ( false == scalar_trait_type::is_small( v ) )
               && ( false == scalar_trait_type::is_small( delta ) ) )
            {
             s = delta / v;

             if( v == r )
              {
               h = (scalar_type(60)/scalar_type(360)) * (g - b) / delta + (g < b ? scalar_type(1) : scalar_type(0));
              }
             if( v == g )
              {
               h = (scalar_type(60)/scalar_type(360)) * (b - r) / delta + (scalar_type(120)/scalar_type(360));
              }

             if( v == b )
              {
               h = (scalar_type(60)/scalar_type(360)) * (r - g) / delta + (scalar_type(240)/scalar_type(360));
              }

            }

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( h ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( s ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( v ) );
          }
      };

   }
 }

#endif