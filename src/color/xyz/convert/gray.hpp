#ifndef color_xyz_convert_gray
#define color_xyz_convert_gray

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"



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
      ,typename gray_tag_name
     >
     struct convert
      <
        ::color::category::xyz<   xyz_tag_name >
       ,::color::category::gray< gray_tag_name >
      >
      {
       public:
         typedef ::color::category::xyz<   xyz_tag_name > category_left_type;
         typedef ::color::category::gray< gray_tag_name > category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::constant::xyz::transformation::matrix< scalar_type > xyz_matrix_type;
         typedef ::color::constant::xyz::space::gamma< scalar_type, ::color::constant::xyz::space::sRGB_entity > xyz_gamma_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           static const scalar_type b2 =   xyz_matrix_type::M21() + xyz_matrix_type::M22() + xyz_matrix_type::M23();
           static const scalar_type b1 = ( xyz_matrix_type::M11() + xyz_matrix_type::M12() + xyz_matrix_type::M13() ) / b2;
           static const scalar_type b3 = ( xyz_matrix_type::M31() + xyz_matrix_type::M32() + xyz_matrix_type::M33() ) / b2;

           scalar_type g = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );

           scalar_type x = b1 * g;
           scalar_type y =      g;
           scalar_type z = b3 * g;

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( x ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( y ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( z ) );
          }
      };

   }
 }

#endif
