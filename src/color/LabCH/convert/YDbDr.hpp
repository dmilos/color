#ifndef color_LabCH_convert_YDbDr
#define color_LabCH_convert_YDbDr

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../YDbDr/YDbDr.hpp"
#include "../../rgb/rgb.hpp"
#include "../../lab/lab.hpp"
#include "../../xyz/xyz.hpp"



namespace color
 {
  namespace _internal
   {

    template
     <
       typename LabCH_tag_name
      ,typename YDbDr_tag_name
     >
     struct convert
      <
        ::color::category::LabCH< LabCH_tag_name >
       ,::color::category::YDbDr<  YDbDr_tag_name >
      >
      {
       public:
         typedef ::color::category::LabCH< LabCH_tag_name > LabCH_category_type, category_left_type;
         typedef ::color::category::YDbDr< YDbDr_tag_name >    YDbDr_category_type, category_right_type;

         typedef typename ::color::trait::scalar< LabCH_category_type >::instance_type scalar_type;

         typedef ::color::model<   YDbDr_category_type >      YDbDr_model_type;
         typedef ::color::model<   LabCH_category_type >      LabCH_model_type;

         typedef ::color::lab< scalar_type >  lab_model_type;
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
           left = LabCH_model_type( lab_model_type( xyz_model_type( rgb_model_type( YDbDr_model_type( right ) ) ) ) ).container();
          }
      };

   }
 }

#endif
