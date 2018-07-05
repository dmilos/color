#ifndef color_hsv_convert_yuv
#define color_hsv_convert_yuv

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../yuv/yuv.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename hsv_tag_name
      ,typename yuv_tag_name, ::color::constant::yuv::reference_enum reference_number
     >
     struct convert
      <
        ::color::category::hsv< hsv_tag_name >
       ,::color::category::yuv<  yuv_tag_name, reference_number >
      >
      {
       public:
         typedef ::color::category::hsv< hsv_tag_name >    hsv_category_type, category_left_type;
         typedef ::color::category::yuv< yuv_tag_name, reference_number >    yuv_category_type, category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef ::color::model< hsv_category_type > hsv_model_type;
         typedef ::color::model< yuv_category_type >  yuv_model_type;

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
           left = hsv_model_type( rgb_model_type( yuv_model_type( right ) ) ).container();
          }
        };

   }
 }

#endif
