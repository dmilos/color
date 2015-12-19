#ifndef color_rgb_convert_hsl
#define color_rgb_convert_hsl

#include "../../_internal/convert.hpp"
#include "../../hsl/hsl.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateRGB
     {

      template< typename category_left_name, typename category_right_name, typename float_name = double >
       struct convert_hsl2rgb
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;
           typedef float_name  float_type;

           typedef ::color::_internal::container<category_left_type>     container_left_trait_type;
           typedef ::color::_internal::container<category_right_type>    container_right_trait_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           typedef ::color::_internal::diverse< category_left_type, float_type >    diverse_type;
           typedef ::color::_internal::normalize< category_right_type, float_type > normalize_type;
           
           typedef ::color::_internal::_privateRGB::convert_hsl2rgb<category_left_name, category_right_name, float_name> this_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             float_type h = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             float_type s = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             float_type l = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             float_type r;
             float_type g;
             float_type b;

             if ( s == 0 )
              {
               r = l;
               g = l;
               b = l;
              }
             else
              {
               float_type q = l < float_type(0.5) ? (l * (1 + s)) : ( l + s - l * s );
               float_type p = float_type(2) * l - q;

               r = this_type::value( p, q, h + ( float_type(1) / float_type(3) ) + ( float_type(2) / float_type(3) < h ? -1 :0 ) );
               g = this_type::value( p, q, h );
               b = this_type::value( p, q, h - ( float_type(1) / float_type(3) ) + ( h < float_type(1) / float_type(3) ? +1 :0 ) );
              }

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( r ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( g ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( b ) );
            }

         private:
           static float_type value(  float_type const& p, float_type const& q, float_type const& t )
            {
             if( t < float_type(1)/float_type(6) ) return ( p + ( q - p ) * float_type(6) * t );
             if( t < float_type(1)/float_type(2) ) return ( q );
             if( t < float_type(2)/float_type(3) ) return ( p + ( q - p ) * ( ( float_type(2)/float_type(3) ) - t ) * float_type(6) );
             return p ;
           }
        };

     }

     template< > struct convert<::color::category::rgb_uint8,::color::category::hsl_uint8  > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint8,::color::category::hsl_uint8  >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::hsl_uint16 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint8,::color::category::hsl_uint16 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::hsl_uint32 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint8,::color::category::hsl_uint32 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::hsl_uint64 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint8,::color::category::hsl_uint64 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::hsl_float  > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint8,::color::category::hsl_float  >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::hsl_double > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint8,::color::category::hsl_double >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::hsl_ldouble> : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint8,::color::category::hsl_ldouble>{};

     template< > struct convert<::color::category::rgb_uint16,::color::category::hsl_uint8  > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint16,::color::category::hsl_uint8  >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::hsl_uint16 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint16,::color::category::hsl_uint16 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::hsl_uint32 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint16,::color::category::hsl_uint32 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::hsl_uint64 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint16,::color::category::hsl_uint64 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::hsl_float  > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint16,::color::category::hsl_float  >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::hsl_double > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint16,::color::category::hsl_double >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::hsl_ldouble> : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint16,::color::category::hsl_ldouble>{};

     template< > struct convert<::color::category::rgb_uint32,::color::category::hsl_uint8  > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint32,::color::category::hsl_uint8  >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::hsl_uint16 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint32,::color::category::hsl_uint16 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::hsl_uint32 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint32,::color::category::hsl_uint32 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::hsl_uint64 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint32,::color::category::hsl_uint64 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::hsl_float  > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint32,::color::category::hsl_float  >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::hsl_double > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint32,::color::category::hsl_double >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::hsl_ldouble> : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint32,::color::category::hsl_ldouble>{};

     template< > struct convert<::color::category::rgb_uint64,::color::category::hsl_uint8  > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint64,::color::category::hsl_uint8  >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::hsl_uint16 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint64,::color::category::hsl_uint16 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::hsl_uint32 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint64,::color::category::hsl_uint32 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::hsl_uint64 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint64,::color::category::hsl_uint64 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::hsl_float  > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint64,::color::category::hsl_float  >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::hsl_double > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint64,::color::category::hsl_double >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::hsl_ldouble> : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_uint64,::color::category::hsl_ldouble>{};

     template< > struct convert<::color::category::rgb_float,::color::category::hsl_uint8  > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_float,::color::category::hsl_uint8  >{};
     template< > struct convert<::color::category::rgb_float,::color::category::hsl_uint16 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_float,::color::category::hsl_uint16 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::hsl_uint32 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_float,::color::category::hsl_uint32 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::hsl_uint64 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_float,::color::category::hsl_uint64 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::hsl_float  > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_float,::color::category::hsl_float  >{};
     template< > struct convert<::color::category::rgb_float,::color::category::hsl_double > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_float,::color::category::hsl_double >{};
     template< > struct convert<::color::category::rgb_float,::color::category::hsl_ldouble> : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_float,::color::category::hsl_ldouble>{};

     template< > struct convert<::color::category::rgb_double,::color::category::hsl_uint8  > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_double,::color::category::hsl_uint8  >{};
     template< > struct convert<::color::category::rgb_double,::color::category::hsl_uint16 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_double,::color::category::hsl_uint16 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::hsl_uint32 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_double,::color::category::hsl_uint32 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::hsl_uint64 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_double,::color::category::hsl_uint64 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::hsl_float  > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_double,::color::category::hsl_float  >{};
     template< > struct convert<::color::category::rgb_double,::color::category::hsl_double > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_double,::color::category::hsl_double >{};
     template< > struct convert<::color::category::rgb_double,::color::category::hsl_ldouble> : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_double,::color::category::hsl_ldouble>{};

     template< > struct convert<::color::category::rgb_ldouble,::color::category::hsl_uint8  > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_ldouble,::color::category::hsl_uint8  >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::hsl_uint16 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_ldouble,::color::category::hsl_uint16 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::hsl_uint32 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_ldouble,::color::category::hsl_uint32 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::hsl_uint64 > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_ldouble,::color::category::hsl_uint64 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::hsl_float  > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_ldouble,::color::category::hsl_float  >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::hsl_double > : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_ldouble,::color::category::hsl_double >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::hsl_ldouble> : public ::color::_internal::_privateRGB::convert_hsl2rgb<::color::category::rgb_ldouble,::color::category::hsl_ldouble>{};


   }
 }

#endif
// TODO