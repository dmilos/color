#ifndef color_yiq_convert_xyy
#define color_yiq_convert_xyy

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../xyy/xyy.hpp"
#include "../../xyz/xyz.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename  yiq_tag_name
      ,typename  xyy_tag_name
     >
     struct convert
      <
        ::color::category::yiq< yiq_tag_name >
       ,::color::category::xyy< xyy_tag_name >
      >
      {
       public:
         typedef ::color::category::yiq< yiq_tag_name >    yiq_category_type, category_left_type;
         typedef ::color::category::xyy< xyy_tag_name >    xyy_category_type, category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef ::color::model< yiq_category_type > yiq_model_type;
         typedef ::color::model< xyy_category_type >  xyy_model_type;

         typedef ::color::rgb< scalar_type >  rgb_model_type;
         typedef ::color::xyz< scalar_type >  xyz_model_type;

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
           left = yiq_model_type( rgb_model_type( xyz_model_type( xyy_model_type( right ) ) ) ).container();
          }
      };

   }
 }

#endif
