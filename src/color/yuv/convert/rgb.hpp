#ifndef color_yuv_convert_rgb
#define color_yuv_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/category.hpp"
#include "../../rgb/trait/container.hpp"

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
         typename yuv_tag_name, ::color::constant::yuv::reference_enum yuv_reference_number
        ,typename rgb_tag_name
      >
     struct convert
      <
        ::color::category::yuv<   yuv_tag_name, yuv_reference_number >
       ,::color::category::rgb<   rgb_tag_name >
      >
      {
       public:
         typedef ::color::category::yuv<   yuv_tag_name, yuv_reference_number > category_left_type;
         typedef ::color::category::rgb<   rgb_tag_name > category_right_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         typedef ::color::constant::yuv::parameter< yuv_tag_name, yuv_reference_number >  yuv_parameter_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           enum
            {
              red_p   = ::color::place::_internal::red<category_right_type>::position_enum
             ,green_p = ::color::place::_internal::green<category_right_type>::position_enum
             ,blue_p  = ::color::place::_internal::blue<category_right_type>::position_enum
            };

           static scalar_type const Wr   = yuv_parameter_type::Wr();
           static scalar_type const Wb   = yuv_parameter_type::Wb();
           static scalar_type const Wg   = yuv_parameter_type::Wg();
           static scalar_type const Umax = yuv_parameter_type::Umax();
           static scalar_type const Vmax = yuv_parameter_type::Vmax();

           scalar_type r = normalize_type::template process<red_p  >( container_right_trait_type::template get<red_p  >( right ) );
           scalar_type g = normalize_type::template process<green_p>( container_right_trait_type::template get<green_p>( right ) );
           scalar_type b = normalize_type::template process<blue_p >( container_right_trait_type::template get<blue_p >( right ) );

           scalar_type y = Wr * r + Wg * g + Wb * b;
           //scalar_type u = Umax * ( b - y )/( 1- Wb );
           //scalar_type v = Vmax * ( r - y )/( 1- Wr );
           scalar_type u = ( (b - y) / (1 - Wb) + scalar_type(1) ) / scalar_type(2);
           scalar_type v = ( (r - y) / (1 - Wr) + scalar_type(1) ) / scalar_type(2);

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( y ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( u ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( v ) );
          }
      };

   }
 }

#endif
