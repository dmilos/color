#ifndef color_xyz_convert_rgb
#define color_xyz_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/trait/container.hpp"
#include "../../rgb/category.hpp"
#include "../../rgb/place/place.hpp"

#include "../place/place.hpp"
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
       typename xyz_tag_name
      ,typename rgb_tag_name
     >
     struct convert
      <
        ::color::category::xyz<   xyz_tag_name >
       ,::color::category::rgb<   rgb_tag_name >
      >
      {
       public:
         typedef ::color::category::xyz<   xyz_tag_name > category_left_type;
         typedef ::color::category::rgb<   rgb_tag_name > category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::constant::xyz::transformation::matrix< scalar_type > xyz_matrix_type;
         typedef ::color::constant::xyz::space::gamma< scalar_type, ::color::constant::xyz::space::sRGB_entity > xyz_gamma_type;
         typedef ::color::constant::xyz::adaptation::matrix< scalar_type > xyz_adaptation_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
            red_p   = ::color::place::_internal::red<category_right_type>::position_enum
           ,green_p = ::color::place::_internal::green<category_right_type>::position_enum
           ,blue_p  = ::color::place::_internal::blue<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           static const scalar_type b11 = xyz_matrix_type::M11(), b12 = xyz_matrix_type::M12(), b13 = xyz_matrix_type::M13();
           static const scalar_type b21 = xyz_matrix_type::M21(), b22 = xyz_matrix_type::M22(), b23 = xyz_matrix_type::M23();
           static const scalar_type b31 = xyz_matrix_type::M31(), b32 = xyz_matrix_type::M32(), b33 = xyz_matrix_type::M33();

           scalar_type r = normalize_type::template process<red_p  >( container_right_trait_type::template get<red_p  >( right ) );
           scalar_type g = normalize_type::template process<green_p>( container_right_trait_type::template get<green_p>( right ) );
           scalar_type b = normalize_type::template process<blue_p >( container_right_trait_type::template get<blue_p >( right ) );

           r = xyz_gamma_type::decode( r );
           g = xyz_gamma_type::decode( g );
           b = xyz_gamma_type::decode( b );

           scalar_type x = b11 * r + b12 * g + b13 * b;
           scalar_type y = b21 * r + b22 * g + b23 * b;
           scalar_type z = b31 * r + b32 * g + b33 * b;

           // TODO xyz_adaptation_type::decode( x, y, z );

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( x ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( y ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( z ) );
          }
      };

   }
 }

#endif
