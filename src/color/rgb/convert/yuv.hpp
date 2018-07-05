#ifndef color_rgb_convert_yuv
#define color_rgb_convert_yuv

#include "../../_internal/convert.hpp"
#include "../../yuv/trait/container.hpp"
#include "../../yuv/category.hpp"
#include "../../yuv/constant.hpp"

#include "../../generic/operation/diverse.hpp"
#include "../../generic/operation/normalize.hpp"
#include "../../_internal/reformat.hpp"

#include "../place/red.hpp"
#include "../place/green.hpp"
#include "../place/blue.hpp"



namespace color
 {
  namespace _internal
   {

    template
     <
       typename rgb_tag_name
      ,typename yuv_tag_name, ::color::constant::yuv::reference_enum yuv_reference_number 
     >
     struct convert
      <
        ::color::category::rgb< rgb_tag_name >
       ,::color::category::yuv< yuv_tag_name, yuv_reference_number>
      >
      {
       public:
         typedef ::color::category::rgb< rgb_tag_name >  category_left_type;
         typedef ::color::category::yuv<yuv_tag_name, yuv_reference_number>    category_right_type;

         typedef typename ::color::trait::scalar< category_left_type >::instance_type scalar_type;


         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::constant::yuv::parameter< yuv_tag_name, yuv_reference_number > yuv_parameter_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
            red_p   = ::color::place::_internal::red<category_left_type>::position_enum
           ,green_p = ::color::place::_internal::green<category_left_type>::position_enum
           ,blue_p  = ::color::place::_internal::blue<category_left_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {

           static scalar_type const Wr   = yuv_parameter_type::Wr();
           static scalar_type const Wb   = yuv_parameter_type::Wb();
           static scalar_type const Wg   = yuv_parameter_type::Wg();
           static scalar_type const Umax = yuv_parameter_type::Umax();
           static scalar_type const Vmax = yuv_parameter_type::Vmax();

           static scalar_type const b11 = 1, b12 = 0,                          b13 =  (1 - Wr) / Vmax;
           static scalar_type const b21 = 1, b22 = - Wb*(1 - Wb) / Umax / Wg,  b23 = -Wr*(1 - Wr) / Vmax / Wg;
           static scalar_type const b31 = 1, b32 = ((1 - Wb) / Umax),          b33 = 0;

           scalar_type y = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
           scalar_type u = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
           scalar_type v = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

           u = ( u - scalar_type(0.5) ) * scalar_type(2) * Umax;
           v = ( v - scalar_type(0.5) ) * scalar_type(2) * Vmax;

           scalar_type r = y +           v * b13;
           scalar_type g = y + u * b22 + v * b23;
           scalar_type b = y + u * b32;

           container_left_trait_type::template set<red_p  >( left, diverse_type::template process<red_p  >( r ) );
           container_left_trait_type::template set<green_p>( left, diverse_type::template process<green_p>( g ) );
           container_left_trait_type::template set<blue_p >( left, diverse_type::template process<blue_p >( b ) );
          }
      };

   }
 }

#endif
