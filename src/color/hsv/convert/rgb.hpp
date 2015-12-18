#ifndef color_hsv_convert_rgb
#define color_hsv_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/rgb.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateHSV
     {

      template< typename category_left_name, typename category_right_name, typename float_name = double >
       struct convert_rgb2hsv
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
             // TODO
            }
        };

     }

     template< > struct convert<::color::category::hsv_uint8,::color::category::rgb_uint8  > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint8,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::hsv_uint8,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint8,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::hsv_uint8,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint8,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::hsv_uint8,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint8,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::hsv_uint8,::color::category::rgb_float  > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint8,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::hsv_uint8,::color::category::rgb_double > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint8,::color::category::rgb_double >{};
     template< > struct convert<::color::category::hsv_uint8,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint8,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::hsv_uint16,::color::category::rgb_uint8  > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint16,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::hsv_uint16,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint16,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::hsv_uint16,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint16,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::hsv_uint16,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint16,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::hsv_uint16,::color::category::rgb_float  > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint16,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::hsv_uint16,::color::category::rgb_double > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint16,::color::category::rgb_double >{};
     template< > struct convert<::color::category::hsv_uint16,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint16,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::hsv_uint32,::color::category::rgb_uint8  > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint32,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::hsv_uint32,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint32,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::hsv_uint32,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint32,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::hsv_uint32,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint32,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::hsv_uint32,::color::category::rgb_float  > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint32,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::hsv_uint32,::color::category::rgb_double > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint32,::color::category::rgb_double >{};
     template< > struct convert<::color::category::hsv_uint32,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint32,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::hsv_uint64,::color::category::rgb_uint8  > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint64,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::hsv_uint64,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint64,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::hsv_uint64,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint64,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::hsv_uint64,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint64,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::hsv_uint64,::color::category::rgb_float  > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint64,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::hsv_uint64,::color::category::rgb_double > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint64,::color::category::rgb_double >{};
     template< > struct convert<::color::category::hsv_uint64,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_uint64,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::hsv_float,::color::category::rgb_uint8  > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_float,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::hsv_float,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_float,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::hsv_float,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_float,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::hsv_float,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_float,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::hsv_float,::color::category::rgb_float  > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_float,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::hsv_float,::color::category::rgb_double > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_float,::color::category::rgb_double >{};
     template< > struct convert<::color::category::hsv_float,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_float,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::hsv_double,::color::category::rgb_uint8  > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_double,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::hsv_double,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_double,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::hsv_double,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_double,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::hsv_double,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_double,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::hsv_double,::color::category::rgb_float  > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_double,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::hsv_double,::color::category::rgb_double > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_double,::color::category::rgb_double >{};
     template< > struct convert<::color::category::hsv_double,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_double,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::hsv_ldouble,::color::category::rgb_uint8  > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_ldouble,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::hsv_ldouble,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_ldouble,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::hsv_ldouble,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_ldouble,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::hsv_ldouble,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_ldouble,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::hsv_ldouble,::color::category::rgb_float  > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_ldouble,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::hsv_ldouble,::color::category::rgb_double > : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_ldouble,::color::category::rgb_double >{};
     template< > struct convert<::color::category::hsv_ldouble,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSV::convert_rgb2hsv<::color::category::hsv_ldouble,::color::category::rgb_ldouble>{};


   }
 }

#endif
