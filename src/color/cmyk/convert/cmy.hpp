#ifndef color_cmyk_convert_cmy
#define color_cmyk_convert_cmy

#include "../../_internal/convert.hpp"
#include "../../cmy/cmy.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateCMYK
     {

      template< typename category_left_name, typename category_right_name, typename float_name = double >
       struct convert_cmy2cmyk
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
             float_type cc = 1 - normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             float_type cm = 1 - normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             float_type cy = 1 - normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             float_type k = 1 - max( cc, cm, cy );
             float_type c;
             float_type m;
             float_type y;

             if( 0 != k )
              {
               c = (1-cc-k) / (1-k);
               m = (1-cm-k) / (1-k);
               y = (1-cy-k) / (1-k);
              }
             else
              {
               c = 0;
               m = 0;
               y = 0;
              }

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( c ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( m ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( y ) );
             container_left_trait_type::template set<3>( left, diverse_type::template process<3>( k ) );
            }
        };

     }

     template< > struct convert<::color::category::cmyk_uint8,::color::category::cmy_uint8  > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint8,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::cmyk_uint8,::color::category::cmy_uint16 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint8,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::cmyk_uint8,::color::category::cmy_uint32 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint8,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::cmyk_uint8,::color::category::cmy_uint64 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint8,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::cmyk_uint8,::color::category::cmy_float  > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint8,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::cmyk_uint8,::color::category::cmy_double > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint8,::color::category::cmy_double >{};
     template< > struct convert<::color::category::cmyk_uint8,::color::category::cmy_ldouble> : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint8,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::cmyk_uint16,::color::category::cmy_uint8  > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint16,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::cmyk_uint16,::color::category::cmy_uint16 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint16,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::cmyk_uint16,::color::category::cmy_uint32 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint16,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::cmyk_uint16,::color::category::cmy_uint64 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint16,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::cmyk_uint16,::color::category::cmy_float  > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint16,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::cmyk_uint16,::color::category::cmy_double > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint16,::color::category::cmy_double >{};
     template< > struct convert<::color::category::cmyk_uint16,::color::category::cmy_ldouble> : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint16,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::cmyk_uint32,::color::category::cmy_uint8  > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint32,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::cmyk_uint32,::color::category::cmy_uint16 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint32,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::cmyk_uint32,::color::category::cmy_uint32 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint32,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::cmyk_uint32,::color::category::cmy_uint64 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint32,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::cmyk_uint32,::color::category::cmy_float  > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint32,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::cmyk_uint32,::color::category::cmy_double > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint32,::color::category::cmy_double >{};
     template< > struct convert<::color::category::cmyk_uint32,::color::category::cmy_ldouble> : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint32,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::cmyk_uint64,::color::category::cmy_uint8  > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint64,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::cmyk_uint64,::color::category::cmy_uint16 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint64,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::cmyk_uint64,::color::category::cmy_uint32 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint64,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::cmyk_uint64,::color::category::cmy_uint64 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint64,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::cmyk_uint64,::color::category::cmy_float  > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint64,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::cmyk_uint64,::color::category::cmy_double > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint64,::color::category::cmy_double >{};
     template< > struct convert<::color::category::cmyk_uint64,::color::category::cmy_ldouble> : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_uint64,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::cmyk_float,::color::category::cmy_uint8  > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_float,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::cmyk_float,::color::category::cmy_uint16 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_float,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::cmyk_float,::color::category::cmy_uint32 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_float,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::cmyk_float,::color::category::cmy_uint64 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_float,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::cmyk_float,::color::category::cmy_float  > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_float,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::cmyk_float,::color::category::cmy_double > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_float,::color::category::cmy_double >{};
     template< > struct convert<::color::category::cmyk_float,::color::category::cmy_ldouble> : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_float,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::cmyk_double,::color::category::cmy_uint8  > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_double,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::cmyk_double,::color::category::cmy_uint16 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_double,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::cmyk_double,::color::category::cmy_uint32 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_double,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::cmyk_double,::color::category::cmy_uint64 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_double,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::cmyk_double,::color::category::cmy_float  > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_double,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::cmyk_double,::color::category::cmy_double > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_double,::color::category::cmy_double >{};
     template< > struct convert<::color::category::cmyk_double,::color::category::cmy_ldouble> : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_double,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::cmyk_ldouble,::color::category::cmy_uint8  > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_ldouble,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::cmyk_ldouble,::color::category::cmy_uint16 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_ldouble,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::cmyk_ldouble,::color::category::cmy_uint32 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_ldouble,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::cmyk_ldouble,::color::category::cmy_uint64 > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_ldouble,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::cmyk_ldouble,::color::category::cmy_float  > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_ldouble,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::cmyk_ldouble,::color::category::cmy_double > : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_ldouble,::color::category::cmy_double >{};
     template< > struct convert<::color::category::cmyk_ldouble,::color::category::cmy_ldouble> : public ::color::_internal::_privateCMYK::convert_cmy2cmyk<::color::category::cmyk_ldouble,::color::category::cmy_ldouble>{};


   }
 }

#endif