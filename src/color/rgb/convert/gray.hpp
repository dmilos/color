#ifndef color_rgb_convert_gray
#define color_rgb_convert_gray

#include "../place/place.hpp"

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../_internal/reformat.hpp"

#include "../place/red.hpp"
#include "../place/green.hpp"
#include "../place/blue.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename rgb_tag_name, typename gray_tag_name >
     struct convert
      <
        ::color::category::rgb< rgb_tag_name >
       ,::color::category::gray<gray_tag_name>
      >
      {
       public:
         typedef ::color::category::rgb< rgb_tag_name > category_left_type;
         typedef ::color::category::gray<gray_tag_name> category_right_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::_internal::reformat< category_left_type, category_right_type >    reformat_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           enum
            {
              red_p   = ::color::place::_internal::red<category_left_type>::position_enum
             ,green_p = ::color::place::_internal::green<category_left_type>::position_enum
             ,blue_p  = ::color::place::_internal::blue<category_left_type>::position_enum
            };

           enum
            {
              gray_p   = 0
            };

           auto const value = container_right_trait_type::template get<gray_p>( right );

           container_left_trait_type::template set<red_p  >( left, reformat_type::template process<red_p  ,gray_p>( value ) );
           container_left_trait_type::template set<green_p>( left, reformat_type::template process<green_p,gray_p>( value ) );
           container_left_trait_type::template set<blue_p >( left, reformat_type::template process<blue_p ,gray_p>( value ) );
          }
      };

   }
 }

#endif
