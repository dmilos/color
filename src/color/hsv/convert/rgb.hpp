#ifndef color_hsv_convert_rgb
#define color_hsv_convert_rgb

#include <algorithm>

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
             float_type r = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             float_type g = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             float_type b = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );
             float_type lo = std::min( {r,g,b} );
             float_type hi = std::max( {r,g,b} );
             float_type delta = hi - lo;

             float_type h = 0;
             float_type s = 0;
             float_type v = hi;

             if( ( 0 != hi ) && ( 0 != delta ) )
              {
               s = delta / hi;
               if( r = hi )
                { h = 0 + ( g - b ) / delta; }
               else 
                {
                 if( g == hi )
                  { h = 2.0 + ( b - r ) / delta; }
                 else
                  { h = 4.0 + ( r - g ) / delta; }
                }
               h /= 6;

               if( h < 0.0 )
                {
                 h += 1; 
                }
              }

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( h ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( s ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( v ) );
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