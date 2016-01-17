#ifndef color_yiq_convert_cmy
#define color_yiq_convert_cmy

#include "../../_internal/convert.hpp"
#include "../../cmy/trait/container.hpp"
#include "../../cmy/category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateYIQ
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_cmy2yiq
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;
           typedef scalar_name  scalar_type;

           typedef ::color::trait::container<category_left_type>     container_left_trait_type;
           typedef ::color::trait::container<category_right_type>    container_right_trait_type;

           typedef ::color::constant::yiq< category_right_name > yiq_const_type;

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
             static scalar_type b11 = yiq_const_type::b11(), b12 = yiq_const_type::b12(), b13 = yiq_const_type::b13();
             static scalar_type b21 = yiq_const_type::b21(), b22 = yiq_const_type::b22(), b23 = yiq_const_type::b23();
             static scalar_type b31 = yiq_const_type::b31(), b32 = yiq_const_type::b32(), b33 = yiq_const_type::b33();

             static scalar_type const                              b32n = -b32;

             scalar_type r = scalar_type(1) - normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             scalar_type g = scalar_type(1) - normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             scalar_type b = scalar_type(1) - normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             scalar_type y = b11 * r + b12 * g + b13 * b;
             scalar_type i = b21 * r + b22 * g + b23 * b;
             scalar_type q = b31 * r + b32 * g + b33 * b;

             i = ( i / b21  + scalar_type(1) ) / scalar_type(2);
             q = ( q / b32n + scalar_type(1) ) / scalar_type(2);

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( y ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( i ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( q ) );
            }
        };

     }

     template< > struct convert<::color::category::yiq_uint8,::color::category::cmy_uint8  > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint8,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::cmy_uint16 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint8,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::cmy_uint32 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint8,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::cmy_uint64 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint8,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::cmy_float  > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint8,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::cmy_double > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint8,::color::category::cmy_double >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::cmy_ldouble> : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint8,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::yiq_uint16,::color::category::cmy_uint8  > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint16,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::cmy_uint16 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint16,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::cmy_uint32 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint16,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::cmy_uint64 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint16,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::cmy_float  > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint16,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::cmy_double > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint16,::color::category::cmy_double >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::cmy_ldouble> : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint16,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::yiq_uint32,::color::category::cmy_uint8  > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint32,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::cmy_uint16 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint32,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::cmy_uint32 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint32,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::cmy_uint64 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint32,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::cmy_float  > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint32,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::cmy_double > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint32,::color::category::cmy_double >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::cmy_ldouble> : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint32,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::yiq_uint64,::color::category::cmy_uint8  > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint64,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::cmy_uint16 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint64,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::cmy_uint32 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint64,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::cmy_uint64 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint64,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::cmy_float  > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint64,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::cmy_double > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint64,::color::category::cmy_double >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::cmy_ldouble> : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_uint64,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::yiq_float,::color::category::cmy_uint8  > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_float,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::yiq_float,::color::category::cmy_uint16 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_float,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::yiq_float,::color::category::cmy_uint32 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_float,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::yiq_float,::color::category::cmy_uint64 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_float,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::yiq_float,::color::category::cmy_float  > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_float,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::yiq_float,::color::category::cmy_double > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_float,::color::category::cmy_double >{};
     template< > struct convert<::color::category::yiq_float,::color::category::cmy_ldouble> : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_float,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::yiq_double,::color::category::cmy_uint8  > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_double,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::yiq_double,::color::category::cmy_uint16 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_double,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::yiq_double,::color::category::cmy_uint32 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_double,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::yiq_double,::color::category::cmy_uint64 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_double,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::yiq_double,::color::category::cmy_float  > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_double,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::yiq_double,::color::category::cmy_double > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_double,::color::category::cmy_double >{};
     template< > struct convert<::color::category::yiq_double,::color::category::cmy_ldouble> : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_double,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::yiq_ldouble,::color::category::cmy_uint8  > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_ldouble,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::cmy_uint16 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_ldouble,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::cmy_uint32 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_ldouble,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::cmy_uint64 > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_ldouble,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::cmy_float  > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_ldouble,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::cmy_double > : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_ldouble,::color::category::cmy_double >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::cmy_ldouble> : public ::color::_internal::_privateYIQ::convert_cmy2yiq<::color::category::yiq_ldouble,::color::category::cmy_ldouble>{};


   }
 }

#endif
