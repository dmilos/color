#include <iostream>
#include <iomanip>
#include <string>

#include "opencv2/opencv.hpp"

void classic_approcah( cv::Mat & gray, cv::Mat const& rgb )
 {
  for(int i = 0; i < rgb.rows; i++)
    for(int j = 0; j < rgb.cols; j++)
     {
      gray.at<unsigned char>( i, j ) = ::color::get::red< ::color::get::constant::rgb::red::hue_angle_entity>( ::color::rgb< std::uint8_t >{c.val[2], c.val[1], c.val[0]} );
    }
 }

void no_need_worry_about_width_and_heigth( cv::Mat & gray, cv::Mat const& rgb )
 {
  typedef ::color::gray< std::uint8_t > gray_t;
  typedef ::color::bgr< std::uint8_t >  bgr_t;


  transform( (bgr_t*)rgb.data(), (bgr_t*)( rgb.data() + ),
             (gray_t*)gray.data(),
             []( bgr_t const& c)->gray_t  
               {
                return gray_t( {::color::get::red< ::color::get::constant::rgb::red::hue_angle_entity>( c ) } ); 
               }
           );
 }



int main( int argc, char *argv[] )
 {
  return EXIT_SUCCESS;
 }

