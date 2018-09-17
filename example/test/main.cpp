#include <vector>
#include <fstream>
#include <typeinfo>
#include <cstring>
#include <iostream>
#include <iomanip>

#include "color/color.hpp"

#include "./model/invoke.hpp"
#include "./model/operation.hpp"
#include "./model/reformat.hpp"
#include "./model/set.hpp"
#include "./model/get.hpp"
#include "./model/conversion.hpp"

#include "./targa.hpp"

template < typename category_name >
void print()
 {
  typedef category_name category_t;

  std::cout << "**************************************************************************************************************"  << std::endl;
  typedef ::color::model<category_t> model_t;                                                     std::cout << "model_t                        " << typeid( model_t ).name() << std::endl;

  typedef ::color::trait::index< category_name >                index_trait_type;                 std::cout << "index_trait_type               " << typeid( index_trait_type ).name() << std::endl;
  typedef ::color::trait::component< category_name >            component_trait_type;             std::cout << "component_trait_type           " << typeid( component_trait_type ).name() << std::endl;
  typedef ::color::trait::container< category_name >            container_trait_type;             std::cout << "container_trait_type           " << typeid( container_trait_type ).name() << std::endl;
  typedef ::color::trait::bound< category_name >                bound_trait_type, bound_type;     std::cout << "bound_trait_type, bound_type   " << typeid( bound_trait_type ).name() << std::endl;
  typedef ::color::trait::scalar< category_name >               scalar_trait_type;                std::cout << "scalar_trait_type              " << typeid( scalar_trait_type ).name() << std::endl;

  typedef typename index_trait_type::instance_type              index_type;                       std::cout << "index_type                     " << typeid( index_type ).name() << std::endl;
  typedef typename index_trait_type::const_type                 index_const_type;                 std::cout << "index_const_type               " << typeid( index_const_type ).name() << std::endl;
  typedef typename index_trait_type::model_type           index_input_const_type;           std::cout << "index_input_const_type         " << typeid( index_input_const_type ).name() << std::endl;
  typedef typename index_trait_type::return_image_type          index_return_image_type;          std::cout << "index_return_image_type        " << typeid( index_return_image_type ).name() << std::endl;

  typedef typename component_trait_type::instance_type          component_type;                   std::cout << "component_type                 " << typeid( component_type ).name() << std::endl;
  typedef typename component_trait_type::const_type             component_const_type;             std::cout << "component_const_type           " << typeid( component_const_type ).name() << std::endl;
  typedef typename component_trait_type::return_image_type      component_return_const_type;      std::cout << "component_return_const_type    " << typeid( component_return_const_type ).name() << std::endl;
  typedef typename component_trait_type::return_type            component_return_type;            std::cout << "component_return_type          " << typeid( component_return_type ).name() << std::endl;
  typedef typename component_trait_type::model_type       component_input_const_type;       std::cout << "component_input_const_type     " << typeid( component_input_const_type ).name() << std::endl;
  typedef typename component_trait_type::input_type             component_input_type;             std::cout << "component_input_type           " << typeid( component_input_type ).name() << std::endl;

  typedef typename container_trait_type::instance_type          container_type;                   std::cout << "container_type                 " << typeid( container_type ).name() << std::endl;
  typedef typename container_trait_type::const_type             container_const_type;             std::cout << "container_const_type           " << typeid( container_const_type ).name() << std::endl;
  typedef typename container_trait_type::return_image_type      container_return_const_type;      std::cout << "container_return_const_type    " << typeid( container_return_const_type ).name() << std::endl;
  typedef typename container_trait_type::return_original_type   container_return_original_type;   std::cout << "container_return_original_type " << typeid( container_return_original_type ).name() << std::endl;
  typedef typename container_trait_type::model_type       container_input_const_type;       std::cout << "container_input_const_type     " << typeid( container_input_const_type ).name() << std::endl;
  typedef typename container_trait_type::input_type             container_input_type;             std::cout << "container_input_type           " << typeid( container_input_type ).name() << std::endl;
  std::cout << "**************************************************************************************************************"  << std::endl;
 }

void sandbox_test2( ::color::rgb<double>  r, std::string const& s )
 {
  ::color::hsi<double>  h;
  std::cout << "----" << s <<std::endl;
  std::cout << "Original RGB: " << r[0] << ", " << r[1] << ", " <<r[2] << std::endl;
  h = r; r = h;
  std::cout << "BAck     RGB: " << r[0] << ", " << r[1] << ", " <<r[2] << std::endl;
  std::cout << "HSV: " << h[0] << ", " << h[1] << ", " << h[2] << std::endl;
  std::cout << "*******" << std::endl;
 }

void sandbox_test3()
 {
  ::color::luv< long double>  a;
  ::color::xyy<long double>   b{ ::color::constant::white_t{} };
  ::color::rgb<long double>   r{ ::color::constant::white_t{} };
  ::color::gray<long double>  g{ ::color::constant::white_t{} };

  r[0] = 0;
  r[1] = 0.5;
  r[2] = 0.5;

  a = b;
  b = a;
 }

