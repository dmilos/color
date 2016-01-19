#ifndef color_rgb_convert_yuv
#define color_rgb_convert_yuv

#include "../../_internal/convert.hpp"
#include "../../yuv/trait/container.hpp"
#include "../../yuv/category.hpp"
#include "../../yuv/constant.hpp"


#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateRGB
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_yuv2rgb
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;
           typedef scalar_name  scalar_type;

           typedef ::color::trait::container<category_left_type>     container_left_trait_type;
           typedef ::color::trait::container<category_right_type>    container_right_trait_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           typedef ::color::constant::yuv< category_right_name > yuv_const_type; 

           typedef ::color::_internal::diverse< category_left_type >    diverse_type;
           typedef ::color::_internal::normalize< category_right_type > normalize_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             static scalar_type const Wr   = yuv_const_type::Wr();
             static scalar_type const Wb   = yuv_const_type::Wb();
             static scalar_type const Wg   = yuv_const_type::Wg();
             static scalar_type const Umax = yuv_const_type::Umax();
             static scalar_type const Vmax = yuv_const_type::Vmax();

             static scalar_type const b11 = 1, b12 = 0,                          b13 =  (1 - Wr) / Vmax;
             static scalar_type const b21 = 1, b22 = - Wb*(1 - Wb) / Umax / Wg,  b23 = -Wr*(1 - Wr) / Vmax / Wg;
             static scalar_type const b31 = 1, b32 = ((1 - Wb) / Umax),          b33 = 0;

             scalar_type y = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             scalar_type u = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             scalar_type v = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             u = ( u - scalar_type(0.5) ) * scalar_type(2) * Umax;
             v = ( v - scalar_type(0.5) ) * scalar_type(2) * Vmax;

             scalar_type r = y +           v * b13;
             scalar_type g = y + u * b22 + v * b23;
             scalar_type b = y + u * b32;

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( r ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( g ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( b ) );
            }
        };

     }

     template< > struct convert<::color::category::rgb_uint8,::color::category::yuv_uint8  > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint8,::color::category::yuv_uint8  >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::yuv_uint16 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint8,::color::category::yuv_uint16 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::yuv_uint32 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint8,::color::category::yuv_uint32 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::yuv_uint64 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint8,::color::category::yuv_uint64 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::yuv_float  > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint8,::color::category::yuv_float  >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::yuv_double > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint8,::color::category::yuv_double >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::yuv_ldouble> : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint8,::color::category::yuv_ldouble>{};

     template< > struct convert<::color::category::rgb_uint16,::color::category::yuv_uint8  > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint16,::color::category::yuv_uint8  >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::yuv_uint16 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint16,::color::category::yuv_uint16 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::yuv_uint32 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint16,::color::category::yuv_uint32 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::yuv_uint64 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint16,::color::category::yuv_uint64 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::yuv_float  > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint16,::color::category::yuv_float  >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::yuv_double > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint16,::color::category::yuv_double >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::yuv_ldouble> : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint16,::color::category::yuv_ldouble>{};

     template< > struct convert<::color::category::rgb_uint32,::color::category::yuv_uint8  > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint32,::color::category::yuv_uint8  >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::yuv_uint16 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint32,::color::category::yuv_uint16 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::yuv_uint32 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint32,::color::category::yuv_uint32 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::yuv_uint64 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint32,::color::category::yuv_uint64 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::yuv_float  > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint32,::color::category::yuv_float  >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::yuv_double > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint32,::color::category::yuv_double >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::yuv_ldouble> : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint32,::color::category::yuv_ldouble>{};

     template< > struct convert<::color::category::rgb_uint64,::color::category::yuv_uint8  > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint64,::color::category::yuv_uint8  >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::yuv_uint16 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint64,::color::category::yuv_uint16 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::yuv_uint32 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint64,::color::category::yuv_uint32 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::yuv_uint64 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint64,::color::category::yuv_uint64 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::yuv_float  > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint64,::color::category::yuv_float  >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::yuv_double > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint64,::color::category::yuv_double >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::yuv_ldouble> : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_uint64,::color::category::yuv_ldouble>{};

     template< > struct convert<::color::category::rgb_float,::color::category::yuv_uint8  > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_float,::color::category::yuv_uint8  >{};
     template< > struct convert<::color::category::rgb_float,::color::category::yuv_uint16 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_float,::color::category::yuv_uint16 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::yuv_uint32 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_float,::color::category::yuv_uint32 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::yuv_uint64 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_float,::color::category::yuv_uint64 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::yuv_float  > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_float,::color::category::yuv_float  >{};
     template< > struct convert<::color::category::rgb_float,::color::category::yuv_double > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_float,::color::category::yuv_double >{};
     template< > struct convert<::color::category::rgb_float,::color::category::yuv_ldouble> : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_float,::color::category::yuv_ldouble>{};

     template< > struct convert<::color::category::rgb_double,::color::category::yuv_uint8  > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_double,::color::category::yuv_uint8  >{};
     template< > struct convert<::color::category::rgb_double,::color::category::yuv_uint16 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_double,::color::category::yuv_uint16 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::yuv_uint32 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_double,::color::category::yuv_uint32 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::yuv_uint64 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_double,::color::category::yuv_uint64 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::yuv_float  > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_double,::color::category::yuv_float  >{};
     template< > struct convert<::color::category::rgb_double,::color::category::yuv_double > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_double,::color::category::yuv_double >{};
     template< > struct convert<::color::category::rgb_double,::color::category::yuv_ldouble> : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_double,::color::category::yuv_ldouble>{};

     template< > struct convert<::color::category::rgb_ldouble,::color::category::yuv_uint8  > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_ldouble,::color::category::yuv_uint8  >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::yuv_uint16 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_ldouble,::color::category::yuv_uint16 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::yuv_uint32 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_ldouble,::color::category::yuv_uint32 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::yuv_uint64 > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_ldouble,::color::category::yuv_uint64 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::yuv_float  > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_ldouble,::color::category::yuv_float  >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::yuv_double > : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_ldouble,::color::category::yuv_double >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::yuv_ldouble> : public ::color::_internal::_privateRGB::convert_yuv2rgb<::color::category::rgb_ldouble,::color::category::yuv_ldouble>{};


   }
 }

#endif