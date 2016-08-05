#ifndef color_YCgCo_convert_hsl
#define color_YCgCo_convert_hsl

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../hsl/hsl.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename YCgCo_tag_name, typename hsl_tag_name >
     struct convert
      <
        ::color::category::YCgCo<  YCgCo_tag_name >
       ,::color::category::hsl<  hsl_tag_name >
      >
      {
       public:
         typedef ::color::category::YCgCo< YCgCo_tag_name >    YCgCo_category_type, category_left_type;
         typedef ::color::category::hsl< hsl_tag_name >    hsl_category_type, category_right_type;

         typedef typename ::color::akin::rgb< hsl_category_type >::akin_type  rgb_category_type;

         typedef ::color::model< YCgCo_category_type >  YCgCo_model_type;
         typedef ::color::model< hsl_category_type >  hsl_model_type;

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
           left = YCgCo_model_type( rgb_model_type( hsl_model_type( right ) ) ).container();
          }
        };

   }
 }

#endif
