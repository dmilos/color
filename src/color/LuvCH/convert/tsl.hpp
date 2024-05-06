#ifndef color_LuvCH_convert_tsl
#define color_LuvCH_convert_tsl

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../tsl/tsl.hpp"
#include "../../rgb/rgb.hpp"
#include "../../luv/luv.hpp"
#include "../../xyz/xyz.hpp"



namespace color
 {
  namespace _internal
   {

    template
     <
       typename LuvCH_tag_name
      ,typename tsl_tag_name
     >
     struct convert
      <
        ::color::category::LuvCH< LuvCH_tag_name >
       ,::color::category::tsl<  tsl_tag_name >
      >
      {
       public:
         typedef ::color::category::LuvCH< LuvCH_tag_name > LuvCH_category_type, category_left_type;
         typedef ::color::category::tsl< tsl_tag_name >    tsl_category_type, category_right_type;

         typedef typename ::color::trait::scalar< LuvCH_category_type >::instance_type scalar_type;

         typedef ::color::model<   tsl_category_type >      tsl_model_type;
         typedef ::color::model<   LuvCH_category_type >      LuvCH_model_type;

         typedef ::color::luv< scalar_type >  luv_model_type;
         typedef ::color::xyz< scalar_type >  xyz_model_type;
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
           left = LuvCH_model_type( luv_model_type( xyz_model_type( rgb_model_type( tsl_model_type( right ) ) ) ) ).container();
          }
      };

   }
 }

#endif
