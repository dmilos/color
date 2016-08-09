#ifndef color_yuv_convert_YCbCr
#define color_yuv_convert_YCbCr

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../YCbCr/YCbCr.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename yuv_tag_name, ::color::constant::yuv::reference_enum yuv_reference_number
      ,typename YCbCr_tag_name 
     >
     struct convert
      <
        ::color::category::yuv<  yuv_tag_name, yuv_reference_number >
       ,::color::category::YCbCr<  YCbCr_tag_name >
      >
      {
       public:
         typedef ::color::category::yuv< yuv_tag_name, yuv_reference_number >    yuv_category_type, category_left_type;
         typedef ::color::category::YCbCr< YCbCr_tag_name >    YCbCr_category_type, category_right_type;

         typedef typename ::color::akin::rgb< YCbCr_category_type >::akin_type  rgb_category_type;

         typedef ::color::model< yuv_category_type >  yuv_model_type;
         typedef ::color::model< YCbCr_category_type >  YCbCr_model_type;

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
           left = yuv_model_type( rgb_model_type( YCbCr_model_type( right ) ) ).container();
          }
        };

   }
 }

#endif
