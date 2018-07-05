#ifndef color_hsv_convert_hsv
#define color_hsv_convert_hsv

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
        ::color::category::hsv< tag_left_name >
       ,::color::category::hsv< tag_right_name>
      >
      {
       public:
         typedef ::color::category::hsv< tag_left_name > category_left_type;
         typedef ::color::category::hsv< tag_right_name> category_right_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::_internal::reformat< category_left_type, category_right_type >    reformat_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         enum
          {
            hl_p = ::color::place::_internal::hue<category_left_type>::position_enum
           ,sl_p = ::color::place::_internal::saturation<category_left_type>::position_enum
           ,vl_p = ::color::place::_internal::value<category_left_type>::position_enum
          };

         enum
          {
            hr_p = ::color::place::_internal::hue<category_right_type>::position_enum
           ,sr_p = ::color::place::_internal::saturation<category_right_type>::position_enum
           ,vr_p = ::color::place::_internal::value<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           container_left_trait_type::template set<hl_p>( left, reformat_type::template process<hl_p,hr_p>( container_right_trait_type::template get<hr_p>( right ) ) );
           container_left_trait_type::template set<sl_p>( left, reformat_type::template process<sl_p,sr_p>( container_right_trait_type::template get<sr_p>( right ) ) );
           container_left_trait_type::template set<vl_p>( left, reformat_type::template process<vl_p,vr_p>( container_right_trait_type::template get<vr_p>( right ) ) );
          }
       };

   }
 }

#endif
