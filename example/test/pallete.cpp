#include <vector>
#include <fstream>

#include "color/color.hpp"

#include "./targa.hpp"

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
           check = m;
           ::color::fix::overburn( check );
           image[y * width + x] = check;
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
           image[y * width + x].set<3>( 255 );
          }break;
        case( 2 ):
         {
          model_name m( { diverse_type::template process<0>( y / double(height) ),
                          diverse_type::template process<1>( x / double(width) ),
                          diverse_type::template process<2>( plane )
                                               , 0 } );
           check = m;
           ::color::fix::overburn( check );
           image[y * width + x] = check;
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

  make_image<color::xyz<double> >( "./palette/xyz-0-000.tga" , 0.0, 0 );
  make_image<color::xyz<double> >( "./palette/xyz-0-010.tga" , 0.1, 0 );
  make_image<color::xyz<double> >( "./palette/xyz-0-020.tga" , 0.2, 0 );
  make_image<color::xyz<double> >( "./palette/xyz-0-030.tga" , 0.3, 0 );
  make_image<color::xyz<double> >( "./palette/xyz-0-040.tga" , 0.4, 0 );
  make_image<color::xyz<double> >( "./palette/xyz-0-050.tga" , 0.5, 0 );
  make_image<color::xyz<double> >( "./palette/xyz-0-060.tga" , 0.6, 0 );
  make_image<color::xyz<double> >( "./palette/xyz-0-070.tga" , 0.7, 0 );
  make_image<color::xyz<double> >( "./palette/xyz-0-080.tga" , 0.8, 0 );
  make_image<color::xyz<double> >( "./palette/xyz-0-090.tga" , 0.9, 0 );
  make_image<color::xyz<double> >( "./palette/xyz-0-100.tga" , 1.0, 0 );

  make_image<color::xyz<double> >( "./palette/xyz-1-000.tga" , 0.0, 1 );
  make_image<color::xyz<double> >( "./palette/xyz-1-010.tga" , 0.1, 1 );
  make_image<color::xyz<double> >( "./palette/xyz-1-020.tga" , 0.2, 1 );
  make_image<color::xyz<double> >( "./palette/xyz-1-030.tga" , 0.3, 1 );
  make_image<color::xyz<double> >( "./palette/xyz-1-040.tga" , 0.4, 1 );
  make_image<color::xyz<double> >( "./palette/xyz-1-050.tga" , 0.5, 1 );
  make_image<color::xyz<double> >( "./palette/xyz-1-060.tga" , 0.6, 1 );
  make_image<color::xyz<double> >( "./palette/xyz-1-070.tga" , 0.7, 1 );
  make_image<color::xyz<double> >( "./palette/xyz-1-080.tga" , 0.8, 1 );
  make_image<color::xyz<double> >( "./palette/xyz-1-090.tga" , 0.9, 1 );
  make_image<color::xyz<double> >( "./palette/xyz-1-100.tga" , 1.0, 1 );

  make_image<color::xyz<double> >( "./palette/xyz-2-000.tga" , 0.0, 2 );
  make_image<color::xyz<double> >( "./palette/xyz-2-010.tga" , 0.1, 2 );
  make_image<color::xyz<double> >( "./palette/xyz-2-020.tga" , 0.2, 2 );
  make_image<color::xyz<double> >( "./palette/xyz-2-030.tga" , 0.3, 2 );
  make_image<color::xyz<double> >( "./palette/xyz-2-040.tga" , 0.4, 2 );
  make_image<color::xyz<double> >( "./palette/xyz-2-050.tga" , 0.5, 2 );
  make_image<color::xyz<double> >( "./palette/xyz-2-060.tga" , 0.6, 2 );
  make_image<color::xyz<double> >( "./palette/xyz-2-070.tga" , 0.7, 2 );
  make_image<color::xyz<double> >( "./palette/xyz-2-080.tga" , 0.8, 2 );
  make_image<color::xyz<double> >( "./palette/xyz-2-090.tga" , 0.9, 2 );
  make_image<color::xyz<double> >( "./palette/xyz-2-100.tga" , 1.0, 2 );

  make_image<color::lab<double> >( "./palette/lab-0-000.tga" , 0.0, 0 );
  make_image<color::lab<double> >( "./palette/lab-0-010.tga" , 0.1, 0 );
  make_image<color::lab<double> >( "./palette/lab-0-020.tga" , 0.2, 0 );
  make_image<color::lab<double> >( "./palette/lab-0-030.tga" , 0.3, 0 );
  make_image<color::lab<double> >( "./palette/lab-0-040.tga" , 0.4, 0 );
  make_image<color::lab<double> >( "./palette/lab-0-050.tga" , 0.5, 0 );
  make_image<color::lab<double> >( "./palette/lab-0-060.tga" , 0.6, 0 );
  make_image<color::lab<double> >( "./palette/lab-0-070.tga" , 0.7, 0 );
  make_image<color::lab<double> >( "./palette/lab-0-080.tga" , 0.8, 0 );
  make_image<color::lab<double> >( "./palette/lab-0-090.tga" , 0.9, 0 );
  make_image<color::lab<double> >( "./palette/lab-0-100.tga" , 1.0, 0 );

  make_image<color::lab<double> >( "./palette/lab-1-000.tga" , 0.0, 1 );
  make_image<color::lab<double> >( "./palette/lab-1-010.tga" , 0.1, 1 );
  make_image<color::lab<double> >( "./palette/lab-1-020.tga" , 0.2, 1 );
  make_image<color::lab<double> >( "./palette/lab-1-030.tga" , 0.3, 1 );
  make_image<color::lab<double> >( "./palette/lab-1-040.tga" , 0.4, 1 );
  make_image<color::lab<double> >( "./palette/lab-1-050.tga" , 0.5, 1 );
  make_image<color::lab<double> >( "./palette/lab-1-060.tga" , 0.6, 1 );
  make_image<color::lab<double> >( "./palette/lab-1-070.tga" , 0.7, 1 );
  make_image<color::lab<double> >( "./palette/lab-1-080.tga" , 0.8, 1 );
  make_image<color::lab<double> >( "./palette/lab-1-090.tga" , 0.9, 1 );
  make_image<color::lab<double> >( "./palette/lab-1-100.tga" , 1.0, 1 );

  make_image<color::lab<double> >( "./palette/lab-2-000.tga" , 0.0, 2 );
  make_image<color::lab<double> >( "./palette/lab-2-010.tga" , 0.1, 2 );
  make_image<color::lab<double> >( "./palette/lab-2-020.tga" , 0.2, 2 );
  make_image<color::lab<double> >( "./palette/lab-2-030.tga" , 0.3, 2 );
  make_image<color::lab<double> >( "./palette/lab-2-040.tga" , 0.4, 2 );
  make_image<color::lab<double> >( "./palette/lab-2-050.tga" , 0.5, 2 );
  make_image<color::lab<double> >( "./palette/lab-2-060.tga" , 0.6, 2 );
  make_image<color::lab<double> >( "./palette/lab-2-070.tga" , 0.7, 2 );
  make_image<color::lab<double> >( "./palette/lab-2-080.tga" , 0.8, 2 );
  make_image<color::lab<double> >( "./palette/lab-2-090.tga" , 0.9, 2 );
  make_image<color::lab<double> >( "./palette/lab-2-100.tga" , 1.0, 2 );
 }

