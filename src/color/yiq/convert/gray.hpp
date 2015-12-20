#ifndef color_yiq_convert_gray
#define color_yiq_convert_gray

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateYIQ
     {

      template< typename category_left_name, typename category_right_name, typename float_name = double >
       struct convert_gray2yiq
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;
           typedef float_name  float_type;

           typedef ::color::_internal::container<category_left_type>     container_left_trait_type;
           typedef ::color::_internal::container<category_right_type>    container_right_trait_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             // TODO
            }
        };
     }

     template< > struct convert<::color::category::yiq_uint8,::color::category::gray_uint8  > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint8,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::gray_uint16 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint8,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::gray_uint32 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint8,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::gray_uint64 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint8,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::gray_float  > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint8,::color::category::gray_float  >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::gray_double > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint8,::color::category::gray_double >{};
     template< > struct convert<::color::category::yiq_uint8,::color::category::gray_ldouble> : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint8,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::yiq_uint16,::color::category::gray_uint8  > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint16,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::gray_uint16 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint16,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::gray_uint32 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint16,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::gray_uint64 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint16,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::gray_float  > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint16,::color::category::gray_float  >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::gray_double > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint16,::color::category::gray_double >{};
     template< > struct convert<::color::category::yiq_uint16,::color::category::gray_ldouble> : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint16,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::yiq_uint32,::color::category::gray_uint8  > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint32,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::gray_uint16 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint32,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::gray_uint32 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint32,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::gray_uint64 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint32,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::gray_float  > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint32,::color::category::gray_float  >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::gray_double > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint32,::color::category::gray_double >{};
     template< > struct convert<::color::category::yiq_uint32,::color::category::gray_ldouble> : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint32,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::yiq_uint64,::color::category::gray_uint8  > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint64,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::gray_uint16 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint64,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::gray_uint32 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint64,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::gray_uint64 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint64,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::gray_float  > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint64,::color::category::gray_float  >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::gray_double > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint64,::color::category::gray_double >{};
     template< > struct convert<::color::category::yiq_uint64,::color::category::gray_ldouble> : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_uint64,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::yiq_float,::color::category::gray_uint8  > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_float,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::yiq_float,::color::category::gray_uint16 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_float,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::yiq_float,::color::category::gray_uint32 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_float,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::yiq_float,::color::category::gray_uint64 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_float,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::yiq_float,::color::category::gray_float  > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_float,::color::category::gray_float  >{};
     template< > struct convert<::color::category::yiq_float,::color::category::gray_double > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_float,::color::category::gray_double >{};
     template< > struct convert<::color::category::yiq_float,::color::category::gray_ldouble> : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_float,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::yiq_double,::color::category::gray_uint8  > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_double,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::yiq_double,::color::category::gray_uint16 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_double,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::yiq_double,::color::category::gray_uint32 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_double,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::yiq_double,::color::category::gray_uint64 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_double,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::yiq_double,::color::category::gray_float  > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_double,::color::category::gray_float  >{};
     template< > struct convert<::color::category::yiq_double,::color::category::gray_double > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_double,::color::category::gray_double >{};
     template< > struct convert<::color::category::yiq_double,::color::category::gray_ldouble> : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_double,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::yiq_ldouble,::color::category::gray_uint8  > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_ldouble,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::gray_uint16 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_ldouble,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::gray_uint32 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_ldouble,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::gray_uint64 > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_ldouble,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::gray_float  > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_ldouble,::color::category::gray_float  >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::gray_double > : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_ldouble,::color::category::gray_double >{};
     template< > struct convert<::color::category::yiq_ldouble,::color::category::gray_ldouble> : public ::color::_internal::_privateYIQ::convert_gray2yiq<::color::category::yiq_ldouble,::color::category::gray_ldouble>{};


   }
 }

#endif