void sandbox_test4()
 {
  ::color::hwb<double> h= color::constant::turquoise_t{};
  ::color::rgb<double> r= color::constant::turquoise_t{};
  ::color::lab<double> l;

  h = r;

  l = r;
  std::cout << ::color::get::gray< ::color::get::constant::rgb::gray::lightness_entity >( r ) << std::endl;

 }

void sandbox_test5()
 {
  ::color::rgb< float > r = ::color::constant::aqua_t{};
  ::color::xyz< float > x { {50,50,50} };
  ::color::lab< float, ::color::constant::lab::CIE_entity  >    l0 = ::color::constant::aqua_t{};
  ::color::lab< float, ::color::constant::lab::Hunter_entity  > l1 = ::color::constant::aqua_t{};

  //r = l0;
  //r = l1;

  l1.set( {50,50,50} );
  x  = l1;
  l1 =  x;

  x.set( {50,50,50} );
  l1 = x;
  x = l1;

}

void sandbox_test6()
 {
  ::color::lab< std::uint8_t >    l8 = ::color::constant::orange_t{};  print(    l8 );  std::cout << std::endl;
  ::color::lab< std::uint16_t >  l16 = ::color::constant::orange_t{};  print(   l16 );  std::cout << std::endl;
  ::color::lab< std::uint32_t >  l32 = ::color::constant::orange_t{};  print(   l32 );  std::cout << std::endl;
  ::color::lab< std::uint64_t >  l64 = ::color::constant::orange_t{};  print(   l64 );  std::cout << std::endl;
  ::color::lab< std::int8_t >    li8 = ::color::constant::orange_t{};  print(   li8 );  std::cout << std::endl;
  ::color::lab< std::int16_t >  li16 = ::color::constant::orange_t{};  print(  li16 );  std::cout << std::endl;
  ::color::lab< std::int32_t >  li32 = ::color::constant::orange_t{};  print(  li32 );  std::cout << std::endl;
  ::color::lab< double >          ld = ::color::constant::orange_t{};  print(    ld );  std::cout << std::endl;
  ::color::xyz< double >           x = ::color::constant::orange_t{};  print(     x );  std::cout << std::endl;

  std::cout << (int)::color::get::chroma(    l8 ) << std::endl;
  std::cout <<      ::color::get::chroma(   l16 ) << std::endl;
  std::cout <<      ::color::get::chroma(   l32 ) << std::endl;
  std::cout <<      ::color::get::chroma(   l64 ) << std::endl;
  std::cout << (int)::color::get::chroma(   li8 ) << std::endl;
  std::cout <<      ::color::get::chroma(  li16 ) << std::endl;
  std::cout <<      ::color::get::chroma(    ld ) << std::endl;
  std::cout <<      ::color::get::chroma(     x ) << std::endl;

  l8  =  l8;
  l8  = l16;
  l8  = li8;
  l8 = li16;
  l8 =   ld;
  l8 =    x;

  l16  =  l8;
  l16  = l16;
  l16  = li8;
  l16 = li16;
  l16 =   ld;
  l16 =    x;

  li8  =  l8;
  li8  = l16;
  li8  = li8;
  li8 = li16;
  li8 =   ld;
  li8 =    x;

  li16 =  l8;
  li16 = l16;
  li16 = li8;
  li16= li16;
  li16=   ld;
  li16=    x;

  ld   =  l8;
  ld   = l16;
  ld   = li8;
  ld  = li16;
  ld  =   ld;
  ld  =    x;

   x   =  l8;
   x   = l16;
   x   = li8;
   x  = li16;
   x  =   ld;
   x  =    x;

 }

