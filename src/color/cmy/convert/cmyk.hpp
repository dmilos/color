#ifndef color_cmy_convert_cmyk
#define color_cmy_convert_cmyk

#include "../../_internal/convert.hpp"
#include "../../cmyk/cmyk.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateCMY
     {

      template< typename category_left_name, typename category_right_name, typename float_name = double >
       struct convert_cmyk2cmy
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
             float_type cc = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             float_type cm = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             float_type cy = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );
             float_type ck = normalize_type::template process<3>( container_right_trait_type::template get<3>( right ) );

             float_type c = 1 - (1-cc) * (1-ck);
             float_type m = 1 - (1-cm) * (1-ck);
             float_type y = 1 - (1-cy) * (1-ck);

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( c ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( m ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( y ) );
            }
        };

     }

     template< > struct convert<::color::category::cmy_uint8,::color::category::cmyk_uint8  > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint8,::color::category::cmyk_uint8  >{};
     template< > struct convert<::color::category::cmy_uint8,::color::category::cmyk_uint16 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint8,::color::category::cmyk_uint16 >{};
     template< > struct convert<::color::category::cmy_uint8,::color::category::cmyk_uint32 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint8,::color::category::cmyk_uint32 >{};
     template< > struct convert<::color::category::cmy_uint8,::color::category::cmyk_uint64 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint8,::color::category::cmyk_uint64 >{};
     template< > struct convert<::color::category::cmy_uint8,::color::category::cmyk_float  > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint8,::color::category::cmyk_float  >{};
     template< > struct convert<::color::category::cmy_uint8,::color::category::cmyk_double > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint8,::color::category::cmyk_double >{};
     template< > struct convert<::color::category::cmy_uint8,::color::category::cmyk_ldouble> : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint8,::color::category::cmyk_ldouble>{};

     template< > struct convert<::color::category::cmy_uint16,::color::category::cmyk_uint8  > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint16,::color::category::cmyk_uint8  >{};
     template< > struct convert<::color::category::cmy_uint16,::color::category::cmyk_uint16 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint16,::color::category::cmyk_uint16 >{};
     template< > struct convert<::color::category::cmy_uint16,::color::category::cmyk_uint32 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint16,::color::category::cmyk_uint32 >{};
     template< > struct convert<::color::category::cmy_uint16,::color::category::cmyk_uint64 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint16,::color::category::cmyk_uint64 >{};
     template< > struct convert<::color::category::cmy_uint16,::color::category::cmyk_float  > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint16,::color::category::cmyk_float  >{};
     template< > struct convert<::color::category::cmy_uint16,::color::category::cmyk_double > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint16,::color::category::cmyk_double >{};
     template< > struct convert<::color::category::cmy_uint16,::color::category::cmyk_ldouble> : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint16,::color::category::cmyk_ldouble>{};

     template< > struct convert<::color::category::cmy_uint32,::color::category::cmyk_uint8  > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint32,::color::category::cmyk_uint8  >{};
     template< > struct convert<::color::category::cmy_uint32,::color::category::cmyk_uint16 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint32,::color::category::cmyk_uint16 >{};
     template< > struct convert<::color::category::cmy_uint32,::color::category::cmyk_uint32 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint32,::color::category::cmyk_uint32 >{};
     template< > struct convert<::color::category::cmy_uint32,::color::category::cmyk_uint64 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint32,::color::category::cmyk_uint64 >{};
     template< > struct convert<::color::category::cmy_uint32,::color::category::cmyk_float  > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint32,::color::category::cmyk_float  >{};
     template< > struct convert<::color::category::cmy_uint32,::color::category::cmyk_double > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint32,::color::category::cmyk_double >{};
     template< > struct convert<::color::category::cmy_uint32,::color::category::cmyk_ldouble> : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint32,::color::category::cmyk_ldouble>{};

     template< > struct convert<::color::category::cmy_uint64,::color::category::cmyk_uint8  > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint64,::color::category::cmyk_uint8  >{};
     template< > struct convert<::color::category::cmy_uint64,::color::category::cmyk_uint16 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint64,::color::category::cmyk_uint16 >{};
     template< > struct convert<::color::category::cmy_uint64,::color::category::cmyk_uint32 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint64,::color::category::cmyk_uint32 >{};
     template< > struct convert<::color::category::cmy_uint64,::color::category::cmyk_uint64 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint64,::color::category::cmyk_uint64 >{};
     template< > struct convert<::color::category::cmy_uint64,::color::category::cmyk_float  > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint64,::color::category::cmyk_float  >{};
     template< > struct convert<::color::category::cmy_uint64,::color::category::cmyk_double > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint64,::color::category::cmyk_double >{};
     template< > struct convert<::color::category::cmy_uint64,::color::category::cmyk_ldouble> : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_uint64,::color::category::cmyk_ldouble>{};

     template< > struct convert<::color::category::cmy_float,::color::category::cmyk_uint8  > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_float,::color::category::cmyk_uint8  >{};
     template< > struct convert<::color::category::cmy_float,::color::category::cmyk_uint16 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_float,::color::category::cmyk_uint16 >{};
     template< > struct convert<::color::category::cmy_float,::color::category::cmyk_uint32 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_float,::color::category::cmyk_uint32 >{};
     template< > struct convert<::color::category::cmy_float,::color::category::cmyk_uint64 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_float,::color::category::cmyk_uint64 >{};
     template< > struct convert<::color::category::cmy_float,::color::category::cmyk_float  > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_float,::color::category::cmyk_float  >{};
     template< > struct convert<::color::category::cmy_float,::color::category::cmyk_double > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_float,::color::category::cmyk_double >{};
     template< > struct convert<::color::category::cmy_float,::color::category::cmyk_ldouble> : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_float,::color::category::cmyk_ldouble>{};

     template< > struct convert<::color::category::cmy_double,::color::category::cmyk_uint8  > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_double,::color::category::cmyk_uint8  >{};
     template< > struct convert<::color::category::cmy_double,::color::category::cmyk_uint16 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_double,::color::category::cmyk_uint16 >{};
     template< > struct convert<::color::category::cmy_double,::color::category::cmyk_uint32 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_double,::color::category::cmyk_uint32 >{};
     template< > struct convert<::color::category::cmy_double,::color::category::cmyk_uint64 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_double,::color::category::cmyk_uint64 >{};
     template< > struct convert<::color::category::cmy_double,::color::category::cmyk_float  > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_double,::color::category::cmyk_float  >{};
     template< > struct convert<::color::category::cmy_double,::color::category::cmyk_double > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_double,::color::category::cmyk_double >{};
     template< > struct convert<::color::category::cmy_double,::color::category::cmyk_ldouble> : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_double,::color::category::cmyk_ldouble>{};

     template< > struct convert<::color::category::cmy_ldouble,::color::category::cmyk_uint8  > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_ldouble,::color::category::cmyk_uint8  >{};
     template< > struct convert<::color::category::cmy_ldouble,::color::category::cmyk_uint16 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_ldouble,::color::category::cmyk_uint16 >{};
     template< > struct convert<::color::category::cmy_ldouble,::color::category::cmyk_uint32 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_ldouble,::color::category::cmyk_uint32 >{};
     template< > struct convert<::color::category::cmy_ldouble,::color::category::cmyk_uint64 > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_ldouble,::color::category::cmyk_uint64 >{};
     template< > struct convert<::color::category::cmy_ldouble,::color::category::cmyk_float  > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_ldouble,::color::category::cmyk_float  >{};
     template< > struct convert<::color::category::cmy_ldouble,::color::category::cmyk_double > : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_ldouble,::color::category::cmyk_double >{};
     template< > struct convert<::color::category::cmy_ldouble,::color::category::cmyk_ldouble> : public ::color::_internal::_privateCMY::convert_cmyk2cmy<::color::category::cmy_ldouble,::color::category::cmyk_ldouble>{};


   }
 }

#endif// TODO