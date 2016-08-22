#ifndef color_rgb_convert_hcg
#define color_rgb_convert_hcg

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

    template< typename rgb_tag_name, typename hcg_tag_name >
     struct convert
      <
        ::color::category::rgb< rgb_tag_name >
       ,::color::category::hcg< hcg_tag_name >
      >
      {
       public:
         typedef ::color::category::rgb< rgb_tag_name > category_left_type;
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
            red_p   = ::color::place::_internal::red<category_left_type>::position_enum
           ,green_p = ::color::place::_internal::green<category_left_type>::position_enum
           ,blue_p  = ::color::place::_internal::blue<category_left_type>::position_enum
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
           scalar_type h    = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
           scalar_type c    = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
           scalar_type gray = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

           scalar_type r     = h; // TODO
           scalar_type green = c; // TODO
           scalar_type b     = gray; // TODO

           container_left_trait_type::template set<red_p  >( left, diverse_type::template process<red_p  >( r     ) );
           container_left_trait_type::template set<green_p>( left, diverse_type::template process<green_p>( green ) );
           container_left_trait_type::template set<blue_p >( left, diverse_type::template process<blue_p >( b     ) );
          }
      };

   }
 }

#endif
