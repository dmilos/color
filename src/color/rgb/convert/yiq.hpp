#ifndef color_rgb_convert_yiq
#define color_rgb_convert_yiq

#include "../../_internal/convert.hpp"
#include "../../yiq/yiq.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateRGB
     {

      template< typename category_left_name, typename category_right_name, typename float_name = double >
       struct convert_yiq2rgb
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
             static float_type b11 = 1, b12 =  0.9562948323208939905, b13 =  0.6210251254447287141;
             static float_type b21 = 1, b22 = -0.2721214740839773195, b23 = -0.6473809535176157222;
             static float_type b31 = 1, b32 = -1.106989908567128216,  b33 =   1.704614975498829329;

             float_type r = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             float_type g = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             float_type b = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( b11 * r + b12 * g + b13 * b ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( b21 * r + b22 * g + b23 * b ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( b31 * r + b32 * g + b33 * b ) );
            }
        };

     }

     template< > struct convert<::color::category::rgb_uint8,::color::category::yiq_uint8  > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint8,::color::category::yiq_uint8  >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::yiq_uint16 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint8,::color::category::yiq_uint16 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::yiq_uint32 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint8,::color::category::yiq_uint32 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::yiq_uint64 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint8,::color::category::yiq_uint64 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::yiq_float  > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint8,::color::category::yiq_float  >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::yiq_double > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint8,::color::category::yiq_double >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::yiq_ldouble> : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint8,::color::category::yiq_ldouble>{};

     template< > struct convert<::color::category::rgb_uint16,::color::category::yiq_uint8  > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint16,::color::category::yiq_uint8  >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::yiq_uint16 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint16,::color::category::yiq_uint16 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::yiq_uint32 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint16,::color::category::yiq_uint32 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::yiq_uint64 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint16,::color::category::yiq_uint64 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::yiq_float  > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint16,::color::category::yiq_float  >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::yiq_double > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint16,::color::category::yiq_double >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::yiq_ldouble> : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint16,::color::category::yiq_ldouble>{};

     template< > struct convert<::color::category::rgb_uint32,::color::category::yiq_uint8  > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint32,::color::category::yiq_uint8  >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::yiq_uint16 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint32,::color::category::yiq_uint16 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::yiq_uint32 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint32,::color::category::yiq_uint32 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::yiq_uint64 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint32,::color::category::yiq_uint64 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::yiq_float  > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint32,::color::category::yiq_float  >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::yiq_double > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint32,::color::category::yiq_double >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::yiq_ldouble> : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint32,::color::category::yiq_ldouble>{};

     template< > struct convert<::color::category::rgb_uint64,::color::category::yiq_uint8  > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint64,::color::category::yiq_uint8  >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::yiq_uint16 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint64,::color::category::yiq_uint16 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::yiq_uint32 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint64,::color::category::yiq_uint32 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::yiq_uint64 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint64,::color::category::yiq_uint64 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::yiq_float  > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint64,::color::category::yiq_float  >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::yiq_double > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint64,::color::category::yiq_double >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::yiq_ldouble> : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_uint64,::color::category::yiq_ldouble>{};

     template< > struct convert<::color::category::rgb_float,::color::category::yiq_uint8  > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_float,::color::category::yiq_uint8  >{};
     template< > struct convert<::color::category::rgb_float,::color::category::yiq_uint16 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_float,::color::category::yiq_uint16 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::yiq_uint32 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_float,::color::category::yiq_uint32 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::yiq_uint64 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_float,::color::category::yiq_uint64 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::yiq_float  > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_float,::color::category::yiq_float  >{};
     template< > struct convert<::color::category::rgb_float,::color::category::yiq_double > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_float,::color::category::yiq_double >{};
     template< > struct convert<::color::category::rgb_float,::color::category::yiq_ldouble> : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_float,::color::category::yiq_ldouble>{};

     template< > struct convert<::color::category::rgb_double,::color::category::yiq_uint8  > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_double,::color::category::yiq_uint8  >{};
     template< > struct convert<::color::category::rgb_double,::color::category::yiq_uint16 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_double,::color::category::yiq_uint16 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::yiq_uint32 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_double,::color::category::yiq_uint32 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::yiq_uint64 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_double,::color::category::yiq_uint64 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::yiq_float  > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_double,::color::category::yiq_float  >{};
     template< > struct convert<::color::category::rgb_double,::color::category::yiq_double > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_double,::color::category::yiq_double >{};
     template< > struct convert<::color::category::rgb_double,::color::category::yiq_ldouble> : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_double,::color::category::yiq_ldouble>{};

     template< > struct convert<::color::category::rgb_ldouble,::color::category::yiq_uint8  > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_ldouble,::color::category::yiq_uint8  >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::yiq_uint16 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_ldouble,::color::category::yiq_uint16 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::yiq_uint32 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_ldouble,::color::category::yiq_uint32 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::yiq_uint64 > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_ldouble,::color::category::yiq_uint64 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::yiq_float  > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_ldouble,::color::category::yiq_float  >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::yiq_double > : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_ldouble,::color::category::yiq_double >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::yiq_ldouble> : public ::color::_internal::_privateRGB::convert_yiq2rgb<::color::category::rgb_ldouble,::color::category::yiq_ldouble>{};


   }
 }

#endif
