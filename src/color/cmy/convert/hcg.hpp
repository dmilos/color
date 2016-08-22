#ifndef color_cmy_convert_hcg
#define color_cmy_convert_hcg

#include "../category.hpp"

#include "../../_internal/convert.hpp"

#include "../../hcg/hcg.hpp"



#include "../place/place.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename cmy_tag_name, typename hcg_tag_name >
     struct convert
      <
        ::color::category::cmy< cmy_tag_name >
       ,::color::category::hcg< hcg_tag_name >
      >
      {
       public:
         typedef ::color::category::cmy< cmy_tag_name > category_left_type;
         typedef ::color::category::hcg< hcg_tag_name > category_right_type;
         typedef double  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
            cyan_p    = ::color::place::_internal::cyan<category_left_type>::position_enum
           ,magenta_p = ::color::place::_internal::magenta<category_left_type>::position_enum
           ,yellow_p  = ::color::place::_internal::yellow<category_left_type>::position_enum
          };

         enum
          {
            hue_p    = ::color::place::_internal::hue<category_left_type>::position_enum
         //,chroma_p = ::color::place::_internal::chroma<category_left_type>::position_enum
           ,gray_p   = ::color::place::_internal::gray<category_left_type>::position_enum
          };


         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type hue    = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
           scalar_type chroma = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
           scalar_type gray   = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

           int region  = int( 6 * hue );
           scalar_type f = hue * 6 - region;
           scalar_type p = gray * (scalar_type(1) - chroma);
           scalar_type q = p + chroma * (scalar_type(1) - f);
           scalar_type t = p + chroma * f;
           scalar_type v = p + chroma;

           scalar_type red;
           scalar_type green;
           scalar_type blue;

           switch( region  % 6 )
            {
             case 0: red = v, green = t, blue = p; break;
             case 1: red = q, green = v, blue = p; break;
             case 2: red = p, green = v, blue = t; break;
             case 3: red = p, green = q, blue = v; break;
             case 4: red = t, green = p, blue = v; break;
             case 5: red = v, green = p, blue = q; break;
            }

           container_left_trait_type::template set<cyan_p   >( left, diverse_type::template process<cyan_p   >( scalar_type(1) - red   ) );
           container_left_trait_type::template set<magenta_p>( left, diverse_type::template process<magenta_p>( scalar_type(1) - green ) );
           container_left_trait_type::template set<yellow_p >( left, diverse_type::template process<yellow_p >( scalar_type(1) - blue  ) );
          }
      };

   }
 }

#endif
