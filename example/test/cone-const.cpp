#include <iostream>
#include <iomanip>

#include "color/color.hpp"

// an attempt to make (bi)cone distance mor closer to LAB

int main_conne_const(int argc, char * argv[])
 {
  typedef color::lab<double> referet_t;

  color::rgb<double> l, r;
  referet_t ll, rl;
  color::hsv<double> lh, rh;

  double step = 1.0/20.0;
  //double scale_best_lab = 0.985122229405903; //!< hsl_bicone_entity 
  //double scale_best_rgb = 0.294707831201045; //!< hsl_bicone_entity 
  //double scale_best_lab = 1.689246313878470; //!< hsv_cone_entity
  //double scale_best_rgb = 0.645615982885139; //!< hsv_cone_entity 
  double scale_start = 1;
  double scale_end =   2;
  double scale_direction = +1;
  double scale_step = (scale_end - scale_start) / 3.0;

  double summae_last = 101;
  std::vector<std::size_t> statistika; statistika.resize( 100, 0 );

  for (double scale = scale_start; scale < scale_end; scale += scale_step )
   {
    //step = 1.0 / resolution;
    std::size_t count = 0;
    double  summae = 0;
    double minimum = 100;
    double maximum = 100;

    for (l[0] = 0; l[0] < 1; l[0] += step)
      for (l[1] = 0; l[1] < 1; l[1] += step)
        for (l[2] = 0; l[2] < 1; l[2] += step)
        {

          ll = l;
          for ( r[0] = 0; r[0] < 1; r[0] += step)
            for (r[1] = 0; r[1] < 1; r[1] += step)
              for (r[2] = 0; r[2] < 1; r[2] += step)
              {
               rl = r;

                auto a = ::color::operation::distance( ll, rl );
              //auto a = ::color::operation::distance( l , r) * 100.0;
              //auto b = ::color::operation::distance< ::color::constant::distance::hsv_cone_entity >(l, r /*, scale */ );
                auto b = ::color::operation::distance< ::color::constant::distance::hsl_bicone_entity >(l, r/*, scale */ );
                if ( b < 0.000000001 ) continue;
                auto ratio = a / b;
                //auto delta = fabs( a - b );
                //if( ratio <  90 ) continue;
                //if( 110   < ratio ) continue;

                if( ratio < minimum ) 
                 { minimum = ratio; }
                if( maximum < ratio ) 
                 { maximum = ratio; }
                summae += a / b;
                ++count;
                if( ( 0.50 < ratio ) && (ratio < 1.50 ) )
                {
                  ++statistika[(int)(100*ratio - 50)];
                }
              }
        }

    for ( auto s : statistika )
    {
      //std::cout << std::setw( 22 ) << s << std::endl;
    }
    //break;
    summae /= count;
    std::cout << std::setw(22) << scale << ": " 
          << std::setw(22) << std::fixed << std::setprecision( 15 )<<  summae << "; " 
          << std::setw(22) << std::fixed << std::setprecision( 15 ) << minimum << "; "
          << std::setw(22) << std::fixed << std::setprecision( 15 ) << maximum << "; "
      ;
    int revert = 0;
    if ( ( summae < 1    ) && ( 1 < summae_last) ) { scale_direction = -1; scale_step /= 3.0; scale_step = scale_direction * fabs(scale_step); revert = 1; }
    if ( ( summae_last < 1 ) && ( 1 < summae   ) ) { scale_direction = +1; scale_step /= 3.0; scale_step = scale_direction * fabs(scale_step); revert = 2; }
    summae_last = summae;
    std::cout << revert << std::endl;
  }


  return 0;
 }
