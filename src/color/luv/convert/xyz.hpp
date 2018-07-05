#ifndef color_luv_convert_xyz
#define color_luv_convert_xyz

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../xyz/xyz.hpp"

#include "../../_internal/reformat.hpp"

#include "../constant.hpp" 

namespace color
 {
  namespace _internal
   {

    template
     <
       typename luv_tag_name
      ,typename xyz_tag_name
     >
     struct convert
      <
        ::color::category::luv<  luv_tag_name >
       ,::color::category::xyz<  xyz_tag_name >
      >
      {
       public:
         typedef ::color::category::luv< luv_tag_name >    luv_category_type, category_left_type;
         typedef ::color::category::xyz< xyz_tag_name >    xyz_category_type, category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef  ::color::category::luv< scalar_type >  luvSCALAR_category_type;
         typedef  ::color::category::xyz< scalar_type >  xyzSCALAR_category_type;

         typedef ::color::model< luv_category_type >  luv_model_type;
         typedef ::color::model< xyz_category_type >  xyz_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::reformat< luv_category_type, luvSCALAR_category_type >     reformatLUV_type;
         typedef ::color::_internal::reformat< xyzSCALAR_category_type, xyz_category_type >     reformatXYZ_type;

         typedef ::color::constant::xyz::illuminant::point< scalar_type, ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity  > white_point_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           static scalar_type u0 = 4* white_point_type::X()/( white_point_type::X() +  15*white_point_type::Y() + 3*white_point_type::Z() );
           static scalar_type v0 = 9* white_point_type::Y()/( white_point_type::X() +  15*white_point_type::Y() + 3*white_point_type::Z() );

           scalar_type x = reformatXYZ_type::template process<0,0>( container_right_trait_type::template get<0>( right ) );
           scalar_type y = reformatXYZ_type::template process<1,1>( container_right_trait_type::template get<1>( right ) );
           scalar_type z = reformatXYZ_type::template process<2,2>( container_right_trait_type::template get<2>( right ) );

           scalar_type l;
           scalar_type u;
           scalar_type v;

           ::color::_internal::constant::luv< scalar_type >::xyz2luv( x, y, z, l, u, v );

           container_left_trait_type::template set<0>( left, reformatLUV_type::template process<0,0>( l ) );
           container_left_trait_type::template set<1>( left, reformatLUV_type::template process<1,1>( u ) );
           container_left_trait_type::template set<2>( left, reformatLUV_type::template process<2,2>( v ) );
          }

        };

   }
 }

#endif
