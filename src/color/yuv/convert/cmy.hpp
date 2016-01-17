#ifndef color_yuv_convert_cmy
#define color_yuv_convert_cmy

#include "../../_internal/convert.hpp"
#include "../../cmy/category.hpp"
#include "../../cmy/trait/container.hpp"

#include "../category.hpp"
#include "../constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateYUV
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_cmy2yuv
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;
           typedef scalar_name  scalar_type;

           typedef ::color::trait::container<category_left_type>     container_left_trait_type;
           typedef ::color::trait::container<category_right_type>    container_right_trait_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           typedef ::color::_internal::diverse< category_left_type >    diverse_type;
           typedef ::color::_internal::normalize< category_right_type > normalize_type;

           typedef ::color::constant::yuv< category_left_name >  yuv_const_type;

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

             scalar_type r = scalar_type(1) - normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             scalar_type g = scalar_type(1) - normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             scalar_type b = scalar_type(1) - normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             scalar_type y = Wr * r + Wg * g + Wb * b;
             //scalar_type u = Umax * ( b - y )/( 1- Wb );
             //scalar_type v = Vmax * ( r - y )/( 1- Wr );
             scalar_type u = ( (b - y) / (1 - Wb) + scalar_type(1) ) / scalar_type(2);
             scalar_type v = ( (r - y) / (1 - Wr) + scalar_type(1) ) / scalar_type(2);

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( y ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( u ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( v ) );
            }
        };

     }

     template< > struct convert<::color::category::yuv_uint8,::color::category::cmy_uint8  > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint8,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::cmy_uint16 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint8,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::cmy_uint32 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint8,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::cmy_uint64 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint8,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::cmy_float  > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint8,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::cmy_double > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint8,::color::category::cmy_double >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::cmy_ldouble> : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint8,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::yuv_uint16,::color::category::cmy_uint8  > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint16,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::cmy_uint16 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint16,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::cmy_uint32 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint16,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::cmy_uint64 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint16,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::cmy_float  > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint16,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::cmy_double > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint16,::color::category::cmy_double >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::cmy_ldouble> : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint16,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::yuv_uint32,::color::category::cmy_uint8  > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint32,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::cmy_uint16 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint32,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::cmy_uint32 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint32,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::cmy_uint64 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint32,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::cmy_float  > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint32,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::cmy_double > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint32,::color::category::cmy_double >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::cmy_ldouble> : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint32,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::yuv_uint64,::color::category::cmy_uint8  > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint64,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::cmy_uint16 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint64,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::cmy_uint32 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint64,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::cmy_uint64 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint64,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::cmy_float  > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint64,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::cmy_double > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint64,::color::category::cmy_double >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::cmy_ldouble> : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_uint64,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::yuv_float,::color::category::cmy_uint8  > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_float,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::yuv_float,::color::category::cmy_uint16 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_float,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::yuv_float,::color::category::cmy_uint32 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_float,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::yuv_float,::color::category::cmy_uint64 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_float,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::yuv_float,::color::category::cmy_float  > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_float,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::yuv_float,::color::category::cmy_double > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_float,::color::category::cmy_double >{};
     template< > struct convert<::color::category::yuv_float,::color::category::cmy_ldouble> : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_float,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::yuv_double,::color::category::cmy_uint8  > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_double,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::yuv_double,::color::category::cmy_uint16 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_double,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::yuv_double,::color::category::cmy_uint32 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_double,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::yuv_double,::color::category::cmy_uint64 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_double,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::yuv_double,::color::category::cmy_float  > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_double,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::yuv_double,::color::category::cmy_double > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_double,::color::category::cmy_double >{};
     template< > struct convert<::color::category::yuv_double,::color::category::cmy_ldouble> : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_double,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::yuv_ldouble,::color::category::cmy_uint8  > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_ldouble,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::cmy_uint16 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_ldouble,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::cmy_uint32 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_ldouble,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::cmy_uint64 > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_ldouble,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::cmy_float  > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_ldouble,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::cmy_double > : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_ldouble,::color::category::cmy_double >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::cmy_ldouble> : public ::color::_internal::_privateYUV::convert_cmy2yuv<::color::category::yuv_ldouble,::color::category::cmy_ldouble>{};


   }
 }

#endif