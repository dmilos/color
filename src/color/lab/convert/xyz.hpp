#ifndef color_lab_convert_xyz
#define color_lab_convert_xyz

#include "../../_internal/convert.hpp"

#include "../category.hpp"
#include "../place/place.hpp"


#include "../../xyz/xyz.hpp"


#include "../../_internal/reformat.hpp"


namespace color
 {
  namespace _internal
   {

    template
     <
       typename lab_tag_name
      ,typename xyz_tag_name
     >
     struct convert
      <
        ::color::category::lab<  lab_tag_name, ::color::constant::lab::CIE_entity >
       ,::color::category::xyz<  xyz_tag_name >
      >
      {
       public:
         typedef ::color::category::lab< lab_tag_name, ::color::constant::lab::CIE_entity >    lab_category_type, category_left_type;
         typedef ::color::category::xyz< xyz_tag_name >    xyz_category_type, category_right_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;
         typedef  ::color::category::lab< scalar_type, ::color::constant::lab::CIE_entity >  labSCALAR_category_type;
         typedef  ::color::category::xyz< scalar_type >  xyzSCALAR_category_type;

         typedef ::color::model< lab_category_type >  lab_model_type;
         typedef ::color::model< xyz_category_type >  xyz_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::reformat< lab_category_type, labSCALAR_category_type >     reformatLAB_type;
         typedef ::color::_internal::reformat< xyzSCALAR_category_type, xyz_category_type >     reformatXYZ_type;

         typedef ::color::constant::xyz::illuminant::point< scalar_type, ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity  > white_point_type;

         enum
          {
            lightness_p       = ::color::place::_internal::lightness<category_left_type>::position_enum
          };

         static scalar_type f( scalar_type const& t )
          {
           static const scalar_type epsilon = scalar_type(216)/scalar_type(24389);
           static const scalar_type k = scalar_type(24389)/scalar_type(27);
           if(  t > epsilon  )
            {
             return  cbrt( t );
            }

           return ( k*t + scalar_type(16) )/scalar_type(116);
          }

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type x = reformatXYZ_type::template process<0,0>( container_right_trait_type::template get<0>( right ) );
           scalar_type y = reformatXYZ_type::template process<1,1>( container_right_trait_type::template get<1>( right ) );
           scalar_type z = reformatXYZ_type::template process<2,2>( container_right_trait_type::template get<2>( right ) );

           x /= scalar_type( 100 ) * white_point_type::X();
           y /= scalar_type( 100 ) * white_point_type::Y();
           z /= scalar_type( 100 ) * white_point_type::Z();

           scalar_type fx = f( x );
           scalar_type fy = f( y );
           scalar_type fz = f( z );

           scalar_type l = scalar_type(116) * fy -  scalar_type(16);   //[ 0, 100 ]
           scalar_type a = scalar_type(500) *( fx - fy );  //[ -431.03448275862064, 431.03448275862064 ]
           scalar_type b = scalar_type(200) *( fy - fz );  //[ -172.41379310344826, 172.41379310344826 ]

           container_left_trait_type::template set<0>( left, reformatLAB_type::template process< 0, 0>( l ) );
           container_left_trait_type::template set<1>( left, reformatLAB_type::template process< 1, 1>( a ) );
           container_left_trait_type::template set<2>( left, reformatLAB_type::template process< 2, 2>( b ) );
          }

        };

    template
     <
       typename lab_tag_name
      ,typename xyz_tag_name
     >
     struct convert
      <
        ::color::category::lab<  lab_tag_name, ::color::constant::lab::Hunter_entity >
       ,::color::category::xyz<  xyz_tag_name >
      >
      {
       public:
         typedef ::color::category::lab< lab_tag_name, ::color::constant::lab::Hunter_entity >    lab_category_type, category_left_type;
         typedef ::color::category::xyz< xyz_tag_name >    xyz_category_type, category_right_type;

         typedef typename ::color::trait::scalar<category_left_type> scalar_trait_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef  ::color::category::lab< scalar_type, ::color::constant::lab::Hunter_entity >  labSCALAR_category_type;
         typedef  ::color::category::xyz< scalar_type >  xyzSCALAR_category_type;

         typedef ::color::model< lab_category_type >  lab_model_type;
         typedef ::color::model< xyz_category_type >  xyz_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::reformat< lab_category_type, labSCALAR_category_type >     reformatLAB_type;
         typedef ::color::_internal::reformat< xyzSCALAR_category_type, xyz_category_type >     reformatXYZ_type;

         typedef ::color::constant::xyz::illuminant::point< scalar_type, ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity  > white_point_type;

         enum
          {
            lightness_p       = ::color::place::_internal::lightness<category_left_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           static scalar_type X = scalar_type( 100 ) * white_point_type::X();
           static scalar_type Y = scalar_type( 100 ) * white_point_type::Y();
           static scalar_type Z = scalar_type( 100 ) * white_point_type::Z();

           static scalar_type Ka = scalar_type(175.0/198.04) * ( X + Y );
           static scalar_type Kb = scalar_type( 70.0/218.11) * ( Y + Z );

           scalar_type x = reformatXYZ_type::template process<0,0>( container_right_trait_type::template get<0>( right ) );
           scalar_type y = reformatXYZ_type::template process<1,1>( container_right_trait_type::template get<1>( right ) );
           scalar_type z = reformatXYZ_type::template process<2,2>( container_right_trait_type::template get<2>( right ) );

           scalar_type l = sqrt( y / Y );
           scalar_type a = scalar_type( 0 );
           scalar_type b = scalar_type( 0 );

           if( false == scalar_trait_type::is_small( l ) )
            {
             a = Ka * ( x/X - y / Y )/ l;
             b = Kb * ( y/Y - z / Z )/ l;
             l *= scalar_type( 100 );
            }

           container_left_trait_type::template set<0>( left, reformatLAB_type::template process< 0, 0>( l ) );
           container_left_trait_type::template set<1>( left, reformatLAB_type::template process< 1, 1>( a ) );
           container_left_trait_type::template set<2>( left, reformatLAB_type::template process< 2, 2>( b ) );
          }

        };

   }
 }

#endif
