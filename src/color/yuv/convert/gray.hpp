#ifndef color_yuv_convert_gray
#define color_yuv_convert_gray

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateYUV
     {

      template< typename category_left_name, typename category_right_name, typename float_name = double >
       struct convert_gray2yuv
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;
           typedef float_name  float_type;

           typedef ::color::_internal::bound<category_left_type>         bound_left_trait_type;
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
             float_type g = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( g ) );
             container_left_trait_type::template set<1>( left, bound_left_trait_type::template minimum<1>() );
             container_left_trait_type::template set<2>( left, bound_left_trait_type::template minimum<2>() );
            }
        };
     }

     template< > struct convert<::color::category::yuv_uint8,::color::category::gray_uint8  > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint8,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::gray_uint16 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint8,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::gray_uint32 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint8,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::gray_uint64 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint8,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::gray_float  > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint8,::color::category::gray_float  >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::gray_double > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint8,::color::category::gray_double >{};
     template< > struct convert<::color::category::yuv_uint8,::color::category::gray_ldouble> : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint8,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::yuv_uint16,::color::category::gray_uint8  > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint16,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::gray_uint16 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint16,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::gray_uint32 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint16,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::gray_uint64 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint16,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::gray_float  > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint16,::color::category::gray_float  >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::gray_double > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint16,::color::category::gray_double >{};
     template< > struct convert<::color::category::yuv_uint16,::color::category::gray_ldouble> : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint16,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::yuv_uint32,::color::category::gray_uint8  > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint32,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::gray_uint16 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint32,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::gray_uint32 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint32,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::gray_uint64 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint32,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::gray_float  > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint32,::color::category::gray_float  >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::gray_double > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint32,::color::category::gray_double >{};
     template< > struct convert<::color::category::yuv_uint32,::color::category::gray_ldouble> : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint32,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::yuv_uint64,::color::category::gray_uint8  > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint64,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::gray_uint16 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint64,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::gray_uint32 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint64,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::gray_uint64 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint64,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::gray_float  > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint64,::color::category::gray_float  >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::gray_double > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint64,::color::category::gray_double >{};
     template< > struct convert<::color::category::yuv_uint64,::color::category::gray_ldouble> : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_uint64,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::yuv_float,::color::category::gray_uint8  > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_float,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::yuv_float,::color::category::gray_uint16 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_float,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::yuv_float,::color::category::gray_uint32 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_float,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::yuv_float,::color::category::gray_uint64 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_float,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::yuv_float,::color::category::gray_float  > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_float,::color::category::gray_float  >{};
     template< > struct convert<::color::category::yuv_float,::color::category::gray_double > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_float,::color::category::gray_double >{};
     template< > struct convert<::color::category::yuv_float,::color::category::gray_ldouble> : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_float,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::yuv_double,::color::category::gray_uint8  > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_double,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::yuv_double,::color::category::gray_uint16 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_double,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::yuv_double,::color::category::gray_uint32 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_double,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::yuv_double,::color::category::gray_uint64 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_double,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::yuv_double,::color::category::gray_float  > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_double,::color::category::gray_float  >{};
     template< > struct convert<::color::category::yuv_double,::color::category::gray_double > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_double,::color::category::gray_double >{};
     template< > struct convert<::color::category::yuv_double,::color::category::gray_ldouble> : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_double,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::yuv_ldouble,::color::category::gray_uint8  > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_ldouble,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::gray_uint16 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_ldouble,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::gray_uint32 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_ldouble,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::gray_uint64 > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_ldouble,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::gray_float  > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_ldouble,::color::category::gray_float  >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::gray_double > : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_ldouble,::color::category::gray_double >{};
     template< > struct convert<::color::category::yuv_ldouble,::color::category::gray_ldouble> : public ::color::_internal::_privateYUV::convert_gray2yuv<::color::category::yuv_ldouble,::color::category::gray_ldouble>{};


   }
 }

#endif