#ifndef color_hwb_convert_tsl
#define color_hwb_convert_tsl

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../tsl/tsl.hpp"
#include "../../rgb/rgb.hpp"





namespace color
 {
  namespace _internal
   {

    template
     <
       typename hwb_tag_name
      ,typename tsl_tag_name 
     >
     struct convert
      <
        ::color::category::hwb<  hwb_tag_name >
       ,::color::category::tsl<  tsl_tag_name >
      >
      {
       public:
         typedef ::color::category::hwb< hwb_tag_name >    hwb_category_type, category_left_type;
         typedef ::color::category::tsl< tsl_tag_name >    tsl_category_type, category_right_type;

         typedef typename ::color::trait::scalar< hwb_category_type >::instance_type scalar_type;

         typedef ::color::model<   hwb_category_type >      hwb_model_type;
         typedef ::color::model< tsl_category_type >    tsl_model_type;

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
           left = hwb_model_type( rgb_model_type( tsl_model_type( right ) ) ).container();
          }
      };

   }
 }

#endif
