#ifndef color_xyz_convert_xyy
#define color_xyz_convert_xyy

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../xyy/xyy.hpp"
#include "../../rgb/rgb.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename xyz_tag_name, typename xyy_tag_name >
     struct convert
      <
        ::color::category::xyz< xyz_tag_name >
       ,::color::category::xyy<  xyy_tag_name >
      >
      {
       public:
         typedef ::color::category::xyz< xyz_tag_name >    xyz_category_type, category_left_type;
         typedef ::color::category::xyy< xyy_tag_name >    xyy_category_type, category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef  ::color::category::xyz< scalar_type >  xyzSCALAR_category_type;
         typedef  ::color::category::xyy< scalar_type >  xyySCALAR_category_type;

         typedef ::color::model< xyz_category_type >  xyz_model_type;
         typedef ::color::model< xyy_category_type >  xyy_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::reformat< xyySCALAR_category_type, xyy_category_type >     reformatXYY_type;
         typedef ::color::_internal::reformat< xyz_category_type, xyzSCALAR_category_type >     reformatXYZ_type;

         typedef ::color::constant::xyz::illuminant::point< scalar_type, ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity  > white_point_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type small_x = reformatXYY_type::template process< 0, 0>( container_right_trait_type::template get<0>( right ) );
           scalar_type small_y = reformatXYY_type::template process< 1, 1>( container_right_trait_type::template get<1>( right ) );
           scalar_type big_y   = reformatXYY_type::template process< 2, 2>( container_right_trait_type::template get<2>( right ) );

           scalar_type x = 0;
           scalar_type y = big_y;
           scalar_type z = 0;

          if( 0 != small_y )
           {
            x = small_x * big_y / small_y;
            z =  (1 - small_x - small_y) * big_y / small_y;
           }

           container_left_trait_type::template set<0>( left, reformatXYZ_type::template process< 0, 0 >( x ) );
           container_left_trait_type::template set<1>( left, reformatXYZ_type::template process< 1, 1 >( y ) );
           container_left_trait_type::template set<2>( left, reformatXYZ_type::template process< 2, 2 >( z ) );
          }
        };

   }
 }

#endif
