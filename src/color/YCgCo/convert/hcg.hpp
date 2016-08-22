#ifndef color_YCgCo_convert_hcg
#define color_YCgCo_convert_hcg

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../hcg/hcg.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename YCgCo_tag_name, typename hcg_tag_name >
     struct convert
      <
        ::color::category::YCgCo<  YCgCo_tag_name >
       ,::color::category::hcg<  hcg_tag_name >
      >
      {
       public:
         typedef ::color::category::YCgCo< YCgCo_tag_name >    YCgCo_category_type, category_left_type;
         typedef ::color::category::hcg< hcg_tag_name >    hcg_category_type, category_right_type;

         typedef typename ::color::akin::rgb< hcg_category_type >::akin_type  rgb_category_type;

         typedef ::color::model< YCgCo_category_type >  YCgCo_model_type;
         typedef ::color::model< hcg_category_type >  hcg_model_type;

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
           left = YCgCo_model_type( rgb_model_type( hcg_model_type( right ) ) ).container();
          }
        };

   }
 }

#endif
