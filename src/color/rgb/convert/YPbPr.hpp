#ifndef color_rgb_convert_YPbPr
#define color_rgb_convert_YPbPr

#include "../../_internal/convert.hpp"
#include "../../YPbPr/trait/container.hpp"
#include "../../YPbPr/category.hpp"
#include "../../YPbPr/constant.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

#include "../place/red.hpp"
#include "../place/green.hpp"
#include "../place/blue.hpp"



namespace color
 {
  namespace _internal
   {

    template< typename rgb_tag_name, typename YPbPr_tag_name >
     struct convert
      <
        ::color::category::rgb< rgb_tag_name >
       ,::color::category::YPbPr< YPbPr_tag_name>
      >
      {
       public:
         typedef ::color::category::rgb< rgb_tag_name >  category_left_type;
         typedef ::color::category::YPbPr<YPbPr_tag_name>    category_right_type;
         typedef double  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::constant::YPbPr< category_right_type > YPbPr_const_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
            red_p   = ::color::place::_internal::red<category_left_type>::position_enum
           ,green_p = ::color::place::_internal::green<category_left_type>::position_enum
           ,blue_p  = ::color::place::_internal::blue<category_left_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type Y  = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
           scalar_type Pb = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
           scalar_type Pr = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

           Pb -= 0.5;
           Pr -= 0.5;
           scalar_type r = 0.99999999999914679361 * Y - 1.2188941887145875e-06 * Pb + 1.4019995886561440468  * Pr;
           scalar_type g = 0.99999975910502514331 * Y - 0.34413567816504303521 * Pb - 0.71413649331646789076 * Pr;
           scalar_type b = 1.00000124040004623180 * Y + 1.77200006607230409200 * Pb + 2.1453384174593273e-06 * Pr;

           container_left_trait_type::template set<red_p  >( left, diverse_type::template process<red_p  >( r ) );
           container_left_trait_type::template set<green_p>( left, diverse_type::template process<green_p>( g ) );
           container_left_trait_type::template set<blue_p >( left, diverse_type::template process<blue_p >( b ) );
          }
      };

   }
 }

#endif