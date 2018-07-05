#ifndef color_yuv_convert_yiq
#define color_yuv_convert_yiq

#include "../../_internal/convert.hpp"
#include "../../_internal/reformat.hpp"

#include "../../generic/constant.hpp"


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

         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef ::color::model< yuv_category_type > yuv_model_type;
         typedef ::color::model< yiq_category_type >  yiq_model_type;

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
         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::yuv< scalar_type,  ::color::constant::yuv::BT_601_entity>  yuv_scalar_type;
         typedef ::color::yiq< scalar_type >                                         yiq_scalar_type;

         typedef typename yuv_scalar_type::category_type    yuv_scalar_category_type;
         typedef typename yiq_scalar_type::category_type    yiq_scalar_category_type;

         typedef ::color::model< yuv_category_type >  yuv_model_type;
         typedef ::color::model< yiq_category_type > yiq_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::trait::component<category_left_type>     component_left_trait_type;
         typedef ::color::trait::component<category_right_type>    component_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::reformat< category_left_type, yuv_scalar_category_type >    reformat_yuv_type;
         typedef ::color::_internal::reformat< yiq_scalar_category_type, category_right_type >    reformat_yiq_type;

         typedef ::color::constant::generic< category_left_type > constant_type;

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
           static scalar_type sin_33 = sin( 33 * constant_type::deg2rad() );
           static scalar_type cos_33 = cos( 33 * constant_type::deg2rad() );

           scalar_type y = reformat_yiq_type::template process<0,      luma_p>( container_right_trait_type::template get<      luma_p>( right ) );
           scalar_type i = reformat_yiq_type::template process<1,   inphase_p>( container_right_trait_type::template get<   inphase_p>( right ) );
           scalar_type q = reformat_yiq_type::template process<2,quadrature_p>( container_right_trait_type::template get<quadrature_p>( right ) );

           y = y;
           scalar_type u =  - i * sin_33  +  q * cos_33;
           scalar_type v =    i * cos_33  +  q * sin_33;

           container_left_trait_type::template set<0>( left, reformat_yuv_type::template process<0,0>( y ) );
           container_left_trait_type::template set<1>( left, reformat_yuv_type::template process<1,1>( u ) );
           container_left_trait_type::template set<2>( left, reformat_yuv_type::template process<2,2>( v ) );
          }
        };

   }
 }

#endif
