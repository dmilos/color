#ifndef color_cmyk_convert_rgb
#define color_cmyk_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/rgb.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateCMYK
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_rgb2cmyk
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;
           typedef scalar_name  scalar_type;

           typedef ::color::trait::scalar< category_left_name > scalar_trait_type;

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
             scalar_type r = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             scalar_type g = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             scalar_type b = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             scalar_type k = scalar_type(1) - std::max( { r, g, b } );
             scalar_type c = scalar_type(0);
             scalar_type m = scalar_type(0);
             scalar_type y = scalar_type(0);

             if( false == scalar_trait_type::is_small( 1 - k ) )
              {
               c = (1-r-k) / (1-k);
               m = (1-g-k) / (1-k);
               y = (1-b-k) / (1-k);
              }

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( c ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( m ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( y ) );
             container_left_trait_type::template set<3>( left, diverse_type::template process<3>( k ) );
            }
        };

     }

     template< > struct convert<::color::category::cmyk_uint8,::color::category::rgb_uint8  > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint8,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::cmyk_uint8,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint8,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::cmyk_uint8,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint8,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::cmyk_uint8,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint8,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::cmyk_uint8,::color::category::rgb_float  > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint8,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::cmyk_uint8,::color::category::rgb_double > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint8,::color::category::rgb_double >{};
     template< > struct convert<::color::category::cmyk_uint8,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint8,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::cmyk_uint16,::color::category::rgb_uint8  > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint16,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::cmyk_uint16,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint16,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::cmyk_uint16,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint16,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::cmyk_uint16,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint16,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::cmyk_uint16,::color::category::rgb_float  > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint16,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::cmyk_uint16,::color::category::rgb_double > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint16,::color::category::rgb_double >{};
     template< > struct convert<::color::category::cmyk_uint16,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint16,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::cmyk_uint32,::color::category::rgb_uint8  > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint32,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::cmyk_uint32,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint32,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::cmyk_uint32,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint32,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::cmyk_uint32,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint32,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::cmyk_uint32,::color::category::rgb_float  > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint32,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::cmyk_uint32,::color::category::rgb_double > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint32,::color::category::rgb_double >{};
     template< > struct convert<::color::category::cmyk_uint32,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint32,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::cmyk_uint64,::color::category::rgb_uint8  > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint64,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::cmyk_uint64,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint64,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::cmyk_uint64,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint64,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::cmyk_uint64,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint64,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::cmyk_uint64,::color::category::rgb_float  > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint64,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::cmyk_uint64,::color::category::rgb_double > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint64,::color::category::rgb_double >{};
     template< > struct convert<::color::category::cmyk_uint64,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_uint64,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::cmyk_float,::color::category::rgb_uint8  > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_float,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::cmyk_float,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_float,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::cmyk_float,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_float,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::cmyk_float,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_float,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::cmyk_float,::color::category::rgb_float  > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_float,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::cmyk_float,::color::category::rgb_double > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_float,::color::category::rgb_double >{};
     template< > struct convert<::color::category::cmyk_float,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_float,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::cmyk_double,::color::category::rgb_uint8  > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_double,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::cmyk_double,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_double,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::cmyk_double,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_double,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::cmyk_double,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_double,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::cmyk_double,::color::category::rgb_float  > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_double,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::cmyk_double,::color::category::rgb_double > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_double,::color::category::rgb_double >{};
     template< > struct convert<::color::category::cmyk_double,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_double,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::cmyk_ldouble,::color::category::rgb_uint8  > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_ldouble,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::cmyk_ldouble,::color::category::rgb_uint16 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_ldouble,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::cmyk_ldouble,::color::category::rgb_uint32 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_ldouble,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::cmyk_ldouble,::color::category::rgb_uint64 > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_ldouble,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::cmyk_ldouble,::color::category::rgb_float  > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_ldouble,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::cmyk_ldouble,::color::category::rgb_double > : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_ldouble,::color::category::rgb_double >{};
     template< > struct convert<::color::category::cmyk_ldouble,::color::category::rgb_ldouble> : public ::color::_internal::_privateCMYK::convert_rgb2cmyk<::color::category::cmyk_ldouble,::color::category::rgb_ldouble>{};


   }
 }

#endif