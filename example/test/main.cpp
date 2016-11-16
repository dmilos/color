#include <vector>
#include <fstream>
#include <typeinfo>
#include <cstring>

#include "color/color.hpp"

#include "./model/invoke.hpp"
#include "./model/operation.hpp"
#include "./model/make.hpp"
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
  typedef typename index_trait_type::input_const_type           index_input_const_type;           std::cout << "index_input_const_type         " << typeid( index_input_const_type ).name() << std::endl;
  typedef typename index_trait_type::return_image_type          index_return_image_type;          std::cout << "index_return_image_type        " << typeid( index_return_image_type ).name() << std::endl;

  typedef typename component_trait_type::instance_type          component_type;                   std::cout << "component_type                 " << typeid( component_type ).name() << std::endl;
  typedef typename component_trait_type::const_type             component_const_type;             std::cout << "component_const_type           " << typeid( component_const_type ).name() << std::endl;
  typedef typename component_trait_type::return_image_type      component_return_const_type;      std::cout << "component_return_const_type    " << typeid( component_return_const_type ).name() << std::endl;
  typedef typename component_trait_type::return_type            component_return_type;            std::cout << "component_return_type          " << typeid( component_return_type ).name() << std::endl;
  typedef typename component_trait_type::input_const_type       component_input_const_type;       std::cout << "component_input_const_type     " << typeid( component_input_const_type ).name() << std::endl;
  typedef typename component_trait_type::input_type             component_input_type;             std::cout << "component_input_type           " << typeid( component_input_type ).name() << std::endl;

  typedef typename container_trait_type::instance_type          container_type;                   std::cout << "container_type                 " << typeid( container_type ).name() << std::endl;
  typedef typename container_trait_type::const_type             container_const_type;             std::cout << "container_const_type           " << typeid( container_const_type ).name() << std::endl;
  typedef typename container_trait_type::return_image_type      container_return_const_type;      std::cout << "container_return_const_type    " << typeid( container_return_const_type ).name() << std::endl;
  typedef typename container_trait_type::return_original_type   container_return_original_type;   std::cout << "container_return_original_type " << typeid( container_return_original_type ).name() << std::endl;
  typedef typename container_trait_type::input_const_type       container_input_const_type;       std::cout << "container_input_const_type     " << typeid( container_input_const_type ).name() << std::endl;
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
  ::color::rgb<double> r{ ::color::constant::aqua_type{} };
  ::color::rgb<double> x{ ::color::constant::turquoise_type{} };
  ::color::rgb<double>{ ::color::constant::black_type{} };
  ::color::rgb<double>( {1,2,3} );

  r = ::color::constant::turquoise_type{};
  x = ::color::constant::orange_type{};
  r[0] = 0.1;
  std::cout << r[0] << std::endl;
 }

