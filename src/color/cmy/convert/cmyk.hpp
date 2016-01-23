#ifndef color_cmy_convert_cmyk
#define color_cmy_convert_cmyk

#include "../../_internal/convert.hpp"
#include "../../cmyk/cmyk.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateCMY
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_cmyk2cmy
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;
           typedef scalar_name  scalar_type;

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
             scalar_type ck = normalize_type::template process<3>( container_right_trait_type::template get<3>( right ) );

             scalar_type c = cc * (1-ck) + ck;
             scalar_type m = cm * (1-ck) + ck;
             scalar_type y = cy * (1-ck) + ck;

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( c ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( m ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( y ) );
            }
        };

     }
     
     template< typename cmy_tag_name, typename cmyk_tag_name >
      struct convert
       <
         ::color::category::cmy< cmy_tag_name >
        ,::color::category::cmyk<cmyk_tag_name>
       >
      : public ::color::_internal::_privateCMY::convert_cmyk2cmy
       <
         ::color::category::cmy< cmy_tag_name >
        ,::color::category::cmyk<cmyk_tag_name>
        >
      {
      };

   }
 }

#endif
