#ifndef color_gray_convert_yiq
#define color_gray_convert_yiq

#include "../../_internal/convert.hpp"
#include "../../yiq/yiq.hpp"

#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateGray
     {

      template< typename category_left_name, typename category_right_name, typename float_name = double >
       struct convert_yiq2gray
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;

           typedef ::color::_internal::container<category_left_type>     container_left_trait_type;
           typedef ::color::_internal::container<category_right_type>    container_right_trait_type;

           typedef ::color::_internal::reformat< category_left_type, category_right_type, float_name >    reformat_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             container_left_trait_type::template set<0>( left, reformat_type::template process<0,0>( container_right_trait_type::template get<0>( right ) ) );
            }
        };

     }

     template< > struct convert<::color::category::gray_uint8,::color::category::yiq_uint8  > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint8,::color::category::yiq_uint8  >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::yiq_uint16 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint8,::color::category::yiq_uint16 >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::yiq_uint32 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint8,::color::category::yiq_uint32 >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::yiq_uint64 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint8,::color::category::yiq_uint64 >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::yiq_float  > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint8,::color::category::yiq_float  >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::yiq_double > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint8,::color::category::yiq_double >{};
     template< > struct convert<::color::category::gray_uint8,::color::category::yiq_ldouble> : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint8,::color::category::yiq_ldouble>{};

     template< > struct convert<::color::category::gray_uint16,::color::category::yiq_uint8  > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint16,::color::category::yiq_uint8  >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::yiq_uint16 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint16,::color::category::yiq_uint16 >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::yiq_uint32 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint16,::color::category::yiq_uint32 >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::yiq_uint64 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint16,::color::category::yiq_uint64 >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::yiq_float  > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint16,::color::category::yiq_float  >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::yiq_double > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint16,::color::category::yiq_double >{};
     template< > struct convert<::color::category::gray_uint16,::color::category::yiq_ldouble> : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint16,::color::category::yiq_ldouble>{};

     template< > struct convert<::color::category::gray_uint32,::color::category::yiq_uint8  > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint32,::color::category::yiq_uint8  >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::yiq_uint16 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint32,::color::category::yiq_uint16 >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::yiq_uint32 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint32,::color::category::yiq_uint32 >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::yiq_uint64 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint32,::color::category::yiq_uint64 >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::yiq_float  > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint32,::color::category::yiq_float  >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::yiq_double > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint32,::color::category::yiq_double >{};
     template< > struct convert<::color::category::gray_uint32,::color::category::yiq_ldouble> : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint32,::color::category::yiq_ldouble>{};

     template< > struct convert<::color::category::gray_uint64,::color::category::yiq_uint8  > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint64,::color::category::yiq_uint8  >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::yiq_uint16 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint64,::color::category::yiq_uint16 >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::yiq_uint32 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint64,::color::category::yiq_uint32 >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::yiq_uint64 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint64,::color::category::yiq_uint64 >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::yiq_float  > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint64,::color::category::yiq_float  >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::yiq_double > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint64,::color::category::yiq_double >{};
     template< > struct convert<::color::category::gray_uint64,::color::category::yiq_ldouble> : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_uint64,::color::category::yiq_ldouble>{};

     template< > struct convert<::color::category::gray_float,::color::category::yiq_uint8  > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_float,::color::category::yiq_uint8  >{};
     template< > struct convert<::color::category::gray_float,::color::category::yiq_uint16 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_float,::color::category::yiq_uint16 >{};
     template< > struct convert<::color::category::gray_float,::color::category::yiq_uint32 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_float,::color::category::yiq_uint32 >{};
     template< > struct convert<::color::category::gray_float,::color::category::yiq_uint64 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_float,::color::category::yiq_uint64 >{};
     template< > struct convert<::color::category::gray_float,::color::category::yiq_float  > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_float,::color::category::yiq_float  >{};
     template< > struct convert<::color::category::gray_float,::color::category::yiq_double > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_float,::color::category::yiq_double >{};
     template< > struct convert<::color::category::gray_float,::color::category::yiq_ldouble> : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_float,::color::category::yiq_ldouble>{};

     template< > struct convert<::color::category::gray_double,::color::category::yiq_uint8  > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_double,::color::category::yiq_uint8  >{};
     template< > struct convert<::color::category::gray_double,::color::category::yiq_uint16 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_double,::color::category::yiq_uint16 >{};
     template< > struct convert<::color::category::gray_double,::color::category::yiq_uint32 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_double,::color::category::yiq_uint32 >{};
     template< > struct convert<::color::category::gray_double,::color::category::yiq_uint64 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_double,::color::category::yiq_uint64 >{};
     template< > struct convert<::color::category::gray_double,::color::category::yiq_float  > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_double,::color::category::yiq_float  >{};
     template< > struct convert<::color::category::gray_double,::color::category::yiq_double > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_double,::color::category::yiq_double >{};
     template< > struct convert<::color::category::gray_double,::color::category::yiq_ldouble> : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_double,::color::category::yiq_ldouble>{};

     template< > struct convert<::color::category::gray_ldouble,::color::category::yiq_uint8  > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_ldouble,::color::category::yiq_uint8  >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::yiq_uint16 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_ldouble,::color::category::yiq_uint16 >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::yiq_uint32 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_ldouble,::color::category::yiq_uint32 >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::yiq_uint64 > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_ldouble,::color::category::yiq_uint64 >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::yiq_float  > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_ldouble,::color::category::yiq_float  >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::yiq_double > : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_ldouble,::color::category::yiq_double >{};
     template< > struct convert<::color::category::gray_ldouble,::color::category::yiq_ldouble> : public ::color::_internal::_privateGray::convert_yiq2gray<::color::category::gray_ldouble,::color::category::yiq_ldouble>{};


   }
 }

#endif