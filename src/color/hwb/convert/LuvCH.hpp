#ifndef color_hwb_convert_LuvCH
#define color_hwb_convert_LuvCH

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../LuvCH/LuvCH.hpp"
#include "../../rgb/rgb.hpp"
#include "../../lab/lab.hpp"
#include "../../xyz/xyz.hpp"



namespace color
 {
  namespace _internal
   {

    template
     <
       typename hwb_tag_name
      ,typename LuvCH_tag_name
     >
     struct convert
      <
        ::color::category::hwb< hwb_tag_name >
       ,::color::category::LuvCH<  LuvCH_tag_name >
      >
      {
       public:
         typedef ::color::category::hwb< hwb_tag_name >          hwb_category_type,  category_left_type;
         typedef ::color::category::LuvCH< LuvCH_tag_name >    LuvCH_category_type, category_right_type;

         typedef typename ::color::trait::scalar< hwb_category_type >::instance_type scalar_type;

         typedef ::color::model<   LuvCH_category_type >      LuvCH_model_type;
         typedef ::color::model<   hwb_category_type >          hwb_model_type;

         typedef ::color::luv< scalar_type >  luv_model_type;
         typedef ::color::xyz< scalar_type >  xyz_model_type;
         typedef ::color::rgb< scalar_type >  rgb_model_type;
         typedef ::color::hsv< scalar_type >  hsv_model_type;

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
           left = hwb_model_type( hsv_model_type( rgb_model_type( xyz_model_type( luv_model_type( LuvCH_model_type( right ) ) ) ) ) ).container();
          }
      };

   }
 }

#endif
