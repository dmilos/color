#ifndef color_rgb_convert_yuv
#define color_rgb_convert_yuv

#include "../../_internal/convert.hpp"
#include "../../yuv/yuv.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateRGB
     {

      template< typename category_left_name, typename category_right_name, typename float_name = double >
       struct convert_yuv2rgb
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;
           typedef float_name  float_type;

           typedef ::color::_internal::container<category_left_type>     container_left_trait_type;
           typedef ::color::_internal::container<category_right_type>    container_right_trait_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           typedef ::color::_internal::diverse< category_left_type, float_type >    diverse_type;
           typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             static float_type Wr = 0.299000;
             static float_type Wb = 0.114000;
             static float_type Wg = 1.0-Wr-Wb;
             static float_type Umax = 0.436;
             static float_type Vmax = 0.615;

             float_type y = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             float_type u = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             float_type v = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             float_type r = y + v*( (1-Wr)/Vmax );
             float_type g = y- u*( Wb*(1-Wb)/Umax/Wg ) - v*( Wr*(1-Wr)/Vmax/Wg );  
             float_type b = y+ u*( (1-Wb)/Umax );  

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