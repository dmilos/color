#ifndef color_xyy_convert_gray
#define color_xyy_convert_gray

#include "../category.hpp"

#include "../../_internal/convert.hpp"



#include "../../gray/gray.hpp"
#include "../../xyz/xyz.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename xyy_tag_name
      ,typename gray_tag_name
     >
     struct convert
      <
        ::color::category::xyy< xyy_tag_name >
       ,::color::category::gray<  gray_tag_name >
      >
      {
       public:
         typedef ::color::category::xyy< xyy_tag_name >    xyy_category_type, category_left_type;
         typedef ::color::category::gray< gray_tag_name >    gray_category_type, category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef ::color::model< xyy_category_type > xyy_model_type;
         typedef ::color::model< gray_category_type >  gray_model_type;

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
           left = xyy_model_type( xyz_model_type( gray_model_type( right ) ) ).container();
          }
        };

   }
 }

#endif
