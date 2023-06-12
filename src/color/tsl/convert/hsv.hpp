#ifndef color_tsl_convert_hsv
#define color_tsl_convert_hsv

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../hsv/hsv.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename tsl_tag_name, typename hsv_tag_name >
     struct convert
      <
        ::color::category::tsl< tsl_tag_name >
       ,::color::category::hsv< hsv_tag_name >
      >
      {
       public:
         typedef ::color::category::tsl< tsl_tag_name >    tsl_category_type, category_left_type;
         typedef ::color::category::hsv< hsv_tag_name >    hsv_category_type, category_right_type;

         typedef typename ::color::trait::scalar< category_left_type >::instance_type scalar_type;

         typedef ::color::model< tsl_category_type > tsl_model_type;
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
           left = tsl_model_type( rgb_model_type( hsv_model_type( right ) ) ).container();
          }
      };

   }
 }

#endif