void luv_bound()
 {
  typedef long double scalar_type;
  typedef ::color::constant::xyz::illuminant::point< scalar_type, ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity  > white_point_type;

  static scalar_type u0 = 4* white_point_type::X()/( white_point_type::X() +  15*white_point_type::Y() + 3*white_point_type::Z() );
  static scalar_type v0 = 9* white_point_type::Y()/( white_point_type::X() +  15*white_point_type::Y() + 3*white_point_type::Z() );

  scalar_type l,u,v;
  scalar_type l_min = +1e6,u_min = +1e6,v_min = +1e6;
  scalar_type l_max = -1e6,u_max = -1e6,v_max = -1e6;

  scalar_type vx_min=0.000000001;  scalar_type vx_max=0.000000001;
  scalar_type vy_min=0.000000001;  scalar_type vy_max=0.000000001;
  scalar_type vz_min=0.000000001;  scalar_type vz_max=0.000000001;

  scalar_type ux_min=0.000000001;  scalar_type ux_max=0.000000001;
  scalar_type uy_min=0.000000001;  scalar_type uy_max=0.000000001;
  scalar_type uz_min=0.000000001;  scalar_type uz_max=0.000000001;

  scalar_type lx_min=0.000000001;  scalar_type lx_max=0.000000001;
  scalar_type ly_min=0.000000001;  scalar_type ly_max=0.000000001;
  scalar_type lz_min=0.000000001;  scalar_type lz_max=0.000000001;

  scalar_type x=100;
  //scalar_type y=100;
  scalar_type z=100;

 // for( scalar_type x=0.00001; x < 101; x+=1 )
   for( scalar_type y=12.206940; y < 12.20695; y += scalar_type(0.00000000001) )
    //for( scalar_type z=0.00001; z < 101; z+=1  )
     {
     ::color::_internal::constant::luv< scalar_type >::xyz2luv( x,y,z,l,u,v  );

      if( l < l_min ) { lx_min = x;  ly_min = y; lz_min = z; l_min = l; }
      if( u < u_min ) { ux_min = x; uy_min = y; uz_min = z; u_min = u; }
      if( v < v_min ) { vx_min = x; vy_min = y; vz_min = z; v_min = v; }

      if( l_max < l ) { lx_max = x; ly_max = y; lz_max = z; l_max = l; }
      if( u_max < u ) { ux_max = x; uy_max = y; uz_max = z; u_max = u; }
      if( v_max < v ) { vx_max = x; vy_max = y; vz_max = z; v_max = v; }
     }

  std::cout<< "l[" << l_min<<","<< l_max<<" ]" << "u[ " << u_min<<","<< u_max<<" ]" << "v[ " << v_min<<","<< v_max<<" ]" << std::endl;

  std::cout << "l_min:x: " << std::setprecision(20) << lx_min << std::endl;
  std::cout << "l_min:y: " << std::setprecision(20) << ly_min << std::endl;
  std::cout << "l_min:z: " << std::setprecision(20) << lz_min << std::endl;
  std::cout << "l_max:x: " << std::setprecision(20) << lx_max << std::endl;
  std::cout << "l_max:y: " << std::setprecision(20) << ly_max << std::endl;
  std::cout << "l_max:z: " << std::setprecision(20) << lz_max << std::endl;

  std::cout << "u_min:x: " << std::setprecision(20) << ux_min << std::endl;
  std::cout << "u_min:y: " << std::setprecision(20) << uy_min << std::endl;
  std::cout << "u_min:z: " << std::setprecision(20) << uz_min << std::endl;
  std::cout << "u_max:x: " << std::setprecision(20) << ux_max << std::endl;
  std::cout << "u_max:y: " << std::setprecision(20) << uy_max << std::endl;
  std::cout << "u_max:z: " << std::setprecision(20) << uz_max << std::endl;

  std::cout << "v_min:x: " << std::setprecision(25) << vx_min << std::endl;
  std::cout << "v_min:y: " << std::setprecision(25) << vy_min << std::endl;
  std::cout << "v_min:z: " << std::setprecision(25) << vz_min << std::endl;
  std::cout << "v_max:x: " << std::setprecision(25) << vx_max << std::endl;
  std::cout << "v_max:y: " << std::setprecision(25) << vy_max << std::endl;
  std::cout << "v_max:z: " << std::setprecision(25) << vz_max << std::endl;

  //std::cin.get();
 }

void LabCH_test( )
 {
  const color::rgb<double>   rC = ::color::constant::brown_t{};
  color::rgb<double>   r = ::color::constant::brown_t{};
  color::xyz<double>   xa = ::color::constant::brown_t{};
  color::xyz<double>   xb = ::color::constant::brown_t{};
  color::lab<double>   l0a = ::color::constant::brown_t{};
  color::lab<double>   l0b = ::color::constant::brown_t{};

  color::gray<double>   g0 = ::color::constant::brown_t{};
  color::gray<double>   g1 = ::color::constant::brown_t{};
  color::gray<double>   g2 = ::color::constant::brown_t{};

  color::LuvCH<double> lx = ::color::constant::brown_t{};
  color::LuvCH<double> ll;
  color::LuvCH<double> lr;

  g0 = lx ;
  lx = g0;

  lx = xa;
  ll = l0a;
  lr = r;
  r = lr;

  //l1  = l0a;
  l0a = l0b;
  //l1  = l1;

  r[0];

#define TEST(e)                                   \
  r[0]=0; r[1]=0.5; r[2]=0.5;                     \
  std::cout << "r[0]= " << r[0] <<" ; " ;     \
  std::cout << "r[0]= " << r[1] <<" ; " ;     \
  std::cout << "r[0]= " << r[2] <<" ; " ;     \
  std::cout << #e << " *** " ;                      \
  e;                                              \
  std::cout << "r[0]= " << r[0] <<" ; " ;     \
  std::cout << "r[1]= " << r[1] <<" ; " ;     \
  std::cout << "r[2]= " << r[2] <<" ; " ;  \
  std::cout << std::endl ;

  r[0]=1;
  r[0]=1;
  r[0]=1;

  TEST( r[0]=1 );

  TEST( r[0]= - r[0] );
  TEST( r[0]= + r[0] );

  TEST( r[0] += 1 );
  TEST( r[0] -= 1 );
  TEST( r[0] /= 1 );
  TEST( r[0] *= 1 );

  TEST( r[0] += 1.0 );
  TEST( r[0] -= 1.0 );
  TEST( r[0] /= 1.0 );
  TEST( r[0] *= 1.0 );

  TEST( r[0] = r[1] );


  TEST( r[0] += r[1] );
  TEST( r[0] -= r[1] );
  TEST( r[0] /= r[1] );
  TEST( r[0] *= r[1] );

  TEST( r[0]= r[1] + 1 );
  TEST( r[0]= r[1] - 1 );
  TEST( r[0]= r[1] * 1 );
  TEST( r[0]= r[1] / 1 );

  TEST( r[0]=1 - r[1] );
  TEST( r[0]=1 + r[1] );
  TEST( r[0]=1 * r[1] );
  TEST( r[0]=1 / r[1] );

  TEST( r[0] = r[1] - r[2] );
  TEST( r[0] = r[1] + r[2] );
  TEST( r[0] = r[1] * r[2] );
  TEST( r[0] = r[1] / r[2] );

  TEST( r[1] = r[0]++ );
  TEST( r[1] = ++r[0] );

  TEST( r[1] = r[0]-- );
  TEST( r[1] = --r[0]  );
 }

