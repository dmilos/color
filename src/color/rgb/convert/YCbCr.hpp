#ifndef color_rgb_convert_YCbCr
#define color_rgb_convert_YCbCr

#include "../../_internal/convert.hpp"
#include "../../YCbCr/trait/container.hpp"
#include "../../YCbCr/category.hpp"
#include "../../YCbCr/constant.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

#include "../place/red.hpp"
#include "../place/green.hpp"
#include "../place/blue.hpp"



namespace color
 {
  namespace _internal
   {

    template< typename rgb_tag_name, typename YCbCr_tag_name >
     struct convert
      <
        ::color::category::rgb< rgb_tag_name >
       ,::color::category::YCbCr< YCbCr_tag_name>
      >
      {
       public:
         typedef ::color::category::rgb< rgb_tag_name >  category_left_type;
         typedef ::color::category::YCbCr<YCbCr_tag_name>    category_right_type;
         typedef double  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::constant::YCbCr< category_right_type > YCbCr_const_type;

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
           scalar_type Y  = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
           scalar_type Cb = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
           scalar_type Cr = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

           Cb = YCbCr_const_type::Cb_diverse( Cb );
           Cr = YCbCr_const_type::Cr_diverse( Cr );

           scalar_type r = Y + Cr;
           scalar_type g = Y - (YCbCr_const_type::Kby()/YCbCr_const_type::Kgy() ) * Cb - (YCbCr_const_type::Kry()/YCbCr_const_type::Kgy() ) * Cr;
           scalar_type b = Y + Cb;

           container_left_trait_type::template set<red_p  >( left, diverse_type::template process<red_p  >( r ) );
           container_left_trait_type::template set<green_p>( left, diverse_type::template process<green_p>( g ) );
           container_left_trait_type::template set<blue_p >( left, diverse_type::template process<blue_p >( b ) );
          }
      };

   }
 }

#endif