#ifndef color_rgb_convert_xyz
#define color_rgb_convert_xyz

#include "../../_internal/convert.hpp"

#include "../../xyz/trait/container.hpp"
#include "../../xyz/category.hpp"
#include "../../xyz/constant.hpp"
#include "../../xyz/place/place.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename rgb_tag_name, typename xyz_tag_name >
     struct convert
      <
        ::color::category::rgb< rgb_tag_name >
       ,::color::category::xyz<xyz_tag_name>
      >
      {
       public:
         typedef ::color::category::rgb< rgb_tag_name > category_left_type;
         typedef ::color::category::xyz<xyz_tag_name> category_right_type;

         typedef typename ::color::trait::scalar< category_left_type >::instance_type scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::constant::xyz::transformation::matrix< scalar_type > xyz_matrix_type;
         typedef ::color::constant::xyz::space::gamma< scalar_type, ::color::constant::xyz::space::sRGB_entity > xyz_gamma_type;
         typedef ::color::constant::xyz::adaptation::matrix< scalar_type > xyz_adaptation_type;

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
           static const scalar_type i11 = xyz_matrix_type::i11(), i12 = xyz_matrix_type::i12(), i13 = xyz_matrix_type::i13();
           static const scalar_type i21 = xyz_matrix_type::i21(), i22 = xyz_matrix_type::i22(), i23 = xyz_matrix_type::i23();
           static const scalar_type i31 = xyz_matrix_type::i31(), i32 = xyz_matrix_type::i32(), i33 = xyz_matrix_type::i33();

           scalar_type x = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
           scalar_type y = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
           scalar_type z = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

           //  TODO xyz_adaptation_type::encode( r, g, b );

           scalar_type r = i11 * x + i12 * y + i13 * z;
           scalar_type g = i21 * x + i22 * y + i23 * z;
           scalar_type b = i31 * x + i32 * y + i33 * z;

           r = xyz_gamma_type::encode( r );
           g = xyz_gamma_type::encode( g );
           b = xyz_gamma_type::encode( b );

           container_left_trait_type::template set<red_p  >( left, diverse_type::template process<red_p  >( r ) );
           container_left_trait_type::template set<green_p>( left, diverse_type::template process<green_p>( g ) );
           container_left_trait_type::template set<blue_p >( left, diverse_type::template process<blue_p >( b ) );
          }
      };

   }
 }

#endif