#ifndef color_gray_convert_hsl
#define color_gray_convert_hsl

#include "../../_internal/convert.hpp"
#include "../../hsl/hsl.hpp"

#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateGray
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_hsl2gray
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;

           typedef ::color::trait::container<category_left_type>     container_left_trait_type;
           typedef ::color::trait::container<category_right_type>    container_right_trait_type;

           typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_name >    reformat_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             container_left_trait_type::template set<0>( left, reformat_type::template process<0,2>( container_right_trait_type::template get<2>( right ) ) );
            }
        };

     }

     template< > struct convert<::color::category::gray_uint8,::color::category::hsl_uint8  > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint8,::color::category::hsl_uint8  >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::hsl_uint16 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint8,::color::category::hsl_uint16 >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::hsl_uint32 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint8,::color::category::hsl_uint32 >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::hsl_uint64 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint8,::color::category::hsl_uint64 >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::hsl_float  > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint8,::color::category::hsl_float  >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::hsl_double > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint8,::color::category::hsl_double >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::hsl_ldouble> : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint8,::color::category::hsl_ldouble>{};

     template< > struct convert<::color::category::gray_uint16,::color::category::hsl_uint8  > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint16,::color::category::hsl_uint8  >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::hsl_uint16 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint16,::color::category::hsl_uint16 >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::hsl_uint32 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint16,::color::category::hsl_uint32 >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::hsl_uint64 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint16,::color::category::hsl_uint64 >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::hsl_float  > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint16,::color::category::hsl_float  >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::hsl_double > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint16,::color::category::hsl_double >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::hsl_ldouble> : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint16,::color::category::hsl_ldouble>{};

     template< > struct convert<::color::category::gray_uint32,::color::category::hsl_uint8  > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint32,::color::category::hsl_uint8  >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::hsl_uint16 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint32,::color::category::hsl_uint16 >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::hsl_uint32 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint32,::color::category::hsl_uint32 >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::hsl_uint64 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint32,::color::category::hsl_uint64 >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::hsl_float  > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint32,::color::category::hsl_float  >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::hsl_double > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint32,::color::category::hsl_double >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::hsl_ldouble> : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint32,::color::category::hsl_ldouble>{};

     template< > struct convert<::color::category::gray_uint64,::color::category::hsl_uint8  > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint64,::color::category::hsl_uint8  >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::hsl_uint16 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint64,::color::category::hsl_uint16 >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::hsl_uint32 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint64,::color::category::hsl_uint32 >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::hsl_uint64 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint64,::color::category::hsl_uint64 >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::hsl_float  > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint64,::color::category::hsl_float  >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::hsl_double > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint64,::color::category::hsl_double >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::hsl_ldouble> : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_uint64,::color::category::hsl_ldouble>{};

     template< > struct convert<::color::category::gray_float,::color::category::hsl_uint8  > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_float,::color::category::hsl_uint8  >{};
     template< > struct convert<::color::category::gray_float,::color::category::hsl_uint16 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_float,::color::category::hsl_uint16 >{};
     template< > struct convert<::color::category::gray_float,::color::category::hsl_uint32 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_float,::color::category::hsl_uint32 >{};
     template< > struct convert<::color::category::gray_float,::color::category::hsl_uint64 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_float,::color::category::hsl_uint64 >{};
     template< > struct convert<::color::category::gray_float,::color::category::hsl_float  > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_float,::color::category::hsl_float  >{};
     template< > struct convert<::color::category::gray_float,::color::category::hsl_double > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_float,::color::category::hsl_double >{};
     template< > struct convert<::color::category::gray_float,::color::category::hsl_ldouble> : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_float,::color::category::hsl_ldouble>{};

     template< > struct convert<::color::category::gray_double,::color::category::hsl_uint8  > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_double,::color::category::hsl_uint8  >{};
     template< > struct convert<::color::category::gray_double,::color::category::hsl_uint16 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_double,::color::category::hsl_uint16 >{};
     template< > struct convert<::color::category::gray_double,::color::category::hsl_uint32 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_double,::color::category::hsl_uint32 >{};
     template< > struct convert<::color::category::gray_double,::color::category::hsl_uint64 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_double,::color::category::hsl_uint64 >{};
     template< > struct convert<::color::category::gray_double,::color::category::hsl_float  > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_double,::color::category::hsl_float  >{};
     template< > struct convert<::color::category::gray_double,::color::category::hsl_double > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_double,::color::category::hsl_double >{};
     template< > struct convert<::color::category::gray_double,::color::category::hsl_ldouble> : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_double,::color::category::hsl_ldouble>{};

     template< > struct convert<::color::category::gray_ldouble,::color::category::hsl_uint8  > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_ldouble,::color::category::hsl_uint8  >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::hsl_uint16 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_ldouble,::color::category::hsl_uint16 >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::hsl_uint32 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_ldouble,::color::category::hsl_uint32 >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::hsl_uint64 > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_ldouble,::color::category::hsl_uint64 >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::hsl_float  > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_ldouble,::color::category::hsl_float  >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::hsl_double > : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_ldouble,::color::category::hsl_double >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::hsl_ldouble> : public ::color::_internal::_privateGray::convert_hsl2gray<::color::category::gray_ldouble,::color::category::hsl_ldouble>{};


   }
 }

#endif