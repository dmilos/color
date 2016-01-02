#ifndef color_gray_convert_cmy
#define color_gray_convert_cmy

#include "../../_internal/convert.hpp"
#include "../../cmy/cmy.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateGray
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_cmy2gray
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;

           typedef ::color::_internal::container<category_left_type>     container_left_trait_type;
           typedef ::color::_internal::container<category_right_type>    container_right_trait_type;

           typedef ::color::_internal::diverse< category_left_type >    diverse_type;
           typedef ::color::_internal::normalize< category_right_type > normalize_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             scalar_name value =
                   0.2126 * ( 1 - normalize_type::template process<0> ( container_right_trait_type::template get<0>( right ) ) )
                 + 0.7152 * ( 1 - normalize_type::template process<1> ( container_right_trait_type::template get<1>( right ) ) )
                 + 0.0722 * ( 1 - normalize_type::template process<2> ( container_right_trait_type::template get<2>( right ) ) );

             container_left_trait_type::template set<0>( left,  diverse_type::template process<0>( value ) );
            }
        };
     }

     template< > struct convert<::color::category::gray_uint8,::color::category::cmy_uint8  > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint8,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::cmy_uint16 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint8,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::cmy_uint32 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint8,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::cmy_uint64 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint8,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::cmy_float  > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint8,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::cmy_double > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint8,::color::category::cmy_double >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::cmy_ldouble> : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint8,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::gray_uint16,::color::category::cmy_uint8  > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint16,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::cmy_uint16 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint16,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::cmy_uint32 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint16,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::cmy_uint64 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint16,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::cmy_float  > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint16,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::cmy_double > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint16,::color::category::cmy_double >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::cmy_ldouble> : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint16,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::gray_uint32,::color::category::cmy_uint8  > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint32,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::cmy_uint16 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint32,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::cmy_uint32 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint32,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::cmy_uint64 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint32,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::cmy_float  > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint32,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::cmy_double > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint32,::color::category::cmy_double >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::cmy_ldouble> : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint32,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::gray_uint64,::color::category::cmy_uint8  > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint64,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::cmy_uint16 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint64,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::cmy_uint32 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint64,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::cmy_uint64 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint64,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::cmy_float  > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint64,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::cmy_double > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint64,::color::category::cmy_double >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::cmy_ldouble> : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_uint64,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::gray_float,::color::category::cmy_uint8  > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_float,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::gray_float,::color::category::cmy_uint16 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_float,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::gray_float,::color::category::cmy_uint32 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_float,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::gray_float,::color::category::cmy_uint64 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_float,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::gray_float,::color::category::cmy_float  > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_float,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::gray_float,::color::category::cmy_double > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_float,::color::category::cmy_double >{};
     template< > struct convert<::color::category::gray_float,::color::category::cmy_ldouble> : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_float,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::gray_double,::color::category::cmy_uint8  > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_double,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::gray_double,::color::category::cmy_uint16 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_double,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::gray_double,::color::category::cmy_uint32 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_double,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::gray_double,::color::category::cmy_uint64 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_double,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::gray_double,::color::category::cmy_float  > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_double,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::gray_double,::color::category::cmy_double > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_double,::color::category::cmy_double >{};
     template< > struct convert<::color::category::gray_double,::color::category::cmy_ldouble> : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_double,::color::category::cmy_ldouble>{};

     template< > struct convert<::color::category::gray_ldouble,::color::category::cmy_uint8  > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_ldouble,::color::category::cmy_uint8  >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::cmy_uint16 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_ldouble,::color::category::cmy_uint16 >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::cmy_uint32 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_ldouble,::color::category::cmy_uint32 >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::cmy_uint64 > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_ldouble,::color::category::cmy_uint64 >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::cmy_float  > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_ldouble,::color::category::cmy_float  >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::cmy_double > : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_ldouble,::color::category::cmy_double >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::cmy_ldouble> : public ::color::_internal::_privateGray::convert_cmy2gray<::color::category::gray_ldouble,::color::category::cmy_ldouble>{};


   }
 }

#endif