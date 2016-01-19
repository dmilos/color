#ifndef color_rgb_convert_yiq
#define color_rgb_convert_yiq

#include "../../_internal/convert.hpp"
#include "../../yiq/trait/container.hpp"
#include "../../yiq/category.hpp"
#include "../../yiq/constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateRGB
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_yiq2rgb
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;
           typedef scalar_name  scalar_type;

           typedef ::color::trait::container<category_left_type>     container_left_trait_type;
           typedef ::color::trait::container<category_right_type>    container_right_trait_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           typedef ::color::constant::yiq< category_right_name > yiq_const_type;

           typedef ::color::_internal::diverse< category_left_type >    diverse_type;
           typedef ::color::_internal::normalize< category_right_type > normalize_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             static scalar_type a11 = yiq_const_type::a11(), a12 = yiq_const_type::a12(), a13 = yiq_const_type::a13();
             static scalar_type a21 = yiq_const_type::a21(), a22 = yiq_const_type::a22(), a23 = yiq_const_type::a23();
             static scalar_type a31 = yiq_const_type::a31(), a32 = yiq_const_type::a32(), a33 = yiq_const_type::a33();

             scalar_type y = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             scalar_type i = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             scalar_type q = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             i = yiq_const_type::i_deverse( i );
             q = yiq_const_type::q_deverse( q );

             scalar_type r = a11 * y + a12 * i + a13 * q;
             scalar_type g = a21 * y + a22 * i + a23 * q;
             scalar_type b = a31 * y + a32 * i + a33 * q;

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( r ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( g ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( b ) );
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
