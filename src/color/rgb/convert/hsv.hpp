#ifndef color_rgb_convert_hsv
#define color_rgb_convert_hsv

#include "../../_internal/convert.hpp"
#include "../../hsv/hsv.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateRGB
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_hsv2rgb
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

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             scalar_type h = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             scalar_type s = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             scalar_type v = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             int region  = int( 6 * h );
             scalar_type f = h * 6 - region ;
             scalar_type p = v * (1 - s);
             scalar_type q = v * (1 - f * s);
             scalar_type t = v * (1 - (1 - f) * s);

             scalar_type r;
             scalar_type g;
             scalar_type b;

             switch( region  % 6 )
              {
               case 0: r = v, g = t, b = p; break;
               case 1: r = q, g = v, b = p; break;
               case 2: r = p, g = v, b = t; break;
               case 3: r = p, g = q, b = v; break;
               case 4: r = t, g = p, b = v; break;
               case 5: r = v, g = p, b = q; break;
              }

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( r ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( g ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( b ) );
            }
        };

     }

     template< > struct convert<::color::category::rgb_uint8,::color::category::hsv_uint8  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint8,::color::category::hsv_uint8  >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint8,::color::category::hsv_uint16 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint8,::color::category::hsv_uint32 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint8,::color::category::hsv_uint64 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::hsv_float  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint8,::color::category::hsv_float  >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint8,::color::category::hsv_double >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint8,::color::category::hsv_ldouble>{};

     template< > struct convert<::color::category::rgb_uint16,::color::category::hsv_uint8  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint16,::color::category::hsv_uint8  >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint16,::color::category::hsv_uint16 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint16,::color::category::hsv_uint32 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint16,::color::category::hsv_uint64 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::hsv_float  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint16,::color::category::hsv_float  >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint16,::color::category::hsv_double >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint16,::color::category::hsv_ldouble>{};

     template< > struct convert<::color::category::rgb_uint24,::color::category::hsv_uint8  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint24,::color::category::hsv_uint8  >{};
     template< > struct convert<::color::category::rgb_uint24,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint24,::color::category::hsv_uint16 >{};
     template< > struct convert<::color::category::rgb_uint24,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint24,::color::category::hsv_uint32 >{};
     template< > struct convert<::color::category::rgb_uint24,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint24,::color::category::hsv_uint64 >{};
     template< > struct convert<::color::category::rgb_uint24,::color::category::hsv_float  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint24,::color::category::hsv_float  >{};
     template< > struct convert<::color::category::rgb_uint24,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint24,::color::category::hsv_double >{};
     template< > struct convert<::color::category::rgb_uint24,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint24,::color::category::hsv_ldouble>{};

     template< > struct convert<::color::category::rgb_uint32,::color::category::hsv_uint8  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint32,::color::category::hsv_uint8  >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint32,::color::category::hsv_uint16 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint32,::color::category::hsv_uint32 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint32,::color::category::hsv_uint64 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::hsv_float  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint32,::color::category::hsv_float  >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint32,::color::category::hsv_double >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint32,::color::category::hsv_ldouble>{};

     template< > struct convert<::color::category::rgb_uint64,::color::category::hsv_uint8  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint64,::color::category::hsv_uint8  >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint64,::color::category::hsv_uint16 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint64,::color::category::hsv_uint32 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint64,::color::category::hsv_uint64 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::hsv_float  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint64,::color::category::hsv_float  >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint64,::color::category::hsv_double >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_uint64,::color::category::hsv_ldouble>{};

     template< > struct convert<::color::category::rgb_float,::color::category::hsv_uint8  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_float,::color::category::hsv_uint8  >{};
     template< > struct convert<::color::category::rgb_float,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_float,::color::category::hsv_uint16 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_float,::color::category::hsv_uint32 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_float,::color::category::hsv_uint64 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::hsv_float  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_float,::color::category::hsv_float  >{};
     template< > struct convert<::color::category::rgb_float,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_float,::color::category::hsv_double >{};
     template< > struct convert<::color::category::rgb_float,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_float,::color::category::hsv_ldouble>{};

     template< > struct convert<::color::category::rgb_double,::color::category::hsv_uint8  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_double,::color::category::hsv_uint8  >{};
     template< > struct convert<::color::category::rgb_double,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_double,::color::category::hsv_uint16 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_double,::color::category::hsv_uint32 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_double,::color::category::hsv_uint64 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::hsv_float  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_double,::color::category::hsv_float  >{};
     template< > struct convert<::color::category::rgb_double,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_double,::color::category::hsv_double >{};
     template< > struct convert<::color::category::rgb_double,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_double,::color::category::hsv_ldouble>{};

     template< > struct convert<::color::category::rgb_ldouble,::color::category::hsv_uint8  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_ldouble,::color::category::hsv_uint8  >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::hsv_uint16 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_ldouble,::color::category::hsv_uint16 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::hsv_uint32 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_ldouble,::color::category::hsv_uint32 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::hsv_uint64 > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_ldouble,::color::category::hsv_uint64 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::hsv_float  > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_ldouble,::color::category::hsv_float  >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::hsv_double > : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_ldouble,::color::category::hsv_double >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::hsv_ldouble> : public ::color::_internal::_privateRGB::convert_hsv2rgb<::color::category::rgb_ldouble,::color::category::hsv_ldouble>{};


   }
 }

#endif
