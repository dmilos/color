#ifndef color_xyz_convert_rgb
#define color_xyz_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/rgb.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateXYZ
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_rgb2xyz
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;
           typedef scalar_name  scalar_type;

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
             static scalar_type mc = 0.17697;
             static scalar_type b11 = 0.49000/mc, b12 = 0.31000/mc, b13 = 0.20000/mc;
             static scalar_type b21 = 0.17697/mc, b22 = 0.81240/mc, b23 = 0.01063/mc;
             static scalar_type b31 = 0.00000/mc, b32 = 0.01000/mc, b33 = 0.99000/mc;

             scalar_type r = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             scalar_type g = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             scalar_type b = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( b11 * r + b12 * g + b13 * b ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( b21 * r + b22 * g + b23 * b ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( b31 * r + b32 * g + b33 * b ) );
            }
        };

     }

     template< > struct convert<::color::category::xyz_uint8,::color::category::rgb_uint8  > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint8,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::xyz_uint8,::color::category::rgb_uint16 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint8,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::xyz_uint8,::color::category::rgb_uint32 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint8,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::xyz_uint8,::color::category::rgb_uint64 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint8,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::xyz_uint8,::color::category::rgb_float  > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint8,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::xyz_uint8,::color::category::rgb_double > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint8,::color::category::rgb_double >{};
     template< > struct convert<::color::category::xyz_uint8,::color::category::rgb_ldouble> : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint8,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::xyz_uint16,::color::category::rgb_uint8  > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint16,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::xyz_uint16,::color::category::rgb_uint16 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint16,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::xyz_uint16,::color::category::rgb_uint32 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint16,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::xyz_uint16,::color::category::rgb_uint64 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint16,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::xyz_uint16,::color::category::rgb_float  > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint16,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::xyz_uint16,::color::category::rgb_double > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint16,::color::category::rgb_double >{};
     template< > struct convert<::color::category::xyz_uint16,::color::category::rgb_ldouble> : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint16,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::xyz_uint32,::color::category::rgb_uint8  > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint32,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::xyz_uint32,::color::category::rgb_uint16 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint32,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::xyz_uint32,::color::category::rgb_uint32 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint32,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::xyz_uint32,::color::category::rgb_uint64 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint32,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::xyz_uint32,::color::category::rgb_float  > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint32,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::xyz_uint32,::color::category::rgb_double > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint32,::color::category::rgb_double >{};
     template< > struct convert<::color::category::xyz_uint32,::color::category::rgb_ldouble> : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint32,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::xyz_uint64,::color::category::rgb_uint8  > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint64,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::xyz_uint64,::color::category::rgb_uint16 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint64,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::xyz_uint64,::color::category::rgb_uint32 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint64,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::xyz_uint64,::color::category::rgb_uint64 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint64,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::xyz_uint64,::color::category::rgb_float  > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint64,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::xyz_uint64,::color::category::rgb_double > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint64,::color::category::rgb_double >{};
     template< > struct convert<::color::category::xyz_uint64,::color::category::rgb_ldouble> : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_uint64,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::xyz_float,::color::category::rgb_uint8  > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_float,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::xyz_float,::color::category::rgb_uint16 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_float,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::xyz_float,::color::category::rgb_uint32 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_float,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::xyz_float,::color::category::rgb_uint64 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_float,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::xyz_float,::color::category::rgb_float  > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_float,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::xyz_float,::color::category::rgb_double > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_float,::color::category::rgb_double >{};
     template< > struct convert<::color::category::xyz_float,::color::category::rgb_ldouble> : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_float,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::xyz_double,::color::category::rgb_uint8  > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_double,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::xyz_double,::color::category::rgb_uint16 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_double,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::xyz_double,::color::category::rgb_uint32 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_double,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::xyz_double,::color::category::rgb_uint64 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_double,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::xyz_double,::color::category::rgb_float  > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_double,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::xyz_double,::color::category::rgb_double > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_double,::color::category::rgb_double >{};
     template< > struct convert<::color::category::xyz_double,::color::category::rgb_ldouble> : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_double,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::xyz_ldouble,::color::category::rgb_uint8  > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_ldouble,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::xyz_ldouble,::color::category::rgb_uint16 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_ldouble,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::xyz_ldouble,::color::category::rgb_uint32 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_ldouble,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::xyz_ldouble,::color::category::rgb_uint64 > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_ldouble,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::xyz_ldouble,::color::category::rgb_float  > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_ldouble,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::xyz_ldouble,::color::category::rgb_double > : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_ldouble,::color::category::rgb_double >{};
     template< > struct convert<::color::category::xyz_ldouble,::color::category::rgb_ldouble> : public ::color::_internal::_privateXYZ::convert_rgb2xyz<::color::category::xyz_ldouble,::color::category::rgb_ldouble>{};


   }
 }

#endif
