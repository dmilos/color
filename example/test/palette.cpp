#include <vector>
#include <fstream>

#include "color/color.hpp"

#include "./targa.hpp"

template < typename model_name >
void make_image(std::string const& name, double plane = 0.5, int side = 1 )
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
void palette( std::string const& name, int planes )
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

void test_palette()
 {

  make_image<color::cmyk<double> >("./palette/cmyk.tga", 3 );

  palette< color::hsi<double>::category_type  >( "hsi",      5 );
  palette< color::hsl<double>::category_type  >( "hsl",      5 );
  palette< color::hsv<double>::category_type  >( "hsv",      5 );
//palette< color::hwb<double>::category_type  >( "hwb",      5 );
  palette< color::rgb<double>::category_type  >( "rgb",      5 );
  palette< color::cmy<double>::category_type  >( "cmy",      5 );
  palette< color::yiq<double>::category_type  >( "yiq",      5 );
  palette< color::yuv<double>::category_type  >( "yuv-709",  5 );
  palette< color::xyz<double>::category_type  >( "xyz",      5 );
  palette< color::luv<double>::category_type  >( "luv",      5 );
  palette< color::lab<double, ::color::constant::lab::CIE_entity   >::category_type  >( "labCIE",         5 );
  palette< color::lab<double, ::color::constant::lab::Hunter_entity>::category_type  >( "labHunter",      5 );

  palette< color::lms<double>::category_type  >( "lms",      5 );
  palette< color::xyy<double>::category_type  >( "xyy",      5 );

  palette< color::LuvCH<double>::category_type  >( "LuvCH",      5 );
  palette< color::LabCH<double>::category_type  >( "LabCH",      5 );

  std::string number="000";
  for( int layer= 0; layer < 12; layer += 1 )
   {
    number[0] = char(  layer/10 + '0' );
    number[1] = char(  layer%10 + '0' );
    number[2] = char( (layer/10)%10 + '0' );
    make_image<color::hwb<double> >( "./palette/hwb-0-"+number+".tga" , layer/12.0, 0 );
   }

  for( int layer= 0; layer <= 10; layer += 1 )
   {
    number[0] = char( layer/10 + '0' );
    number[1] = char( layer%10 + '0' );
    number[2] = char( '0' );
    make_image<color::hwb<double> >( "./palette/hwb-1-"+number+".tga" , layer/10.0, 1 );
    make_image<color::hwb<double> >( "./palette/hwb-2-"+number+".tga" , layer/10.0, 2 );
   }

 }

void make_image_RGB2LAB(std::string const& name )
 {
  int height = 1000;
  int width  = 1000;

  targa_header_struct header;
  targa_make_header24( width, height, header);
  std::vector< color::bgr< std::uint8_t> >   image( height * width );

  std::fill( image.begin(), image.end(), ::color::constant::gray_t<1,1>{} );

  color::rgb<double>  check;
  typedef ::color::lab<double> model_type;

  for( int r = 0; r < 256; r++)
   {
    for( int g = 0; g < 256; g++)
     {
      for( int b = 0; b < 256; b++)
       {
        color::rgb< std::uint8_t >  rgb( { (std::uint8_t)r, (std::uint8_t)g, (std::uint8_t)b } );

        color::lab< double >lab;
        lab = rgb;

        image[ (int)( lab[2] + 128 )* width +  (int)( 128 + lab[1] ) ] = ::color::constant::white_t{};
     }
   }

  }

   {
    std::ofstream of(name, std::ios_base::binary);
    of.write((const char *)header, 18);
    of.write((const char *)image.data(), image.size() * 3 );
   }
 }

