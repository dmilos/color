#ifndef color_xyz_convert_LabCH
#define color_xyz_convert_LabCH

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../LabCH/LabCH.hpp"
#include "../../luv/luv.hpp"
#include "../../xyz/xyz.hpp"



namespace color
 {
  namespace _internal
   {

    template
     <
       typename xyz_tag_name
      ,typename LabCH_tag_name
     >
     struct convert
      <
        ::color::category::xyz< xyz_tag_name >
       ,::color::category::LabCH<  LabCH_tag_name >
      >
      {
       public:
         typedef ::color::category::xyz< xyz_tag_name >          xyz_category_type,  category_left_type;
         typedef ::color::category::LabCH< LabCH_tag_name >    LabCH_category_type, category_right_type;

         typedef typename ::color::trait::scalar< xyz_category_type >::instance_type scalar_type;

         typedef ::color::model<   LabCH_category_type >      LabCH_model_type;
         typedef ::color::model<   xyz_category_type >          xyz_model_type;

         typedef ::color::lab< scalar_type >  lab_model_type;

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
           left = xyz_model_type( lab_model_type( LabCH_model_type( right ) ) ).container();
          }
      };

   }
 }

#endif
