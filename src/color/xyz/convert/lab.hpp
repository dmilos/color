#ifndef color_xyz_convert_lab
#define color_xyz_convert_lab

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../lab/lab.hpp"
#include "../../rgb/rgb.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename xyz_tag_name, typename lab_tag_name >
     struct convert
      <
        ::color::category::xyz< xyz_tag_name >
       ,::color::category::lab<  lab_tag_name >
      >
      {
       public:
         typedef ::color::category::xyz< xyz_tag_name >    xyz_category_type, category_left_type;
         typedef ::color::category::lab< lab_tag_name >    lab_category_type, category_right_type;
         typedef double scalar_type;
         typedef  ::color::category::xyz< scalar_type >  xyzSCALAR_category_type;
         typedef  ::color::category::lab< scalar_type >  labSCALAR_category_type;

         typedef ::color::model< xyz_category_type >  xyz_model_type;
         typedef ::color::model< lab_category_type >  lab_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::reformat< labSCALAR_category_type, lab_category_type, scalar_type >     reformatLAB_type;
         typedef ::color::_internal::reformat< xyz_category_type, xyzSCALAR_category_type, scalar_type >     reformatXYZ_type;

         typedef ::color::constant::xyz::illuminant::point< scalar_type, ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity  > white_point_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           static const scalar_type  epsilon = scalar_type(216)/scalar_type(24389);
           static const scalar_type  k = scalar_type(24389)/scalar_type(27);

           scalar_type l = reformatLAB_type::template process< 0, 0>( container_right_trait_type::template get<0>( right ) );
           scalar_type a = reformatLAB_type::template process< 1, 1>( container_right_trait_type::template get<1>( right ) );
           scalar_type b = reformatLAB_type::template process< 2, 2>( container_right_trait_type::template get<2>( right ) );

           scalar_type fy = (l +16)/116;
           scalar_type fz = fy - b/200;
           scalar_type fx = a/500 + fy;

           scalar_type fx3 = fx * fx * fx;
           scalar_type fy3 = fy * fy * fy;
           scalar_type fz3 = fz * fz * fz;

           scalar_type x = fx3;
           scalar_type y = fy3;
           scalar_type z = fz3;

           if( z < epsilon      ) { z = ( 116*fz-16)/k; }
           if( l  < epsilon * k ) { y = l/k; }
           if( x < epsilon      ) { x = ( 116*fx-16)/k; }

           x *= scalar_type( 100 ) * white_point_type::X();
           y *= scalar_type( 100 ) * white_point_type::Y();
           z *= scalar_type( 100 ) * white_point_type::Z();

           container_left_trait_type::template set<0>( left, reformatXYZ_type::template process< 0, 0 >( x ) );
           container_left_trait_type::template set<1>( left, reformatXYZ_type::template process< 1, 1 >( y ) );
           container_left_trait_type::template set<2>( left, reformatXYZ_type::template process< 2, 2 >( z ) );
          }
        };

   }
 }

#endif
