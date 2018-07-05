#ifndef color_YPbPr_convert_rgb
#define color_YPbPr_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/category.hpp"
#include "../../rgb/trait/container.hpp"

#include "../category.hpp"
#include "../constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename YPbPr_tag_name, ::color::constant::YPbPr::reference_enum YPbPr_reference_number
      ,typename rgb_tag_name 
     >
     struct convert
      <
        ::color::category::YPbPr<   YPbPr_tag_name, YPbPr_reference_number >
       ,::color::category::rgb<   rgb_tag_name >
      >
      {
       public:
         typedef ::color::category::YPbPr< YPbPr_tag_name, YPbPr_reference_number > category_left_type;
         typedef ::color::category::rgb<     rgb_tag_name > category_right_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         typedef ::color::constant::YPbPr::parameter< YPbPr_tag_name, YPbPr_reference_number >  YPbPr_parameter_type;

           enum
            {
              red_p   = ::color::place::_internal::red<category_right_type>::position_enum
             ,green_p = ::color::place::_internal::green<category_right_type>::position_enum
             ,blue_p  = ::color::place::_internal::blue<category_right_type>::position_enum
            };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type r = normalize_type::template process<red_p  >( container_right_trait_type::template get<red_p  >( right ) );
           scalar_type g = normalize_type::template process<green_p>( container_right_trait_type::template get<green_p>( right ) );
           scalar_type b = normalize_type::template process<blue_p >( container_right_trait_type::template get<blue_p >( right ) );

           scalar_type Y  = YPbPr_parameter_type::b11() * r + YPbPr_parameter_type::b12() * g + YPbPr_parameter_type::b13() * b;
           scalar_type Pb = YPbPr_parameter_type::b21() * r + YPbPr_parameter_type::b22() * g + YPbPr_parameter_type::b23() * b;
           scalar_type Pr = YPbPr_parameter_type::b31() * r + YPbPr_parameter_type::b32() * g + YPbPr_parameter_type::b33() * b;

           Pb = YPbPr_parameter_type::Pb_normalize( Pb );
           Pr = YPbPr_parameter_type::Pr_normalize( Pr );

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( Y  ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( Pb ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( Pr ) );
          }
      };

   }
 }

#endif
