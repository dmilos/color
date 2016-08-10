#ifndef color_YCbCr_convert_YPbPr
#define color_YCbCr_convert_YPbPr

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../YPbPr/YPbPr.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename YCbCr_tag_name
      ,typename YPbPr_tag_name, ::color::constant::YPbPr::reference_enum YPbPr_reference_number
     >
     struct convert
      <
        ::color::category::YCbCr< YCbCr_tag_name >
       ,::color::category::YPbPr< YPbPr_tag_name, YPbPr_reference_number >
      >
      {
       public:
         typedef ::color::category::YCbCr< YCbCr_tag_name > YCbCr_category_type, category_left_type;
         typedef ::color::category::YPbPr< YPbPr_tag_name, YPbPr_reference_number >    YPbPr_category_type, category_right_type;

         typedef typename ::color::akin::rgb< YPbPr_category_type >::akin_type  rgb_category_type;

         typedef ::color::model< YCbCr_category_type > YCbCr_model_type;
         typedef ::color::model< YPbPr_category_type >  YPbPr_model_type;

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
           left = YCbCr_model_type( rgb_model_type( YPbPr_model_type( right ) ) ).container();
          }
        };

   }
 }

#endif
