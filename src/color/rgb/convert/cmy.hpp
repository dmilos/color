#ifndef color_rgb_convert_cmy
#define color_rgb_convert_cmy

#include "../../_internal/convert.hpp"
#include "../../cmy/cmy.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateRGB
     {

      template< typename category_left_name, typename category_right_name >
       struct convert_cmy2rgb
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;

           typedef ::color::trait::container<category_left_type>     container_left_trait_type;
           typedef ::color::trait::container<category_right_type>    container_right_trait_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             typedef  ::color::_internal::reformat< category_left_type, category_right_type > reformat_type;
             typedef  ::color::operation::_internal::invert< category_right_type > invert_type;

             container_left_trait_type::template set<0>( left, reformat_type::template process<0,0>( invert_type::template component<0>( container_right_trait_type::template get<0>( right ) ) ) );
             container_left_trait_type::template set<1>( left, reformat_type::template process<1,1>( invert_type::template component<1>( container_right_trait_type::template get<1>( right ) ) ) );
             container_left_trait_type::template set<2>( left, reformat_type::template process<2,2>( invert_type::template component<2>( container_right_trait_type::template get<2>( right ) ) ) );
           }
        };

     }

     template< > struct convert<::color::category::rgb_uint8,::color::category::cmy_uint8  > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint8,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::cmy_uint16 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint8,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::cmy_uint32 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint8,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::cmy_uint64 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint8,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::cmy_float  > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint8,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::cmy_double > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint8,::color::category::cmy_double >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::cmy_ldouble> : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint8,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::rgb_uint16,::color::category::cmy_uint8  > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint16,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::cmy_uint16 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint16,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::cmy_uint32 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint16,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::cmy_uint64 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint16,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::cmy_float  > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint16,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::cmy_double > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint16,::color::category::cmy_double >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::cmy_ldouble> : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint16,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::rgb_uint32,::color::category::cmy_uint8  > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint32,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::cmy_uint16 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint32,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::cmy_uint32 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint32,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::cmy_uint64 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint32,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::cmy_float  > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint32,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::cmy_double > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint32,::color::category::cmy_double >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::cmy_ldouble> : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint32,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::rgb_uint64,::color::category::cmy_uint8  > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint64,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::cmy_uint16 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint64,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::cmy_uint32 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint64,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::cmy_uint64 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint64,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::cmy_float  > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint64,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::cmy_double > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint64,::color::category::cmy_double >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::cmy_ldouble> : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_uint64,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::rgb_float,::color::category::cmy_uint8  > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_float,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::rgb_float,::color::category::cmy_uint16 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_float,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::cmy_uint32 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_float,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::cmy_uint64 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_float,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::cmy_float  > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_float,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::rgb_float,::color::category::cmy_double > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_float,::color::category::cmy_double >{};
     template< > struct convert<::color::category::rgb_float,::color::category::cmy_ldouble> : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_float,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::rgb_double,::color::category::cmy_uint8  > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_double,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::rgb_double,::color::category::cmy_uint16 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_double,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::cmy_uint32 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_double,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::cmy_uint64 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_double,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::cmy_float  > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_double,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::rgb_double,::color::category::cmy_double > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_double,::color::category::cmy_double >{};
     template< > struct convert<::color::category::rgb_double,::color::category::cmy_ldouble> : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_double,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::rgb_ldouble,::color::category::cmy_uint8  > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_ldouble,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::cmy_uint16 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_ldouble,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::cmy_uint32 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_ldouble,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::cmy_uint64 > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_ldouble,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::cmy_float  > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_ldouble,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::cmy_double > : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_ldouble,::color::category::cmy_double >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::cmy_ldouble> : public ::color::_internal::_privateRGB::convert_cmy2rgb<::color::category::rgb_ldouble,::color::category::cmy_ldouble>{};


   }
 }

#endif