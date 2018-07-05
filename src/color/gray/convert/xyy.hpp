#ifndef color_gray_convert_xyy
#define color_gray_convert_xyy

#include "../../_internal/convert.hpp"
#include "../../xyy/xyy.hpp"

#include "../category.hpp"
#include "../constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"




namespace color
 {
  namespace _internal
   {

    template
     <
       typename gray_tag_name
      ,typename xyy_tag_name
     >
     struct convert
      <
        ::color::category::gray< gray_tag_name >
       ,::color::category::xyy<   xyy_tag_name >
      >
      {
       public:
         typedef ::color::category::gray< gray_tag_name > category_left_type;
         typedef ::color::category::xyy<   xyy_tag_name > category_right_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         //typedef ::color::constant::xyy::space::gamma< scalar_type, ::color::constant::xyy::space::sRGB_entity > xyy_gamma_type;
         //typedef ::color::constant::xyy::matrix< category_left_type > xyy_matrix_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type g = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( g ) );
          }
      };

   }
 }

#endif