void sandbox_test()
 {
  ::color::hsi<double>  h;
  ::color::rgb<double>  r;

  h.container( { 240, 100, 10 } );  r = h;
  h.container( { 240, 100, 30 } );  r = h;
  h.container( { 240, 100, 33 } );  r = h;
  h.container( { 240, 100, 34 } );  r = h;
  h.container( { 240, 100, 67 } );  r = h;
  h.container( { 240, 100, 68 } );  r = h;
  h.container( { 240, 100, 100 } );  r = h;

  h.container( { 250, 75.6, 42.6 } );  r = h;

  sandbox_test2( ::color::rgb<double>(::color::constant::gold_t{}), "gold" );
  sandbox_test2( ::color::rgb<double>(::color::constant::red_t{} ), "red"  );
  sandbox_test2( ::color::rgb<double>(::color::constant::lime_t{}), "lime" );
  sandbox_test2( ::color::rgb<double>(::color::constant::blue_t{}), "blue" );

  sandbox_test2( ::color::rgb<double>{ 1.000, 1.000, 0.5    }, "    ???°           ?????          ?????       " );
  sandbox_test2( ::color::rgb<double>{ 1.000, 1.000, 1.000, }, "    n/a            0.000          1.000       " );
  sandbox_test2( ::color::rgb<double>{ 0.500, 0.500, 0.500, }, "    n/a            0.000          0.500       " );
  sandbox_test2( ::color::rgb<double>{ 0.000, 0.000, 0.000, }, "    n/a            0.000          0.000       " );
  sandbox_test2( ::color::rgb<double>{ 1.000, 0.000, 0.000, }, "    0.0°           1.000          0.333       " );
  sandbox_test2( ::color::rgb<double>{ 0.750, 0.750, 0.000, }, "   60.0°           1.000          0.500       " );
  sandbox_test2( ::color::rgb<double>{ 0.000, 0.500, 0.000, }, "  120.0°           1.000          0.167       " );
  sandbox_test2( ::color::rgb<double>{ 0.500, 1.000, 1.000, }, "  180.0°           0.400          0.833       " );
  sandbox_test2( ::color::rgb<double>{ 0.500, 0.500, 1.000, }, "  240.0°           0.250          0.667       " );
  sandbox_test2( ::color::rgb<double>{ 0.750, 0.250, 0.750, }, "  300.0°           0.571          0.583       " );
  sandbox_test2( ::color::rgb<double>{ 0.628, 0.643, 0.142, }, "   61.5°           0.699          0.471       " );
  sandbox_test2( ::color::rgb<double>{ 0.255, 0.104, 0.918, }, "  250.0°           0.756          0.426       " );
  sandbox_test2( ::color::rgb<double>{ 0.116, 0.675, 0.255, }, "  133.8°           0.667          0.349       " );
  sandbox_test2( ::color::rgb<double>{ 0.941, 0.785, 0.053, }, "   50.5°           0.911          0.593       " );
  sandbox_test2( ::color::rgb<double>{ 0.704, 0.187, 0.897, }, "  284.8°           0.686          0.596       " );
  sandbox_test2( ::color::rgb<double>{ 0.931, 0.463, 0.316, }, "   13.2°           0.446          0.570       " );
  sandbox_test2( ::color::rgb<double>{ 0.998, 0.974, 0.532, }, "   57.4°           0.363          0.835       " );
  sandbox_test2( ::color::rgb<double>{ 0.099, 0.795, 0.591, }, "  163.4°           0.800          0.495       " );
  sandbox_test2( ::color::rgb<double>{ 0.211, 0.149, 0.597, }, "  247.3°           0.533          0.319       " );
  sandbox_test2( ::color::rgb<double>{ 0.495, 0.493, 0.721, }, "  240.4°           0.135          0.570       " );
 }

void ctor_test()
 {
  ::color::rgb<double> r{ ::color::constant::aqua_t{} };
  ::color::rgb<double> x{ ::color::constant::turquoise_t{} };
  ::color::rgb<double>{ ::color::constant::black_t{} };
  ::color::rgb<double>( {1,2,3} );

  r = ::color::constant::turquoise_t{};
  x = ::color::constant::orange_t{};
  r[0] = 0.1;
  std::cout << r[0] << std::endl;
 }

