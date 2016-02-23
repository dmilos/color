#ifndef color_yiq_convert_hsv
#define color_yiq_convert_hsv

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../hsv/hsv.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename yiq_tag_name, typename hsv_tag_name >
     struct convert
      <
        ::color::category::yiq< yiq_tag_name >
       ,::color::category::hsv<  hsv_tag_name >
      >
      {
       public:
         typedef ::color::category::yiq< yiq_tag_name >    yiq_category_type, category_left_type;
         typedef ::color::category::hsv< hsv_tag_name >    hsv_category_type, category_right_type;

         typedef typename ::color::akin::rgb< hsv_category_type >::akin_type  rgb_category_type;

         typedef ::color::model< yiq_category_type > yiq_model_type;
         typedef ::color::model< hsv_category_type >  hsv_model_type;

         typedef ::color::model< rgb_category_type >  rgb_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           left = yiq_model_type( rgb_model_type( hsv_model_type( right ) ) ).container();
          }
        };

   }
 }

#endif
