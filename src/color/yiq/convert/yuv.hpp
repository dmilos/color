#ifndef color_yiq_convert_yuv
#define color_yiq_convert_yuv

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../yuv/yuv.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename yiq_tag_name
      ,typename yuv_tag_name, ::color::constant::yuv::reference_enum reference_number
     >
     struct convert
      <
        ::color::category::yiq< yiq_tag_name >
       ,::color::category::yuv<  yuv_tag_name, reference_number >
      >
      {
       public:
         typedef ::color::category::yiq< yiq_tag_name > yiq_category_type, category_left_type;
         typedef ::color::category::yuv< yuv_tag_name, reference_number >    yuv_category_type, category_right_type;

         typedef typename ::color::akin::rgb< yuv_category_type >::akin_type  rgb_category_type;

         typedef ::color::model< yiq_category_type > yiq_model_type;
         typedef ::color::model< yuv_category_type >  yuv_model_type;

         typedef ::color::model< rgb_category_type >  rgb_model_type;

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
           left = yiq_model_type( rgb_model_type( yuv_model_type( right ) ) ).container();
          }
        };


    template
     <
       typename yiq_tag_name
      ,typename yuv_tag_name
     >
     struct convert
      <
        ::color::category::yiq< yiq_tag_name >
       ,::color::category::yuv<  yuv_tag_name, ::color::constant::yuv::BT_601_entity >
      >
      {
       public:
         typedef ::color::category::yiq< yiq_tag_name > yiq_category_type, category_left_type;
         typedef ::color::category::yuv< yuv_tag_name, ::color::constant::yuv::BT_601_entity >    yuv_category_type, category_right_type;
         typedef double scalar_type;

         typedef ::color::yiq< scalar_type >  yiq_scalar_type;
         typedef ::color::yuv< scalar_type,  ::color::constant::yuv::BT_601_entity>  yuv_scalar_type;

         typedef ::color::model< yiq_category_type > yiq_model_type;
         typedef ::color::model< yuv_category_type >  yuv_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::trait::component<category_left_type>     component_left_trait_type;
         typedef ::color::trait::component<category_right_type>    component_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         enum
          {
                  luma_p  = ::color::place::_internal::luma<category_left_type>::position_enum
           ,   inphase_p  = ::color::place::_internal::inphase<category_left_type>::position_enum
           ,quadrature_p  = ::color::place::_internal::quadrature<category_left_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           static scalar_type sin_33 = sin( 33 *( 3.14159265358979323846 / 180 ) );
           static scalar_type cos_33 = cos( 33 *( 3.14159265358979323846 / 180 ) );

           yuv_scalar_type yuv{ yuv_model_type( right ) };

           scalar_type y = yuv.template get<0>();
           scalar_type u = yuv.template get<1>();
           scalar_type v = yuv.template get<2>();

           y = y;
           scalar_type i =  - u * sin_33  +  v * cos_33;
           scalar_type q =    u * cos_33  +  v * sin_33;

           left = yiq_model_type{ yiq_scalar_type( { y, i, q } ) }.container();
          }
        };

   }
 }

#endif