void invoke()
 {
  test_invoke< color::category::rgb_uint8   >();
  test_invoke< color::category::rgb_uint16  >();
  test_invoke< color::category::rgb_uint32  >();
  test_invoke< color::category::rgb_uint64  >();
  test_invoke< color::category::rgb_float   >();
  test_invoke< color::category::rgb_double  >();
  test_invoke< color::category::rgb_ldouble >();

  test_operation< color::category::gray_uint8   >();
  test_operation< color::category::gray_uint16  >();
  test_operation< color::category::gray_uint32  >();
  test_operation< color::category::gray_uint64  >();
  test_operation< color::category::gray_float   >();
  test_operation< color::category::gray_double  >();
  test_operation< color::category::gray_ldouble >();

  test_operation< color::category::cmy_uint8   >();
  test_operation< color::category::cmy_uint16  >();
  test_operation< color::category::cmy_uint32  >();
  test_operation< color::category::cmy_uint64  >();
  test_operation< color::category::cmy_float   >();
  test_operation< color::category::cmy_double  >();
  test_operation< color::category::cmy_ldouble >();

  test_operation< color::category::cmyk_uint8   >();
  test_operation< color::category::cmyk_uint16  >();
  test_operation< color::category::cmyk_uint32  >();
  test_operation< color::category::cmyk_uint64  >();
  test_operation< color::category::cmyk_float   >();
  test_operation< color::category::cmyk_double  >();
  test_operation< color::category::cmyk_ldouble >();

  test_operation< color::category::hsl_uint8   >();
  test_operation< color::category::hsl_uint16  >();
  test_operation< color::category::hsl_uint32  >();
  test_operation< color::category::hsl_uint64  >();
  test_operation< color::category::hsl_float   >();
  test_operation< color::category::hsl_double  >();
  test_operation< color::category::hsl_ldouble >();

  test_operation< color::category::hsv_uint8   >();
  test_operation< color::category::hsv_uint16  >();
  test_operation< color::category::hsv_uint32  >();
  test_operation< color::category::hsv_uint64  >();
  test_operation< color::category::hsv_float   >();
  test_operation< color::category::hsv_double  >();
  test_operation< color::category::hsv_ldouble >();

  test_operation< color::category::hsi_uint8   >();
  test_operation< color::category::hsi_uint16  >();
  test_operation< color::category::hsi_uint32  >();
  test_operation< color::category::hsi_uint64  >();
  test_operation< color::category::hsi_float   >();
  test_operation< color::category::hsi_double  >();
  test_operation< color::category::hsi_ldouble >();

  test_operation< color::category::hwb_uint8   >();
  test_operation< color::category::hwb_uint16  >();
  test_operation< color::category::hwb_uint32  >();
  test_operation< color::category::hwb_uint64  >();
  test_operation< color::category::hwb_float   >();
  test_operation< color::category::hwb_double  >();
  test_operation< color::category::hwb_ldouble >();

  test_operation< color::category::rgb_uint8   >();
  test_operation< color::category::rgb_uint16  >();
  test_operation< color::category::rgb_uint32  >();
  test_operation< color::category::rgb_uint64  >();
  test_operation< color::category::rgb_float   >();
  test_operation< color::category::rgb_double  >();
  test_operation< color::category::rgb_ldouble >();


  /*test_make< color::category::rgb_uint8   >();
  test_make< color::category::rgb_uint16  >();
  test_make< color::category::rgb_uint32  >();
  test_make< color::category::rgb_uint64  >();
  test_make< color::category::rgb_float   >();
  test_make< color::category::rgb_double  >();
  test_make< color::category::rgb_ldouble >();*/

  test_conversion< color::rgb, color::rgb >();
  test_conversion< color::rgb, color::cmy >();
  test_conversion< color::rgb, color::gray >();
  test_conversion< color::rgb, color::yiq >();
//  test_conversion< color::rgb, color::yuv >();

  test_conversion< color::cmy, color::cmy >();
  test_conversion< color::cmy, color::rgb >();
  test_conversion< color::cmy, color::cmyk >();
  test_conversion< color::cmy, color::gray >();

  test_conversion< color::gray, color::gray >();
  test_conversion< color::gray, color::rgb >();
  test_conversion< color::gray, color::cmy >();
  test_conversion< color::gray, color::hsl >();
  test_conversion< color::gray, color::hsv >();
  test_conversion< color::gray, color::yiq >();
  //test_conversion< color::gray, color::yuv >();

  test_conversion< color::yiq, color::yiq >();
  test_conversion< color::yiq, color::rgb >();

  //test_conversion< color::yuv, color::yuv >();
//  test_conversion< color::yuv, color::rgb >();

 }

void make_blue()
 {
  int height = 256;
  int width  = 256;

  targa_header_struct header;

  targa_make_header( width, height, header);

  std::vector< color::bgra<std::uint8_t> >   image( height * width );

  memset( (void * )image.data(), 255, image.size() * sizeof( color::bgra<std::uint8_t> ) );

  for( auto & c: image )
   {
    c = color::hsl<double>( { 240, 100, 50 } );
   }

   {
    std::ofstream of( "blue.tga", std::ios_base::binary);
    of.write((const char *)header, 18);
    of.write((const char *)image.data(), image.size() * 4);
   }
 }

