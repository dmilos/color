#ifndef color_cmy_convert_gray
#define color_cmy_convert_gray


#include "../category.hpp"

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateCMY
     {

      template< typename category_left_name, typename category_right_name, typename float_name = double >
       struct convert_gray2cmy
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;
           typedef float_name float_type;

           typedef ::color::_internal::container<category_left_type>     container_left_trait_type;
           typedef ::color::_internal::container<category_right_type>    container_right_trait_type;

           typedef ::color::operation::_internal::invert< category_right_type >    invert_type;
           typedef ::color::_internal::reformat< category_left_type, category_right_type, float_type >    reformat_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            { 
             container_left_trait_type::template set<0>( left, reformat_type::template process<0,0>( invert_type::template component<0>(container_right_trait_type::template get<0>( right ) ) ) );
             container_left_trait_type::template set<1>( left, reformat_type::template process<1,1>( invert_type::template component<1>(container_right_trait_type::template get<1>( right ) ) ) );
             container_left_trait_type::template set<2>( left, reformat_type::template process<2,2>( invert_type::template component<2>(container_right_trait_type::template get<2>( right ) ) ) );
            }
        };
     }

     template< > struct convert<::color::category::cmy_uint8,::color::category::gray_uint8  > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint8,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::cmy_uint8,::color::category::gray_uint16 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint8,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::cmy_uint8,::color::category::gray_uint32 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint8,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::cmy_uint8,::color::category::gray_uint64 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint8,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::cmy_uint8,::color::category::gray_float  > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint8,::color::category::gray_float  >{};
     template< > struct convert<::color::category::cmy_uint8,::color::category::gray_double > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint8,::color::category::gray_double >{};
     template< > struct convert<::color::category::cmy_uint8,::color::category::gray_ldouble> : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint8,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::cmy_uint16,::color::category::gray_uint8  > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint16,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::cmy_uint16,::color::category::gray_uint16 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint16,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::cmy_uint16,::color::category::gray_uint32 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint16,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::cmy_uint16,::color::category::gray_uint64 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint16,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::cmy_uint16,::color::category::gray_float  > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint16,::color::category::gray_float  >{};
     template< > struct convert<::color::category::cmy_uint16,::color::category::gray_double > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint16,::color::category::gray_double >{};
     template< > struct convert<::color::category::cmy_uint16,::color::category::gray_ldouble> : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint16,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::cmy_uint32,::color::category::gray_uint8  > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint32,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::cmy_uint32,::color::category::gray_uint16 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint32,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::cmy_uint32,::color::category::gray_uint32 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint32,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::cmy_uint32,::color::category::gray_uint64 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint32,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::cmy_uint32,::color::category::gray_float  > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint32,::color::category::gray_float  >{};
     template< > struct convert<::color::category::cmy_uint32,::color::category::gray_double > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint32,::color::category::gray_double >{};
     template< > struct convert<::color::category::cmy_uint32,::color::category::gray_ldouble> : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint32,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::cmy_uint64,::color::category::gray_uint8  > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint64,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::cmy_uint64,::color::category::gray_uint16 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint64,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::cmy_uint64,::color::category::gray_uint32 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint64,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::cmy_uint64,::color::category::gray_uint64 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint64,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::cmy_uint64,::color::category::gray_float  > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint64,::color::category::gray_float  >{};
     template< > struct convert<::color::category::cmy_uint64,::color::category::gray_double > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint64,::color::category::gray_double >{};
     template< > struct convert<::color::category::cmy_uint64,::color::category::gray_ldouble> : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_uint64,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::cmy_float,::color::category::gray_uint8  > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_float,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::cmy_float,::color::category::gray_uint16 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_float,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::cmy_float,::color::category::gray_uint32 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_float,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::cmy_float,::color::category::gray_uint64 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_float,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::cmy_float,::color::category::gray_float  > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_float,::color::category::gray_float  >{};
     template< > struct convert<::color::category::cmy_float,::color::category::gray_double > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_float,::color::category::gray_double >{};
     template< > struct convert<::color::category::cmy_float,::color::category::gray_ldouble> : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_float,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::cmy_double,::color::category::gray_uint8  > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_double,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::cmy_double,::color::category::gray_uint16 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_double,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::cmy_double,::color::category::gray_uint32 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_double,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::cmy_double,::color::category::gray_uint64 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_double,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::cmy_double,::color::category::gray_float  > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_double,::color::category::gray_float  >{};
     template< > struct convert<::color::category::cmy_double,::color::category::gray_double > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_double,::color::category::gray_double >{};
     template< > struct convert<::color::category::cmy_double,::color::category::gray_ldouble> : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_double,::color::category::gray_ldouble>{};

     template< > struct convert<::color::category::cmy_ldouble,::color::category::gray_uint8  > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_ldouble,::color::category::gray_uint8  >{};
     template< > struct convert<::color::category::cmy_ldouble,::color::category::gray_uint16 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_ldouble,::color::category::gray_uint16 >{};
     template< > struct convert<::color::category::cmy_ldouble,::color::category::gray_uint32 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_ldouble,::color::category::gray_uint32 >{};
     template< > struct convert<::color::category::cmy_ldouble,::color::category::gray_uint64 > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_ldouble,::color::category::gray_uint64 >{};
     template< > struct convert<::color::category::cmy_ldouble,::color::category::gray_float  > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_ldouble,::color::category::gray_float  >{};
     template< > struct convert<::color::category::cmy_ldouble,::color::category::gray_double > : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_ldouble,::color::category::gray_double >{};
     template< > struct convert<::color::category::cmy_ldouble,::color::category::gray_ldouble> : public ::color::_internal::_privateCMY::convert_gray2cmy<::color::category::cmy_ldouble,::color::category::gray_ldouble>{};


   }
 }

#endif