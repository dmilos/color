#ifndef color_xyz_convert_luv
#define color_xyz_convert_luv

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../luv/luv.hpp"
#include "../../rgb/rgb.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename xyz_tag_name, typename luv_tag_name >
     struct convert
      <
        ::color::category::xyz< xyz_tag_name >
       ,::color::category::luv<  luv_tag_name >
      >
      {
       public:
         typedef ::color::category::xyz< xyz_tag_name >    xyz_category_type, category_left_type;
         typedef ::color::category::luv< luv_tag_name >    luv_category_type, category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef ::color::category::xyz< scalar_type >  xyzSCALAR_category_type;
         typedef ::color::category::luv< scalar_type >  luvSCALAR_category_type;

         typedef ::color::model< xyz_category_type >  xyz_model_type;
         typedef ::color::model< luv_category_type >  luv_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::reformat< luvSCALAR_category_type, luv_category_type >     reformatLUV_type;
         typedef ::color::_internal::reformat< xyz_category_type, xyzSCALAR_category_type >     reformatXYZ_type;

         typedef ::color::constant::xyz::illuminant::point< scalar_type, ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity  > white_point_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           static const scalar_type  epsilon = scalar_type(216)/scalar_type(24389);
           static const scalar_type  k = scalar_type(24389)/scalar_type(27);
           // TODO static const scalar_type   = k  * epsilon;

           static scalar_type u0 = scalar_type(4)* white_point_type::X()/( white_point_type::X() +  scalar_type(15)*white_point_type::Y() + scalar_type(3)*white_point_type::Z() );
           static scalar_type v0 = scalar_type(9)* white_point_type::Y()/( white_point_type::X() +  scalar_type(15)*white_point_type::Y() + scalar_type(3)*white_point_type::Z() );

           scalar_type l = reformatLUV_type::template process< 0, 0>( container_right_trait_type::template get<0>( right ) );
           scalar_type u = reformatLUV_type::template process< 1, 1>( container_right_trait_type::template get<1>( right ) );
           scalar_type v = reformatLUV_type::template process< 2, 2>( container_right_trait_type::template get<2>( right ) );

           scalar_type y;

           if( k * epsilon < l )
            {
             y = (l+scalar_type(16))/scalar_type(116); y *= y*y;
            }
           else
           {
            y = l/k;
           }
           y *= white_point_type::Y()* scalar_type( 100 );

           scalar_type a = (scalar_type(52)*l/(u+13*l*u0) - scalar_type(1) )/scalar_type(3);
           scalar_type b = -scalar_type(5)*y;
           scalar_type c = -scalar_type(1)/scalar_type(3);
           scalar_type d = y*( scalar_type(39)*l/( v+scalar_type(13)*l*v0) - scalar_type(5) );

           scalar_type x = ( d-b)/(a-c);
           scalar_type z = a*x+b;

           container_left_trait_type::template set<0>( left, reformatXYZ_type::template process< 0, 0 >( x ) );
           container_left_trait_type::template set<1>( left, reformatXYZ_type::template process< 1, 1 >( y ) );
           container_left_trait_type::template set<2>( left, reformatXYZ_type::template process< 2, 2 >( z ) );
          }
        };

   }
 }

#endif
