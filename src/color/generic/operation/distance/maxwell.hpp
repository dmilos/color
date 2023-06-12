#ifndef  color_generic_operation_distance_usher_maxwell
#define  color_generic_operation_distance_usher_maxwell

// ::color::operation::_internal::usher<category_left_name, category_right_name>::process( left, right )



#include "./constant.hpp"
#include "./usher.hpp"


 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct usher< category_name, category_name, ::color::constant::distance::maxwell_entity >
         {
          public:
            typedef category_name   category_type;
            typedef ::color::model< category_name  >  model_type;

            typedef std::is_floating_point< typename model_type::component_type >  is_float_point_type;
            static_assert( is_float_point_type::value, "Expect floating point type. float, double or long double");

            typedef typename ::color::trait::scalar< category_type >::instance_type  scalar_type;

            typedef ::color::rgb<scalar_type>  rgb_type;
            typedef std::array< scalar_type,2 >  point2d_type;

          public:
            static scalar_type process( model_type const& left, model_type const& right )
             {
              static point2d_type R{ +1.0, 0.0 };
              static point2d_type G{ -0.5, +sqrt(3.0)/2.0 };
              static point2d_type B{ -0.5, -sqrt(3.0)/2.0 };

              rgb_type  rgbL; rgbL = left;
              scalar_type rcL = rgbL.template get<0>()/( rgbL.template get<0>() + rgbL.template get<1>() + rgbL.template get<2>() );
              scalar_type gcL = rgbL.template get<1>()/( rgbL.template get<0>() + rgbL.template get<1>() + rgbL.template get<2>() );
              scalar_type bcL = rgbL.template get<2>()/( rgbL.template get<0>() + rgbL.template get<1>() + rgbL.template get<2>() );

              rgb_type  rgbR; rgbR = right;
              scalar_type rcR = rgbR.template get<0>()/( rgbR.template get<0>() + rgbR.template get<1>() + rgbR.template get<2>() );
              scalar_type gcR = rgbR.template get<1>()/( rgbR.template get<0>() + rgbR.template get<1>() + rgbR.template get<2>() );
              scalar_type bcR = rgbR.template get<2>()/( rgbR.template get<0>() + rgbR.template get<1>() + rgbR.template get<2>() );

              point2d_type xL
               {
                rcL * R[0] + gcL * G[0] + bcL * B[0],
                rcL * R[1] + gcL * G[1] + bcL * B[1]
               };

              point2d_type xR
               {
                rcR * R[0] + gcR * G[0] + bcR * B[0],
                rcR * R[1] + gcR * G[1] + bcR * B[1]
               };
              scalar_type result;

              result  = ( xL[0]-xR[0] )*( xL[0]-xR[0] );
              result += ( xL[1]-xR[1] )*( xL[1]-xR[1] );

              result = sqrt( result );
              return result;
             }
         };

      }
    }
  }

#endif
