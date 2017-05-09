#ifndef color_lab_convert_xyy
#define color_lab_convert_xyy

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../xyy/xyy.hpp"
#include "../../xyz/xyz.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename lab_tag_name
      ,typename xyy_tag_name
     >
     struct convert
      <
        ::color::category::lab< lab_tag_name >
       ,::color::category::xyy<  xyy_tag_name >
      >
      {
       public:
         typedef ::color::category::lab< lab_tag_name >    lab_category_type, category_left_type;
         typedef ::color::category::xyy< xyy_tag_name >    xyy_category_type, category_right_type;

         typedef typename ::color::akin::xyz< xyy_category_type >::akin_type  xyz_category_type;

         typedef ::color::model< lab_category_type > lab_model_type;
         typedef ::color::model< xyy_category_type >  xyy_model_type;

         typedef ::color::model< xyz_category_type >  xyz_model_type;

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
           left = lab_model_type( xyz_model_type( xyy_model_type( right ) ) ).container();
          }
        };

   }
 }

#endif