void test_xyz_quick()
 {
  std::cout << "---------------------------------------------------------------------------------------------------" <<  std::endl;
  ::color::rgb<double>   r{ ::color::constant::gray_t<1,1>{} };
  ::color::gray<double>  g;
  ::color::xyz<double>   x;

  x = r;  std::cout << "x = r; " ; print( x ); std::cout <<  std::endl;
  g = x;  std::cout << "g = x; " ; print( g ); std::cout <<  std::endl;
  r = g;  std::cout << "r = g; " ; print( r ); std::cout <<  std::endl;

  std::cout << "-----------" <<  std::endl;
  r = ::color::constant::gray_t<1,1>{};
  g = r;  std::cout << "g = r; "; print( g ); std::cout << std::endl;
  x = g;  std::cout << "x = g; "; print( x ); std::cout << std::endl;
  r = x;  std::cout << "r = x; "; print( x ); std::cout << std::endl;
  std::cout << "-----------" <<  std::endl;

  r.set<0>( 0.2 ); r.set<1>( 0.2 ); r.set<2>( 0.2 );
  x = r;  std::cout << "x=rgb( 0.2, 0.2, 0.2 )           "; print( x ); std::cout << std::endl;
  r = x;  std::cout << "r=xyz(rgb( 0.2, 0.2, 0.2 ))      "; print( r ); std::cout << std::endl;

  r[0] = r[1] = r[2] = 0.041;    x = r;  std::cout << "( 0.041, 0.041, 0.041 )      "; print( x ); std::cout << std::endl;

  r = ::color::constant::gray_t<0,1>{};  x = r;  std::cout << "gray_t<0,1>  "; print( x ); std::cout << std::endl;
  r = ::color::constant::gray_t<1,0>{};  x = r;  std::cout << "gray_t<1,0>  "; print( x ); std::cout << std::endl;
  r = ::color::constant::gray_t<1,1>{};  x = r;  std::cout << "gray_t<1,1>  "; print( x ); std::cout << std::endl;

  r = ::color::constant::black_t{};      x = r;  std::cout << "black        "; print( x ); std::cout << std::endl;
  r = ::color::constant::white_t{};      x = r;  std::cout << "white        "; print( x ); std::cout << std::endl;

  r = ::color::constant::red_t{};        x = r;  std::cout << "red          "; print( x ); std::cout << std::endl;
  r = ::color::constant::lime_t{};       x = r;  std::cout << "lime         "; print( x ); std::cout << std::endl;
  r = ::color::constant::blue_t{};       x = r;  std::cout << "blue         "; print( x ); std::cout << std::endl;

  r = ::color::constant::cyan_t{};       x = r;  std::cout << "cyan         "; print( x ); std::cout << std::endl;
  r = ::color::constant::yellow_t{};     x = r;  std::cout << "yellow       "; print( x ); std::cout << std::endl;
  r = ::color::constant::magenta_t{};    x = r;  std::cout << "magenta      "; print( x ); std::cout << std::endl;
  std::cout << "---------------------------------------------------------------------------------------------------" <<  std::endl;

// black        < 0,  0,  0, >
// white        <  95.0470000000000254660, 100.0000000000000000001,  108.8830000000000239900 >
// red          <  41.2456439089692423750,  21.2672851405622651551,    1.9333895582329310159 >
// lime         <  35.7576077643908831760,  71.5152155287817663520,   11.9192025881302932080 >
// blue         <  18.0437483266398928090,   7.2174993306559578343,   95.0304078536367882180 >
// cyan         <  53.8013560910307830910,  78.7327148594377348450,  106.9496104417670778700 >
// yellow       <  77.0032516733601255510,  92.7825006693440315080,   13.8525921463632233350 >
// magenta      <  59.2893922356091422900,  28.4847844712182229900,   96.9637974118697201220 >
 }

