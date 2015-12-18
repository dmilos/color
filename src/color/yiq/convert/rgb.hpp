#ifndef color_yiq_convert_rgb
#define color_yiq_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/rgb.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateYIQ
     {

      template< typename category_left_name, typename category_right_name, typename float_name = double >
       struct convert_rgb2yiq
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
            { // TODO. I hope that is enought exact
             static float_type b11 = 0.2990000000000000000, b12 =  0.5870000000000000000, b13 =  0.1140000000000000000;
             static float_type b21 = 0.5957161349127745527, b22 = -0.2744528378392564636, b23 = -0.3212632970735180890;
             static float_type b31 = 0.2114564021201178664, b32 = -0.5225910452916111683, b33 =  0.3111346431714933019;

             float_type r = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             float_type g = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             float_type b = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( b11 * r + b12 * g + b13 * b ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( b21 * r + b22 * g + b23 * b ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( b31 * r + b32 * g + b33 * b ) );
            }
        };

     }

     template< > struct convert<::color::category::yiq_uint8,::color::category::rgb_uint8  > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint8,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::rgb_uint16 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint8,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::rgb_uint32 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint8,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::rgb_uint64 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint8,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::rgb_float  > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint8,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::rgb_double > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint8,::color::category::rgb_double >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::rgb_ldouble> : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint8,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::yiq_uint16,::color::category::rgb_uint8  > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint16,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::rgb_uint16 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint16,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::rgb_uint32 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint16,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::rgb_uint64 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint16,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::rgb_float  > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint16,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::rgb_double > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint16,::color::category::rgb_double >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::rgb_ldouble> : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint16,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::yiq_uint32,::color::category::rgb_uint8  > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint32,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::rgb_uint16 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint32,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::rgb_uint32 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint32,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::rgb_uint64 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint32,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::rgb_float  > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint32,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::rgb_double > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint32,::color::category::rgb_double >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::rgb_ldouble> : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint32,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::yiq_uint64,::color::category::rgb_uint8  > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint64,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::rgb_uint16 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint64,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::rgb_uint32 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint64,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::rgb_uint64 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint64,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::rgb_float  > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint64,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::rgb_double > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint64,::color::category::rgb_double >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::rgb_ldouble> : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_uint64,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::yiq_float,::color::category::rgb_uint8  > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_float,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::yiq_float,::color::category::rgb_uint16 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_float,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::yiq_float,::color::category::rgb_uint32 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_float,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::yiq_float,::color::category::rgb_uint64 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_float,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::yiq_float,::color::category::rgb_float  > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_float,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::yiq_float,::color::category::rgb_double > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_float,::color::category::rgb_double >{};
     template< > struct convert<::color::category::yiq_float,::color::category::rgb_ldouble> : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_float,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::yiq_double,::color::category::rgb_uint8  > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_double,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::yiq_double,::color::category::rgb_uint16 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_double,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::yiq_double,::color::category::rgb_uint32 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_double,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::yiq_double,::color::category::rgb_uint64 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_double,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::yiq_double,::color::category::rgb_float  > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_double,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::yiq_double,::color::category::rgb_double > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_double,::color::category::rgb_double >{};
     template< > struct convert<::color::category::yiq_double,::color::category::rgb_ldouble> : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_double,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::yiq_ldouble,::color::category::rgb_uint8  > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_ldouble,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::rgb_uint16 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_ldouble,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::rgb_uint32 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_ldouble,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::rgb_uint64 > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_ldouble,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::rgb_float  > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_ldouble,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::rgb_double > : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_ldouble,::color::category::rgb_double >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::rgb_ldouble> : public ::color::_internal::_privateYIQ::convert_rgb2yiq<::color::category::yiq_ldouble,::color::category::rgb_ldouble>{};


   }
 }

#endif
