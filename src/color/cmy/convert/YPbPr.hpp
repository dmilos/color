#ifndef color_cmy_convert_YPbPr
#define color_cmy_convert_YPbPr

#include "../category.hpp"

#include "../../_internal/convert.hpp"

#include "../../YPbPr/trait/container.hpp"
#include "../../YPbPr/category.hpp"
#include "../../YPbPr/constant.hpp"

#include "../place/place.hpp"

#include "../../generic/operation/diverse.hpp"
#include "../../generic/operation/normalize.hpp"
#include "../../_internal/reformat.hpp"


namespace color
 {
  namespace _internal
   {

    template
     <
       typename cmy_tag_name
      ,typename YPbPr_tag_name, ::color::constant::YPbPr::reference_enum YPbPr_reference_number
     >
     struct convert
      <
        ::color::category::cmy< cmy_tag_name >
       ,::color::category::YPbPr< YPbPr_tag_name, YPbPr_reference_number>
      >
      {
       public:
         typedef ::color::category::cmy< cmy_tag_name >  category_left_type;
         typedef ::color::category::YPbPr<YPbPr_tag_name, YPbPr_reference_number>    category_right_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::constant::YPbPr::parameter< YPbPr_tag_name, YPbPr_reference_number > YPbPr_parameter_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
               cyan_p  = ::color::place::_internal::cyan<category_left_type>::position_enum
           ,magenta_p  = ::color::place::_internal::magenta<category_left_type>::position_enum
           , yellow_p  = ::color::place::_internal::yellow<category_left_type>::position_enum
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

           container_left_trait_type::template set<   cyan_p>( left, diverse_type::template process<   cyan_p>( scalar_type(1) - r ) );
           container_left_trait_type::template set<magenta_p>( left, diverse_type::template process<magenta_p>( scalar_type(1) - g ) );
           container_left_trait_type::template set< yellow_p>( left, diverse_type::template process< yellow_p>( scalar_type(1) - b ) );
          }
      };

   }
 }

#endif