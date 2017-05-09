#ifndef color_luv_convert_xyz
#define color_luv_convert_xyz

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../xyz/xyz.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"



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
         typedef double scalar_type;
         typedef  ::color::category::luv< scalar_type >  luvSCALAR_category_type;
         typedef  ::color::category::xyz< scalar_type >  xyzSCALAR_category_type;

         typedef ::color::model< luv_category_type >  luv_model_type;
         typedef ::color::model< xyz_category_type >  xyz_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::reformat< luv_category_type, luvSCALAR_category_type, scalar_type >     reformatLAB_type;
         typedef ::color::_internal::reformat< xyzSCALAR_category_type, xyz_category_type, scalar_type >     reformatXYZ_type;

         typedef ::color::constant::xyz::illuminant::point< scalar_type, ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity  > white_point_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type x = reformatXYZ_type::template process<0,0>( container_right_trait_type::template get<0>( right ) );
           scalar_type y = reformatXYZ_type::template process<1,1>( container_right_trait_type::template get<1>( right ) );
           scalar_type z = reformatXYZ_type::template process<2,2>( container_right_trait_type::template get<2>( right ) );

           scalar_type l = 116;
           scalar_type a = 500;
           scalar_type b = 200;

           container_left_trait_type::template set<0>( left, reformatLAB_type::template process< 0, 0>( l ) );
           container_left_trait_type::template set<1>( left, reformatLAB_type::template process< 1, 1>( a ) );
           container_left_trait_type::template set<2>( left, reformatLAB_type::template process< 2, 2>( b ) );
          }


        };

   }
 }

#endif