void test_yiq2yuv601_quick()
 {
  color::yuv<double, ::color::constant::yuv::BT_601_entity > yuv;
  color::yiq<double> yiq;

  yiq = ::color::constant::gray_t<0,1>{};  std::cout << "gray_t<0,1>  "; print( yiq ); std::cout << std::endl;  // gray_t<0,1>  < 1,  0,  0, >
  yiq = ::color::constant::gray_t<1,0>{};  std::cout << "gray_t<1,0>  "; print( yiq ); std::cout << std::endl;  // gray_t<1,0>  < 0,  0,  0, >
  yiq = ::color::constant::gray_t<1,1>{};  std::cout << "gray_t<1,1>  "; print( yiq ); std::cout << std::endl;  // gray_t<1,1>  < 0.5,  0,  0, >

  yiq = ::color::constant::black_t{};      std::cout << "black        "; print( yiq ); std::cout << std::endl;  //black        < 0,  0,  0, >
  yiq = ::color::constant::white_t{};      std::cout << "white        "; print( yiq ); std::cout << std::endl;  //white        < 0.99999999999999988898,  0,  0, >

  yiq = ::color::constant::red_t{};        std::cout << "red          "; print( yiq ); std::cout << std::endl;  //red          < 0.29899999999999998801,  0.5957161349127745309,  0.21145640212011784786, >
  yiq = ::color::constant::lime_t{};       std::cout << "lime         "; print( yiq ); std::cout << std::endl;  //lime         < 0.58699999999999996625,  -0.27445283783925644716,  -0.52259104529161115593, >
  yiq = ::color::constant::blue_t{};       std::cout << "blue         "; print( yiq ); std::cout << std::endl;  //blue         < 0.11400000000000000411,  -0.32126329707351808374,  0.31113464317149330807, >

  yiq = ::color::constant::cyan_t{};       std::cout << "cyan         "; print( yiq ); std::cout << std::endl;  //cyan         < 0.70099999999999995648,  -0.5957161349127745309,  -0.21145640212011784786, >
  yiq = ::color::constant::yellow_t{};     std::cout << "yellow       "; print( yiq ); std::cout << std::endl;  //yellow       < 0.88599999999999989875,  0.32126329707351808374,  -0.31113464317149330807, >
  yiq = ::color::constant::magenta_t{};    std::cout << "magenta      "; print( yiq ); std::cout << std::endl;  //magenta      < 0.41299999999999997824,  0.27445283783925644716,  0.52259104529161115593, >


  yuv = ::color::constant::gray_t<0,1>{};  std::cout << "gray_t<0,1>  "; print( yuv ); std::cout << std::endl;// yuv = gray_t<0,1>  < 1,  0,  0, >
  yuv = ::color::constant::gray_t<1,0>{};  std::cout << "gray_t<1,0>  "; print( yuv ); std::cout << std::endl;// yuv = gray_t<1,0>  < 0,  0,  0, >
  yuv = ::color::constant::gray_t<1,1>{};  std::cout << "gray_t<1,1>  "; print( yuv ); std::cout << std::endl;// yuv = gray_t<1,1>  < 0.5,  0,  0, >

  yuv = ::color::constant::black_t{};      std::cout << "black        "; print( yuv ); std::cout << std::endl; // yuv = black        < 0,  0,  0, >
  yuv = ::color::constant::white_t{};      std::cout << "white        "; print( yuv ); std::cout << std::endl; // yuv = white        < 1,  0,  0, >

  yuv = ::color::constant::red_t{};        std::cout << "red          "; print( yuv ); std::cout << std::endl; // yuv = red          < 0.29883900000000002128,  -0.14711658555862927589,  0.61499999999999999112, >
  yuv = ::color::constant::lime_t{};       std::cout << "lime         "; print( yuv ); std::cout << std::endl; // yuv = lime         < 0.58681099999999997152,  -0.28888341444137066727,  -0.51470170902260681256, >
  yuv = ::color::constant::blue_t{};       std::cout << "blue         "; print( yuv ); std::cout << std::endl; // yuv = blue         < 0.11434999999999999332,  0.43599999999999999867,  -0.10029829097739317856, >

  yuv = ::color::constant::cyan_t{};       std::cout << "cyan         "; print( yuv ); std::cout << std::endl; // yuv = cyan         < 0.7011609999999999232,  0.14711658555862922038,  -0.61499999999999999112, >
  yuv = ::color::constant::yellow_t{};     std::cout << "yellow       "; print( yuv ); std::cout << std::endl; // yuv = yellow       < 0.88565000000000004832,  -0.43599999999999999867,  0.10029829097739317856, >
  yuv = ::color::constant::magenta_t{};    std::cout << "magenta      "; print( yuv ); std::cout << std::endl; // yuv = magenta      < 0.41318900000000002848,  0.28888341444137072278,  0.51470170902260692358, >

  yiq = ::color::constant::black_t{};    yuv = yiq; std::cout << "black    "; print( yuv ); std::cout << std::endl;
  yiq = ::color::constant::white_t{};    yuv = yiq; std::cout << "white    "; print( yuv ); std::cout << std::endl;

  yiq = ::color::constant::red_t{};      yuv = yiq; std::cout << "red      "; print( yuv ); std::cout << std::endl;
  yiq = ::color::constant::lime_t{};     yuv = yiq; std::cout << "lime     "; print( yuv ); std::cout << std::endl;
  yiq = ::color::constant::blue_t{};     yuv = yiq; std::cout << "blue     "; print( yuv ); std::cout << std::endl;

  yiq = ::color::constant::cyan_t{};     yuv = yiq; std::cout << "cyan     "; print( yuv ); std::cout << std::endl;
  yiq = ::color::constant::yellow_t{};   yuv = yiq; std::cout << "yellow   "; print( yuv ); std::cout << std::endl;
  yiq = ::color::constant::magenta_t{};  yuv = yiq; std::cout << "magenta  "; print( yuv ); std::cout << std::endl;

  yuv = ::color::constant::black_t{};    yiq = yuv; std::cout << "black    "; print( yiq ); std::cout << std::endl;
  yuv = ::color::constant::white_t{};    yiq = yuv; std::cout << "white    "; print( yiq ); std::cout << std::endl;

  yuv = ::color::constant::red_t{};      yiq = yuv; std::cout << "red      "; print( yiq ); std::cout << std::endl;
  yuv = ::color::constant::lime_t{};     yiq = yuv; std::cout << "lime     "; print( yiq ); std::cout << std::endl;
  yuv = ::color::constant::blue_t{};     yiq = yuv; std::cout << "blue     "; print( yiq ); std::cout << std::endl;

  yuv = ::color::constant::cyan_t{};     yiq = yuv; std::cout << "cyan     "; print( yiq ); std::cout << std::endl;
  yuv = ::color::constant::yellow_t{};   yiq = yuv; std::cout << "yellow   "; print( yiq ); std::cout << std::endl;
  yuv = ::color::constant::magenta_t{};  yiq = yuv; std::cout << "magenta  "; print( yiq ); std::cout << std::endl;
 }

