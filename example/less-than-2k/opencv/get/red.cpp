#include "opencv2/opencv.hpp"
#include <iostream>
#include <iomanip>
#include <color/color.hpp>



typedef std::array<double, 2> point2d_type;
typedef std::array<double, 3> point3d_type;

int g_X = 100;
int g_Y = 100;
int g_Z = 200;
int g_T = 250;
int g_U = 200;
int g_V = 200;
int g_alpha = 45;
 
void initUI()
 {
  cv::namedWindow( "Command", cv::WINDOW_FREERATIO );

  ::cv::createTrackbar( "X", "Command", &g_X,    1000, NULL );
  ::cv::createTrackbar( "Y", "Command", &g_Y,    1000, NULL );
  ::cv::createTrackbar( "Z", "Command", &g_Z,     500, NULL );
  ::cv::createTrackbar( "T", "Command", &g_T,     500, NULL );
  ::cv::createTrackbar( "U", "Command", &g_U,     500, NULL );
  ::cv::createTrackbar( "V", "Command", &g_V,     500, NULL );
  ::cv::createTrackbar("AA", "Command", &g_alpha, 360, NULL );
 }


cv::Mat red_channel;
cv::Mat red_hsl_star;
cv::Mat red_hue_angle;


void monitor( cv::Mat & frame )
 { 
  red_channel   = frame.clone();
  red_hsl_star  = frame.clone();
  red_hue_angle = frame.clone();

  double max_star = 0;

  for( int y=0; y< frame.rows; y++ )
   for( int x=0; x< frame.cols; x++ )
    {
     auto const& pixel = frame.at<cv::Vec3b>( y, x );
     ::color::rgb<double> C( { pixel[2] / 255.0, pixel[1] / 255.0, pixel[0]/255.0 } );

     auto v_channel = ::color::get::red<::color::get::constant::rgb::red::channel_entity>( C );
     auto v_star    = ::color::get::red<::color::get::constant::rgb::red::hsl_star_entity>( C );
     auto v_hue     = ::color::get::red<::color::get::constant::rgb::red::hue_angle_entity>( C );

     v_star = (v_star < 0 ? 0 : v_star);
     if( 0 < v_star )
      {
       v_star = v_star;
      }
     max_star = std::max<double>( v_star, max_star );

     auto S = color::get::saturation( C )/100.0;
     auto L = color::get::gray( C );
     L = ( L < 0.5 ? 2 * L  : 2*(1.0-L) );

     v_hue *= 255;
     //v_hue = ( v_hue < 180? v_hue : ( 360- v_hue) );

     red_channel.at<cv::Vec3b>( y, x )[0] = 255 * v_channel;
     red_channel.at<cv::Vec3b>( y, x )[1] = 255 * v_channel;
     red_channel.at<cv::Vec3b>( y, x )[2] = 255 * v_channel;

     red_hsl_star.at<cv::Vec3b>( y, x )[0] = 255 * v_star;
     red_hsl_star.at<cv::Vec3b>( y, x )[1] = 255 * v_star;
     red_hsl_star.at<cv::Vec3b>( y, x )[2] = 255 * v_star;
 
     red_hue_angle.at<cv::Vec3b>( y, x )[0] = v_hue * S;
     red_hue_angle.at<cv::Vec3b>( y, x )[1] = v_hue * S;
     red_hue_angle.at<cv::Vec3b>( y, x )[2] = v_hue * S;
    }

  red_hsl_star /= max_star;
 }

int main()
 {
  int frame_height = 600;
  int frame_width  = 800;

  cv::Mat frame( frame_height, frame_width, CV_8UC3 );

  cv::VideoCapture vc(0);

  if( false == vc.isOpened() )
   {
    return EXIT_FAILURE;
   }

  initUI();

  for( unsigned long counter = 0; true;++counter )
   {
    vc >> frame;
    //cv::rectangle( frame, cv::Point2i(0, 0), ::cv::Point2i(frame.cols, frame.rows), ::cv::Scalar(0, 0, 0), cv::FILLED );

    monitor(frame);

    ::cv::line( frame, ::cv::Point2i( 0, frame.rows/2 ), ::cv::Point2i( frame.cols, frame.rows/2 ), ::cv::Scalar(   255,   255, 255 ), 1 );
    ::cv::line( frame, ::cv::Point2i( frame.cols/2, 0 ), ::cv::Point2i( frame.cols/2, frame.rows ), ::cv::Scalar(   255,   255, 255 ), 1 );

    cv::imshow( "Frame-frame", frame );
    cv::imshow( "Frame-channel", red_channel   );
    cv::imshow( "Frame-hsl_star", red_hsl_star  );
    cv::imshow( "Frame-hue_angle", red_hue_angle );


    char c = (char)cv::waitKey(1);
    if( c == 27 ) break;
 
   }

  return EXIT_SUCCESS;
}