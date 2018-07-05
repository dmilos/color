#ifndef color_yiq_convert_lab
#define color_yiq_convert_lab

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../lab/lab.hpp"
#include "../../xyz/xyz.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename  yiq_tag_name
      ,typename  lab_tag_name, ::color::constant::lab::reference_enum lab_reference_number
     >
     struct convert
      <
        ::color::category::yiq< yiq_tag_name >
       ,::color::category::lab< lab_tag_name, lab_reference_number >
      >
      {
       public:
         typedef ::color::category::yiq< yiq_tag_name >    yiq_category_type, category_left_type;
         typedef ::color::category::lab< lab_tag_name, lab_reference_number >    lab_category_type, category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef ::color::model< yiq_category_type > yiq_model_type;
         typedef ::color::model< lab_category_type >  lab_model_type;

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
           left = yiq_model_type( rgb_model_type( xyz_model_type( lab_model_type( right ) ) ) ).container();
          }
      };

   }
 }

#endif