template< typename source_name, typename category_name >
 void ranger_rgb()
  {
   std::cout << "--------------" << std::endl;
   std::cout << "Source category: " << typeid( source_name ).name() << std::endl;
   std::cout << "Target category: " << typeid( category_name ).name() << std::endl;
   typedef ::color::model<source_name> source_type;

   ::color::model<source_name> r;
   ::color::model<category_name> mx = color::constant::black_t{};
   ::color::model<category_name> mn = color::constant::white_t{};

   for( r[0] = source_type::bound_type::template minimum<0>(); r[0] <= source_type::bound_type::template maximum<0>(); r[0] += source_type::bound_type::template range<0>() * 0.01 )
    for( r[1] = source_type::bound_type::template minimum<1>(); r[1] <= source_type::bound_type::template maximum<1>(); r[1] += source_type::bound_type::template range<1>() * 0.01 )
     for( r[2] = source_type::bound_type::template minimum<2>(); r[2] <= source_type::bound_type::template maximum<2>(); r[2] += source_type::bound_type::template range<2>() * 0.01 )
     {
      ::color::model<category_name> c;
      c = r;
      if( c[0] < mn[0] ) mn[0] = c[0];
      if( c[1] < mn[1] ) mn[1] = c[1];
      if( c[2] < mn[2] ) mn[2] = c[2];

      if( mx[0] < c[0] ) mx[0] = c[0];
      if( mx[1] < c[1] ) mx[1] = c[1];
      if( mx[2] < c[2] ) mx[2] = c[2];
     }

   std::cout << "min[0] = "<< mn[0]<< "; " << "min[1] = " << (double)mn[1]  <<"; "<< "min[2] = "<< (double)mn[2] << " - ";
   std::cout << "max[0] = "<< mx[0]<< "; " << "max[1] = " << (double)mx[1]  <<"; "<< "max[2] = "<< (double)mx[2] << " - ";
   std::cout << std::endl;
  }

int main(int argc, char const *argv[] )
 {
  sandbox_test6( );
  //ranger_rgb< color::rgb<double>::category_type, ::color::LabCH<double>::category_type   >();
  //ranger_rgb< color::rgb<double>::category_type, ::color::lab<double, ::color::constant::lab::Hunter_entity>::category_type >();
  //
  //ranger_rgb< color::xyz<double>::category_type,  ::color::LabCH<double>::category_type   >();
  //ranger_rgb< color::xyz<double>::category_type, ::color::lab<double, ::color::constant::lab::Hunter_entity>::category_type >();

  sandbox_test5();
  extern void print_bound( );
  print_bound();

  extern void test_constant();
  test_constant();

  extern void check_sizeof();
  check_sizeof();

  void make_test_gray_scale();
  make_test_gray_scale();

  invoke();

  void test_palette();
  test_palette();

  extern int gray_test( int argc, char const *argv[]  );
  gray_test( argc, argv );

  void test_get_invoke( double value );
  test_get_invoke( 0.5 );

  LabCH_test();

  void test_operation_distance__all( );
  test_operation_distance__all();

  void main_extract();
  main_extract();

  sandbox_test3();
  //luv_bound ();

  void check_get();
  check_get();

  extern int decompose_test( int argc, char const *argv[] );
  decompose_test( argc, argv );

  test_yiq2yuv601_quick();
  test_xyz_quick();

  print< ::color::rgb< ::color::type::split422_t >::category_type  >();
  print< ::color::rgb< ::color::type::split242_t >::category_type  >();
  print< ::color::rgb< ::color::type::split224_t >::category_type  >();

  print< ::color::bgr< ::color::type::split422_t >::category_type  >();
  print< ::color::bgr< ::color::type::split242_t >::category_type  >();
  print< ::color::bgr< ::color::type::split224_t >::category_type  >();

  print< ::color::abgr< ::color::type::split2AAA_t >::category_type  >();
  print< ::color::bgra< ::color::type::splitAAA2_t >::category_type  >();

  print< ::color::rgba< ::color::type::splitAAA2_t >::category_type  >();
  print< ::color::argb< ::color::type::split2AAA_t >::category_type  >();

  sandbox_test();

  void test_operation();
  test_operation();

  void image_conversion();
  image_conversion();

  ctor_test( );

  void main_place();
  main_place();

  make_blue();

  extern void check_conversion();
  check_conversion();

  void test_set_invoke();
  test_set_invoke();


  return 0;
 }

/*
mkdir check
mkdir conv
mkdir conv-rgb
mkdir dec
mkdir extract
mkdir gray
mkdir hue
mkdir operation
mkdir palette
*/
