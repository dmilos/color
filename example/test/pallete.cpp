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

  targa_make_header24( width, height, header);

  std::vector< color::bgr<std::uint8_t> >   image(height * width);
  color::rgb<double >  check;

  for (int y = 0; y < height; y++)
   {
    for (int x = 0; x < width; x++)
     {
      switch( side )
       {
        case( 0 ):
         {
           model_name m( { diverse_type::template process<0>( plane  ),
                           diverse_type::template process<1>( y / double(height) ),
                           diverse_type::template process<2>( x / double(width) )
                                                , 0 } );
           check = m;
           if( true == ::color::check::overburn( check ) )
            {
             ::color::fix::overburn( check ); 
             if( ( 0 == (y % 5) ) && ( 0 == (x % 3) ) ) check = ::color::constant::white_t{};
             if( ( 0 == (y % 3) ) && ( 0 == (x % 5) ) ) check = ::color::constant::black_t{};
            }

           image[y * width + x] = check;
         }break;
        case( 1 ):
          {
           model_name m( { diverse_type::template process<0>( y / double(height) ),
                           diverse_type::template process<1>( plane ),
                           diverse_type::template process<2>( x / double(width) )
                                               , 0 } );
           check = m;
           if( true == ::color::check::overburn( check ) )
            {
             ::color::fix::overburn( check ); 
             if( ( 0 == (y % 5) ) && ( 0 == (x % 3) ) ) check = ::color::constant::white_t{};
             if( ( 0 == (y % 3) ) && ( 0 == (x % 5) ) ) check = ::color::constant::black_t{};
            }
           image[y * width + x] = check;
          }break;
        case( 2 ):
         {
          model_name m( { diverse_type::template process<0>( y / double(height) ),
                          diverse_type::template process<1>( x / double(width) ),
                          diverse_type::template process<2>( plane )
                                               , 0 } );
           check = m;
           if( true == ::color::check::overburn( check ) )
            {
             ::color::fix::overburn( check ); 
             if( ( 0 == (y % 5) ) && ( 0 == (x % 3) ) ) check = ::color::constant::white_t{};
             if( ( 0 == (y % 3) ) && ( 0 == (x % 5) ) ) check = ::color::constant::black_t{};
            }
           image[y * width + x] = check;
         }break;
       }
     }
   }

   {
    std::ofstream of(name, std::ios_base::binary);
    of.write((const char *)header, 18);
    of.write((const char *)image.data(), image.size() * 3 );
   }
 }

template< typename category_name >
void pallete( std::string const& name, int planes )
 {
  std::string number="000";
  for( int index = 0; index < planes; index += 1 )
   {
    auto layer = index/double(planes-1);
    number[0] =  int(layer*1)%10 + '0';
    number[1] =  int(layer*10)%10 + '0';
    number[2] = (int(layer*100))%10 + '0';
    make_image< color::model<category_name> >( "./palette/"+name+"-0-"+number+".tga" , layer, 0 ); 
    make_image< color::model<category_name> >( "./palette/"+name+"-1-"+number+".tga" , layer, 1 ); 
    make_image< color::model<category_name> >( "./palette/"+name+"-2-"+number+".tga" , layer, 2 );
   }
 }

void test_pallete()
 {

  make_image<color::cmyk<double> >("./palette/cmyk.tga", 3 );

  pallete< color::hsi<double>::category_type  >( "hsi",      5 );
  pallete< color::hsl<double>::category_type  >( "hsl",      5 );
  pallete< color::hsv<double>::category_type  >( "hsv",      5 );
//pallete< color::hwb<double>::category_type  >( "hwb",      5 );
  pallete< color::rgb<double>::category_type  >( "rgb",      5 );
  pallete< color::cmy<double>::category_type  >( "cmy",      5 );
  pallete< color::yiq<double>::category_type  >( "yiq",      5 );
  pallete< color::yuv<double>::category_type  >( "yuv-709",  5 );
  pallete< color::xyz<double>::category_type  >( "xyz",      5 );
  pallete< color::luv<double>::category_type  >( "luv",      5 );
  pallete< color::lab<double>::category_type  >( "lab",      5 );
  pallete< color::lms<double>::category_type  >( "lms",      5 );
  pallete< color::xyy<double>::category_type  >( "xyy",      5 );

  std::string number="000";
  for( int layer= 0; layer < 12; layer += 1 )
   {
    number[0] =  layer/10 + '0';
    number[1] =  layer%10 + '0';
    number[2] = (layer/10)%10 + '0';
    make_image<color::hwb<double> >( "./palette/hwb-0-"+number+".tga" , layer/12.0, 0 ); 
   }

  for( int layer= 0; layer <= 10; layer += 1 )
   {
    number[0] = layer/10 + '0';
    number[1] = layer%10 + '0';
    number[2] = '0';
    make_image<color::hwb<double> >( "./palette/hwb-1-"+number+".tga" , layer/10.0, 1 ); 
    make_image<color::hwb<double> >( "./palette/hwb-2-"+number+".tga" , layer/10.0, 2 );
   }

 }

