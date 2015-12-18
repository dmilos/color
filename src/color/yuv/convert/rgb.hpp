#ifndef color_yuv_convert_rgb
#define color_yuv_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/rgb.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateYUV
     {

      template< typename category_left_name, typename category_right_name, typename float_name = double >
       struct convert_rgb2yuv
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

             float_type r = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             float_type g = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             float_type b = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             float_type y = Wr * r + Wg * g + Wb * b;
             float_type u = Umax * ( b - y )/( 1- Wb);
             float_type v = Vmax * ( r - y )/( 1- Wr);

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( y ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( u ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( v ) );
            }
        };

     }

     template< > struct convert<::color::category::yuv_uint8,::color::category::rgb_uint8  > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint8,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::rgb_uint16 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint8,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::rgb_uint32 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint8,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::rgb_uint64 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint8,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::rgb_float  > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint8,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::rgb_double > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint8,::color::category::rgb_double >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::rgb_ldouble> : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint8,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::yuv_uint16,::color::category::rgb_uint8  > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint16,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::rgb_uint16 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint16,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::rgb_uint32 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint16,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::rgb_uint64 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint16,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::rgb_float  > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint16,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::rgb_double > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint16,::color::category::rgb_double >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::rgb_ldouble> : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint16,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::yuv_uint32,::color::category::rgb_uint8  > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint32,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::rgb_uint16 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint32,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::rgb_uint32 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint32,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::rgb_uint64 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint32,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::rgb_float  > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint32,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::rgb_double > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint32,::color::category::rgb_double >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::rgb_ldouble> : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint32,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::yuv_uint64,::color::category::rgb_uint8  > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint64,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::rgb_uint16 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint64,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::rgb_uint32 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint64,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::rgb_uint64 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint64,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::rgb_float  > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint64,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::rgb_double > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint64,::color::category::rgb_double >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::rgb_ldouble> : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_uint64,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::yuv_float,::color::category::rgb_uint8  > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_float,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::yuv_float,::color::category::rgb_uint16 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_float,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::yuv_float,::color::category::rgb_uint32 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_float,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::yuv_float,::color::category::rgb_uint64 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_float,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::yuv_float,::color::category::rgb_float  > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_float,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::yuv_float,::color::category::rgb_double > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_float,::color::category::rgb_double >{};
     template< > struct convert<::color::category::yuv_float,::color::category::rgb_ldouble> : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_float,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::yuv_double,::color::category::rgb_uint8  > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_double,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::yuv_double,::color::category::rgb_uint16 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_double,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::yuv_double,::color::category::rgb_uint32 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_double,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::yuv_double,::color::category::rgb_uint64 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_double,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::yuv_double,::color::category::rgb_float  > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_double,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::yuv_double,::color::category::rgb_double > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_double,::color::category::rgb_double >{};
     template< > struct convert<::color::category::yuv_double,::color::category::rgb_ldouble> : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_double,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::yuv_ldouble,::color::category::rgb_uint8  > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_ldouble,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::rgb_uint16 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_ldouble,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::rgb_uint32 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_ldouble,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::rgb_uint64 > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_ldouble,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::rgb_float  > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_ldouble,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::rgb_double > : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_ldouble,::color::category::rgb_double >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::rgb_ldouble> : public ::color::_internal::_privateYUV::convert_rgb2yuv<::color::category::yuv_ldouble,::color::category::rgb_ldouble>{};


   }
 }

#endif
