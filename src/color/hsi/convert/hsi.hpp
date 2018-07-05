#ifndef color_hsi_convert_hsi
#define color_hsi_convert_hsi

//#include "../place/place.hpp"

#include "../../_internal/convert.hpp"

#include "../../_internal/reformat.hpp"









namespace color
 {
  namespace _internal
   {

    template< typename tag_left_name, typename tag_right_name >
     struct convert
       <
         ::color::category::hsi< tag_left_name >
        ,::color::category::hsi< tag_right_name>
       >
       {
        public:
           typedef ::color::category::hsi< tag_left_name > category_left_type;
           typedef ::color::category::hsi< tag_right_name> category_right_type;

           typedef ::color::trait::container<category_left_type>     container_left_trait_type;
           typedef ::color::trait::container<category_right_type>    container_right_trait_type;

           typedef ::color::_internal::reformat< category_left_type, category_right_type >    reformat_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::model_type  container_right_const_input_type;

           enum
            {
              hr_p = ::color::place::_internal::hue<category_left_type>::position_enum
             ,sr_p = ::color::place::_internal::saturation<category_left_type>::position_enum
             ,ir_p = ::color::place::_internal::intensity<category_left_type>::position_enum
            };

           enum
            {
              hl_p = ::color::place::_internal::hue<category_right_type>::position_enum
             ,sl_p = ::color::place::_internal::saturation<category_right_type>::position_enum
             ,il_p = ::color::place::_internal::intensity<category_right_type>::position_enum
            };

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             container_left_trait_type::template set<hl_p>( left, reformat_type::template process<hl_p,hr_p>( container_right_trait_type::template get<hr_p>( right ) ) );
             container_left_trait_type::template set<sl_p>( left, reformat_type::template process<sl_p,sr_p>( container_right_trait_type::template get<sr_p>( right ) ) );
             container_left_trait_type::template set<il_p>( left, reformat_type::template process<il_p,ir_p>( container_right_trait_type::template get<ir_p>( right ) ) );
            }
        };
   }
 }

#endif