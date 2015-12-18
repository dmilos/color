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

           typedef ::color::_internal::container<category_left_type>     container_left_trait_type;
           typedef ::color::_internal::container<category_right_type>    container_right_trait_type;

           typedef ::color::_internal::reformat< category_left_type, category_right_type, float_name >    reformat_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             // TODO
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