#ifndef color_rgb_convert_YPbPr
#define color_rgb_convert_YPbPr

#include "../../_internal/convert.hpp"
#include "../../YPbPr/trait/container.hpp"
#include "../../YPbPr/category.hpp"
#include "../../YPbPr/constant.hpp"

#include "../../generic/operation/diverse.hpp"
#include "../../generic/operation/normalize.hpp"
#include "../../_internal/reformat.hpp"

#include "../place/red.hpp"
#include "../place/green.hpp"
#include "../place/blue.hpp"



namespace color
 {
  namespace _internal
   {

    template
     <
       typename rgb_tag_name
      ,typename YPbPr_tag_name, ::color::constant::YPbPr::reference_enum YPbPr_reference_number
     >
     struct convert
      <
        ::color::category::rgb< rgb_tag_name >
       ,::color::category::YPbPr< YPbPr_tag_name, YPbPr_reference_number>
      >
      {
       public:
         typedef ::color::category::rgb< rgb_tag_name >  category_left_type;
         typedef ::color::category::YPbPr<YPbPr_tag_name, YPbPr_reference_number>    category_right_type;

         typedef typename ::color::trait::scalar< category_left_type >::instance_type scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::constant::YPbPr::parameter< YPbPr_tag_name, YPbPr_reference_number > YPbPr_parameter_type;

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

           Pb = YPbPr_parameter_type::Pb_diverse( Pb );
           Pr = YPbPr_parameter_type::Pr_diverse( Pr );

           scalar_type r = YPbPr_parameter_type::a11() * Y + YPbPr_parameter_type::a12() * Pb + YPbPr_parameter_type::a13() * Pr;
           scalar_type g = YPbPr_parameter_type::a21() * Y + YPbPr_parameter_type::a22() * Pb + YPbPr_parameter_type::a23() * Pr;
           scalar_type b = YPbPr_parameter_type::a31() * Y + YPbPr_parameter_type::a32() * Pb + YPbPr_parameter_type::a33() * Pr;

           container_left_trait_type::template set<red_p  >( left, diverse_type::template process<red_p  >( r ) );
           container_left_trait_type::template set<green_p>( left, diverse_type::template process<green_p>( g ) );
           container_left_trait_type::template set<blue_p >( left, diverse_type::template process<blue_p >( b ) );
          }
      };

   }
 }

#endif