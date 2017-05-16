#ifndef color_YDbDr_convert_lms
#define color_YDbDr_convert_lms

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../lms/lms.hpp"
#include "../../xyz/xyz.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename  YDbDr_tag_name
      ,typename  lms_tag_name
     >
     struct convert
      <
        ::color::category::YDbDr< YDbDr_tag_name >
       ,::color::category::lms< lms_tag_name >
      >
      {
       public:
         typedef ::color::category::YDbDr< YDbDr_tag_name >    YDbDr_category_type, category_left_type;
         typedef ::color::category::lms< lms_tag_name >    lms_category_type, category_right_type;

         typedef double scalar_type;

         typedef ::color::model< YDbDr_category_type > YDbDr_model_type;
         typedef ::color::model< lms_category_type >  lms_model_type;

         typedef ::color::rgb< scalar_type >  rgb_model_type;
         typedef ::color::xyz< scalar_type >  xyz_model_type;

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
           left = YDbDr_model_type( rgb_model_type( xyz_model_type( lms_model_type( right ) ) ) ).container();
          }
      };

   }
 }

#endif