#ifndef color_yiq_convert_yuv
#define color_yiq_convert_yuv

#include "../../_internal/convert.hpp"

#include "../../generic/constant.hpp"

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

         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::model< yiq_category_type > yiq_model_type;
         typedef ::color::model< yuv_category_type >  yuv_model_type;

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

         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef ::color::yiq< scalar_type >                                         yiq_scalar_type;
         typedef ::color::yuv< scalar_type,  ::color::constant::yuv::BT_601_entity>  yuv_scalar_type;

         typedef typename yiq_scalar_type::category_type    yiq_scalar_category_type;
         typedef typename yuv_scalar_type::category_type    yuv_scalar_category_type;

         typedef ::color::model< yiq_category_type > yiq_model_type;
         typedef ::color::model< yuv_category_type >  yuv_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::trait::component<category_left_type>     component_left_trait_type;
         typedef ::color::trait::component<category_right_type>    component_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::reformat< category_left_type, yiq_scalar_category_type >    reformat_yiq_type;
         typedef ::color::_internal::reformat< yuv_scalar_category_type, category_right_type >    reformat_yuv_type;

         typedef ::color::constant::generic< category_left_type > constant_type;

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
           static scalar_type sin_33 = sin( 33 * constant_type::deg2rad() );
           static scalar_type cos_33 = cos( 33 * constant_type::deg2rad() );

           scalar_type y = reformat_yuv_type::template process<0,0>( container_right_trait_type::template get<0>( right ) );
           scalar_type u = reformat_yuv_type::template process<1,1>( container_right_trait_type::template get<1>( right ) );
           scalar_type v = reformat_yuv_type::template process<2,2>( container_right_trait_type::template get<2>( right ) );

           y = y;
           scalar_type i =  - u * sin_33  +  v * cos_33;
           scalar_type q =    u * cos_33  +  v * sin_33;

           container_left_trait_type::template set<       luma_p>( left, reformat_yiq_type::template process<      luma_p,0>( y ) );
           container_left_trait_type::template set<    inphase_p>( left, reformat_yiq_type::template process<   inphase_p,1>( i ) );
           container_left_trait_type::template set< quadrature_p>( left, reformat_yiq_type::template process<quadrature_p,2>( q ) );
          }
        };

   }
 }

#endif
