#ifndef color_YCgCo_convert_hsv
#define color_YCgCo_convert_hsv

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../hsv/hsv.hpp"
#include "../../rgb/rgb.hpp"







namespace color
 {
  namespace _internal
   {

    template
     < 
       typename YCgCo_tag_name
      ,typename   hsv_tag_name 
     >
     struct convert
      <
        ::color::category::YCgCo<  YCgCo_tag_name >
       ,::color::category::hsv<      hsv_tag_name >
      >
      {
       public:
         typedef ::color::category::YCgCo< YCgCo_tag_name >    YCgCo_category_type, category_left_type;
         typedef ::color::category::hsv< hsv_tag_name >    hsv_category_type, category_right_type;

         typedef typename ::color::trait::scalar< YCgCo_category_type >::instance_type scalar_type;

         typedef ::color::model< YCgCo_category_type >  YCgCo_model_type;
         typedef ::color::model< hsv_category_type >  hsv_model_type;

         typedef ::color::rgb< scalar_type >  rgb_model_type;


         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           left = YCgCo_model_type( rgb_model_type( hsv_model_type( right ) ) ).container();
          }
        };

   }
 }

#endif
