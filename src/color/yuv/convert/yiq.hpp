#ifndef color_yuv_convert_yiq
#define color_yuv_convert_yiq

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../yiq/yiq.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename yuv_tag_name, ::color::constant::yuv::reference_enum yuv_reference_number
      ,typename yiq_tag_name
     >
     struct convert
      <
        ::color::category::yuv< yuv_tag_name, yuv_reference_number >
       ,::color::category::yiq<  yiq_tag_name >
      >
      {
       public:
         typedef ::color::category::yuv< yuv_tag_name, yuv_reference_number >    yuv_category_type, category_left_type;
         typedef ::color::category::yiq< yiq_tag_name >    yiq_category_type, category_right_type;

         typedef typename ::color::akin::rgb< yiq_category_type >::akin_type  rgb_category_type;

         typedef ::color::model< yuv_category_type > yuv_model_type;
         typedef ::color::model< yiq_category_type >  yiq_model_type;

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
           left = yuv_model_type( rgb_model_type( yiq_model_type( right ) ) ).container();
          }
        };

    template
     < 
       typename yuv_tag_name
      ,typename yiq_tag_name 
     >
     struct convert
      <
        ::color::category::yuv< yuv_tag_name, ::color::constant::yuv::BT_601_entity >
       ,::color::category::yiq<  yiq_tag_name >
      >
      {
       public:
         typedef ::color::category::yuv< yuv_tag_name, ::color::constant::yuv::BT_601_entity >    yuv_category_type, category_left_type;
         typedef ::color::category::yiq< yiq_tag_name >    yiq_category_type, category_right_type;
         typedef double  scalar_type;

         typedef ::color::yuv< scalar_type,  ::color::constant::yuv::BT_601_entity>  yuv_scalar_type;
         typedef ::color::yiq< scalar_type > yiq_scalar_type;

         typedef ::color::model< yuv_category_type >  yuv_model_type;
         typedef ::color::model< yiq_category_type > yiq_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::trait::component<category_left_type>     component_left_trait_type;
         typedef ::color::trait::component<category_right_type>    component_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         enum
          {
                  luma_p  = ::color::place::_internal::luma<category_right_type>::position_enum
           ,   inphase_p  = ::color::place::_internal::inphase<category_right_type>::position_enum
           ,quadrature_p  = ::color::place::_internal::quadrature<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           static scalar_type sin_33 = sin( 33 *( 3.14159265358979323846 / 180 ) );
           static scalar_type cos_33 = cos( 33 *( 3.14159265358979323846 / 180 ) );

           yiq_scalar_type yiq{ yiq_model_type( right ) };

           scalar_type y = yiq.template get<0>();
           scalar_type i = yiq.template get<1>();
           scalar_type q = yiq.template get<2>();

           y = y;
           scalar_type u =  - i * sin_33  +  q * cos_33;
           scalar_type v =    i * cos_33  +  q * sin_33;

           left = yuv_model_type{ yuv_scalar_type( { y, u,v } ) }.container();
          }
        };

   }
 }

#endif