void invoke()
 {
  //::color::make::aqua< color::category::rgb_uint8 >();
  //::color::make::aqua< color::category::rgb_uint8 >();
  //::color::make::aqua< color::category::rgb_uint8 >();
  //::color::make::aqua< color::category::rgb_uint8 >();

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


template < typename model_name >
void make_image(std::string const& name, float plane = 0.5, int side = 1 )
 {
  int height = 1000;
  int width  = 1000;

  typedef ::color::_internal::diverse< typename model_name::category_type > diverse_type;

  targa_header_struct header;

  targa_make_header( width, height, header);

  std::vector< color::bgra<std::uint8_t> >   image(height * width);
  color::rgb<double >  check;

  for (int y = 0; y < height; y++)
   {
    for (int x = 0; x < width; x++)
     {
      image[y * width + x].set<3>(255);
      switch( side )
       {
        case( 0 ):
         {
           model_name m( { diverse_type::template process<0>( plane  ),
                                                diverse_type::template process<1>( y / double(height) ),
                                                diverse_type::template process<2>( x / double(width) )
                                                , 0 } );
          ::color::fix::overburn( m );
          image[y * width + x] = m;
         }break;
        case( 1 ):
          {
           model_name m( { diverse_type::template process<0>( y / double(height) ),
                                               diverse_type::template process<1>( plane ),
                                               diverse_type::template process<2>( x / double(width) )
                                               , 0 } );
           check = m;
           ::color::fix::overburn( check );
           image[y * width + x] = check;
          }break;
        case( 2 ):
         {
          model_name m( { diverse_type::template process<0>( y / double(height) ),
                                               diverse_type::template process<1>( x / double(width) ),
                                               diverse_type::template process<2>( plane )
                                               , 0 } );
          ::color::fix::overburn( m );
          image[y * width + x] = m;
         }break;
       }
     }
   }

   {
    std::ofstream of(name, std::ios_base::binary);
    of.write((const char *)header, 18);
    of.write((const char *)image.data(), image.size() * 4);
   }
 }

void test_pallete()
 {
  make_image<color::hsi<double> >( "./palette/hsi-1-000.tga" , 0.00, 1 );
  make_image<color::hsi<double> >( "./palette/hsi-1-025.tga" , 0.25, 1 );
  make_image<color::hsi<double> >( "./palette/hsi-1-050.tga" , 0.50, 1 );
  make_image<color::hsi<double> >( "./palette/hsi-1-075.tga" , 0.75, 1 );
  make_image<color::hsi<double> >( "./palette/hsi-1-100.tga" , 1.00, 1 );

  make_image<color::hsl<double> >( "./palette/hsl-1-000.tga" , 0.00, 1 );
  make_image<color::hsl<double> >( "./palette/hsl-1-025.tga" , 0.25, 1 );
  make_image<color::hsl<double> >( "./palette/hsl-1-005.tga" , 0.50, 1 );
  make_image<color::hsl<double> >( "./palette/hsl-1-075.tga" , 0.75, 1 );
  make_image<color::hsl<double> >( "./palette/hsl-1-100.tga" , 1.00, 1 );

  make_image<color::hsv<double> >( "./palette/hsv-1-000.tga", 0.00, 1 );
  make_image<color::hsv<double> >( "./palette/hsv-1-050.tga", 0.50, 1 );
  make_image<color::hsv<double> >( "./palette/hsv-1-060.tga", 0.60, 1 );
  make_image<color::hsv<double> >( "./palette/hsv-1-075.tga", 0.70, 1 );
  make_image<color::hsv<double> >( "./palette/hsv-1-080.tga", 0.80, 1 );
  make_image<color::hsv<double> >( "./palette/hsv-1-090.tga", 0.90, 1 );

  make_image<color::hsv<double> >( "./palette/hsv-1-090.tga", 0.90, 1 );
  make_image<color::hsv<double> >( "./palette/hsv-1-091.tga", 0.91, 1);
  make_image<color::hsv<double> >( "./palette/hsv-1-092.tga", 0.92, 1);
  make_image<color::hsv<double> >( "./palette/hsv-1-093.tga", 0.93, 1);
  make_image<color::hsv<double> >( "./palette/hsv-1-094.tga", 0.94, 1);
  make_image<color::hsv<double> >( "./palette/hsv-1-095.tga", 0.95, 1);
  make_image<color::hsv<double> >( "./palette/hsv-1-096.tga", 0.96, 1);
  make_image<color::hsv<double> >( "./palette/hsv-1-097.tga", 0.97, 1);
  make_image<color::hsv<double> >( "./palette/hsv-1-098.tga", 0.98, 1);
  make_image<color::hsv<double> >( "./palette/hsv-1-099.tga", 0.99, 1);
  make_image<color::hsv<double> >( "./palette/hsv-1-100.tga", 1.0, 1 );

  make_image<color::rgb<double> >( "./palette/rgb-0-00.tga" , 0.00,  0 );
  make_image<color::rgb<double> >( "./palette/rgb-0-05.tga" , 0.25,  0 );
  make_image<color::rgb<double> >( "./palette/rgb-0-05.tga" , 0.50,  0 );
  make_image<color::rgb<double> >( "./palette/rgb-0-05.tga" , 0.75,  0 );
  make_image<color::rgb<double> >( "./palette/rgb-0-10.tga" , 1.00,  0 );

  make_image<color::cmy<double> >( "./palette/cmy.tga" , 0.5 );
  make_image<color::cmyk<double> >("./palette/cmyk.tga", 0.5 );

  make_image<color::yiq<double> >( "./palette/yiq-0-000.tga" , 0  , 0 );
  make_image<color::yiq<double> >( "./palette/yiq-0-010.tga" , 0.1, 0 );
  make_image<color::yiq<double> >( "./palette/yiq-0-050.tga" , 0.5, 0 );
  make_image<color::yiq<double> >( "./palette/yiq-0-090.tga" , 0.9, 0 );
  make_image<color::yiq<double> >( "./palette/yiq-0-100.tga" , 1  , 0 );

  make_image<color::yuv<double, ::color::constant::yuv::BT_601_entity > >( "./palette/yuv-601_-0-00.tga", 0.0, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_601_entity > >( "./palette/yuv-601_-0-01.tga", 0.1, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_601_entity > >( "./palette/yuv-601_-0-02.tga", 0.2, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_601_entity > >( "./palette/yuv-601_-0-03.tga", 0.3, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_601_entity > >( "./palette/yuv-601_-0-04.tga", 0.4, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_601_entity > >( "./palette/yuv-601_-0-05.tga", 0.5, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_601_entity > >( "./palette/yuv-601_-0-06.tga", 0.6, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_601_entity > >( "./palette/yuv-601_-0-07.tga", 0.7, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_601_entity > >( "./palette/yuv-601_-0-08.tga", 0.8, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_601_entity > >( "./palette/yuv-601_-0-09.tga", 0.9, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_601_entity > >( "./palette/yuv-601_-0-10.tga", 1.0, 0 );

  make_image<color::yuv<double, ::color::constant::yuv::BT_709_entity > >( "./palette/yuv-709_-0-00.tga", 0.0, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_709_entity > >( "./palette/yuv-709_-0-01.tga", 0.1, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_709_entity > >( "./palette/yuv-709_-0-02.tga", 0.2, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_709_entity > >( "./palette/yuv-709_-0-03.tga", 0.3, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_709_entity > >( "./palette/yuv-709_-0-04.tga", 0.4, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_709_entity > >( "./palette/yuv-709_-0-05.tga", 0.5, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_709_entity > >( "./palette/yuv-709_-0-06.tga", 0.6, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_709_entity > >( "./palette/yuv-709_-0-07.tga", 0.7, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_709_entity > >( "./palette/yuv-709_-0-08.tga", 0.8, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_709_entity > >( "./palette/yuv-709_-0-09.tga", 0.9, 0 );
  make_image<color::yuv<double, ::color::constant::yuv::BT_709_entity > >( "./palette/yuv-709_-0-10.tga", 1.0, 0 );

 }

int main(int argc, char const *argv[])
 {
  print< ::color::rgb< ::color::type::split422_type >::category_type  >();
  print< ::color::rgb< ::color::type::split242_type >::category_type  >();
  print< ::color::rgb< ::color::type::split224_type >::category_type  >();

  print< ::color::bgr< ::color::type::split422_type >::category_type  >();
  print< ::color::bgr< ::color::type::split242_type >::category_type  >();
  print< ::color::bgr< ::color::type::split224_type >::category_type  >();

  print< ::color::abgr< ::color::type::split2AAA_type >::category_type  >();
  print< ::color::bgra< ::color::type::splitAAA2_type >::category_type  >();

  print< ::color::rgba< ::color::type::splitAAA2_type >::category_type  >();
  print< ::color::argb< ::color::type::split2AAA_type >::category_type  >();

  sandbox_test();

  extern void check_sizeof();
  check_sizeof();

  void test_operation();
  test_operation();

  void image_conversion();
  image_conversion();

  test_pallete();

  ctor_test();

  void main_place();
  main_place();

  void check_get();
  check_get();

  extern void make_test_make();
  make_test_make();

  extern int gray_test( int argc, char const *argv[] );
  gray_test( argc, argv );

  extern int decompose_test( int argc, char const *argv[] );
  decompose_test( argc, argv );

  extern void make_make_header();
  make_make_header();

  extern void print_bound();
  print_bound();


  make_blue();

  invoke();

  extern void check_conversion();
  check_conversion();

  //void test_selfie();
  //test_selfie();

  void test_set_invoke();
  test_set_invoke();

  void test_get_invoke( double value );
  test_get_invoke(0.5);

  return 0;
 }


