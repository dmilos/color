#ifndef color_hsl_convert_luv
#define color_hsl_convert_luv

#include "../category.hpp"

#include "../../_internal/convert.hpp"



#include "../../luv/luv.hpp"
#include "../../xyz/xyz.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename  hsl_tag_name
      ,typename  luv_tag_name
     >
     struct convert
      <
        ::color::category::hsl< hsl_tag_name >
       ,::color::category::luv< luv_tag_name >
      >
      {
       public:
         typedef ::color::category::hsl< hsl_tag_name >    hsl_category_type, category_left_type;
         typedef ::color::category::luv< luv_tag_name >    luv_category_type, category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef ::color::model< hsl_category_type > hsl_model_type;
         typedef ::color::model< luv_category_type >  luv_model_type;

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
           left = hsl_model_type( rgb_model_type( xyz_model_type( luv_model_type( right ) ) ) ).container();
          }
      };

   }
 }

#endif
