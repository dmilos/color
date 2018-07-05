#ifndef color_hsi_convert_yuv
#define color_hsi_convert_yuv

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
       typename hsi_tag_name
      ,typename yuv_tag_name, ::color::constant::yuv::reference_enum reference_number
     >
     struct convert
      <
        ::color::category::hsi< hsi_tag_name >
       ,::color::category::yuv<  yuv_tag_name, reference_number >
      >
      {
       public:
         typedef ::color::category::hsi< hsi_tag_name >    hsi_category_type, category_left_type;
         typedef ::color::category::yuv< yuv_tag_name, reference_number >    yuv_category_type, category_right_type;

         typedef typename ::color::akin::rgb< yuv_category_type >::akin_type  rgb_category_type;

         typedef ::color::model< hsi_category_type > hsi_model_type;
         typedef ::color::model< yuv_category_type >  yuv_model_type;

         typedef ::color::model< rgb_category_type >  rgb_model_type;

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
           left = hsi_model_type( rgb_model_type( yuv_model_type( right ) ) ).container();
          }
        };

   }
 }

#endif
