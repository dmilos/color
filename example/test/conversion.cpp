#include <iostream>
#include <iomanip>
#include <typeinfo>

#include "color/color.hpp"

template< typename category_left_name, typename category_right_name>
 void check_conversion_back_and_forth
  (
   color::model< category_left_name> &left,
   color::model<category_right_name> &right
  )
  {
   typedef color::model< category_left_name> left_type;
   typedef color::model< category_right_name> right_type;

   long double e0 = 0;
   long double e1 = 0;
   long double e2 = 0;

   for( long double c0 = left_type::bound_type::template minimum<0>(); c0 <= left_type::bound_type::template maximum<0>(); c0 += left_type::bound_type::template range<0>() * 0.01 )
    for( long double c1 = left_type::bound_type::template minimum<1>(); c1 <= left_type::bound_type::template maximum<1>(); c1 += left_type::bound_type::template range<1>() * 0.01 )
     for( long double c2 = left_type::bound_type::template minimum<2>(); c2 <= left_type::bound_type::template maximum<2>(); c2 += left_type::bound_type::template range<2>() * 0.01 )
      {
       left.template set<0>( c0 );
       left.template set<1>( c1 );
       left.template set<2>( c2 );

       if( 4 == left.size() )
        {
         left.template set<3>( 0.5 );
        }

       if( false == color::check::integrity( left ) )
        {
         continue;
        }

       if( false == color::check::unique( left ) )
        {
         continue;
        }

       right = left;

       left = right;

       if( e0 < fabs( left.template get<0>() - c0 ) )
        {
         e0 = fabs( left.template get<0>() - c0 );
         if( 0.1 < e0 )
          {

           e0 = e0;
          }
        }

       if( e1 < fabs( left.template get<1>() - c1 ) )
        {
         e1 = fabs( left.template get<1>() - c1 );
         if( 0.1 < e1 )
          {
           e1 = e1;
          }
        }

       if( e2 < fabs( left.template get<2>() - c2 ) )
        {
         e2 = fabs( left.template get<2>() - c2 );
         if( 0.1 < e2 )
          {
           e2 = e2;
          }
        }
     }


    if( 1e-5 < e0 ) goto label_failure;
    if( 1e-5 < e1 ) goto label_failure;
    if( 1e-5 < e2 ) goto label_failure;

    return;

    label_failure:
     std::cout << std::endl;
     std::cout << "{{{{ FAIL {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
     std::cout << "  function - " << __FUNCTION__ << std::endl;
     std::cout << "    type - " << typeid( category_left_name   ).name() << std::endl;
     std::cout << "    type - " << typeid( category_right_name  ).name() << std::endl;
     std::cout << "    e0: " << e0 << std::endl;
     std::cout << "    e1: " << e1 << std::endl;
     std::cout << "    e2: " << e2 << std::endl;
     std::cout << std::endl;

    return;
  }

template< typename category_left_name, typename category_middle_name, typename category_right_name>
 void check_conversion_pass
  (
    color::model< category_left_name>  & left
   ,color::model< category_middle_name> & middle
   ,color::model<category_right_name> & desno
  )
  {
   typedef color::model< category_left_name> left_type;
   typedef color::model< category_left_name> right_type;

   long double e0 = 0;
   long double e1 = 0;
   long double e2 = 0;

   for (long double c0 = left_type::bound_type::template minimum<0>(); c0 <= left_type::bound_type::template maximum<0>(); c0 += left_type::bound_type::template range<0>() * 0.01 )
    for (long double c1 = left_type::bound_type::template minimum<1>(); c1 <= left_type::bound_type::template maximum<1>(); c1 += left_type::bound_type::template range<1>() * 0.01 )
     for (long double c2 = left_type::bound_type::template minimum<2>(); c2 <= left_type::bound_type::template maximum<2>(); c2 += left_type::bound_type::template range<2>() * 0.01 )
      {
       left.template set<0>( c0 );
       left.template set<1>( c1 );
       left.template set<2>( c2 );

       if( false == color::check::unique( left ) )
        {
         continue;
        }

       middle = left;

       desno = middle;

       left = desno;

       if( e0 < fabs( left.template get<0>() - c0 ) )
        {
         e0 = fabs( left.template get<0>() - c0 );
        }

      if( e1 < fabs( left.template get<1>() - c1 ) )
       {
        e1 = fabs( left.template get<1>() - c1 );
       }

      if( e2 < fabs( left.template get<2>() - c2 ) )
       {
        e2 = fabs( left.template get<2>() - c2 );
       }
     }


    if( 1e-5 < e0 ) goto label_failure;
    if( 1e-5 < e1 ) goto label_failure;
    if( 1e-5 < e2 ) goto label_failure;

    std::cout << "OK" <<std::endl;
    return;

    label_failure:
     std::cout << std::endl;
     std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
     std::cout << "  function - " << __FUNCTION__ << std::endl;
     std::cout << "type - " << typeid( category_left_name   ).name() << std::endl;
     std::cout << "type - " << typeid( category_middle_name ).name() << std::endl;
     std::cout << "type - " << typeid( category_right_name  ).name() << std::endl;
     std::cout << "e0: " << e0 << std::endl;
     std::cout << "e1: " << e1 << std::endl;
     std::cout << "e2: " << e2 << std::endl;
     std::cout << std::endl;

    return;
  }


void check_conversion()
 {
  color::cmy<long double >     c;
  color::cmyk<long double >    ck({0,0,0,0.5});
  color::rgb<long double >     r;
  color::hsl<long double >     hl;
  color::hsv<long double >     hv;
  color::hsi<long double >     hi;
  color::yiq<long double >     yi;
  color::yuv<long double, ::color::constant::yuv::BT_601_entity>    yu601;
  color::yuv<long double, ::color::constant::yuv::BT_709_entity>     yu709;
  color::YPbPr<long double >  ypbpr;
  color::YDbDr<long double >  ydbdr;
  color::YCgCo<long double >  ycgco;
  color::lab<long double, ::color::constant::lab::CIE_entity >      labCIE;
  color::lab<long double, ::color::constant::lab::Hunter_entity >   labHunter;

  color::lms<long double, ::color::constant::lms::von_Kries_D65_entity >      lms;
  color::luv<long double >      luv;
  color::xyy<long double >      xyy;

  // error
  // TODO check_conversion_back_and_forth( hl,     hi );
  // TODO check_conversion_back_and_forth( hi, r );


  // Tests
  check_conversion_back_and_forth( c, c  );      check_conversion_back_and_forth( ck, c  );
  check_conversion_back_and_forth( c, ck );      check_conversion_back_and_forth( ck, ck );
  check_conversion_back_and_forth( c, r  );      check_conversion_back_and_forth( ck, r  );
  check_conversion_back_and_forth( c, hl );      check_conversion_back_and_forth( ck, hl );
  check_conversion_back_and_forth( c, hv );      check_conversion_back_and_forth( ck, hv );
  check_conversion_back_and_forth( c, hi );      check_conversion_back_and_forth( ck, hi );
  check_conversion_back_and_forth( c, yi );      check_conversion_back_and_forth( ck, yi );
  check_conversion_back_and_forth( c, yu601 );   check_conversion_back_and_forth( ck, yu601 );
  check_conversion_back_and_forth( c, ypbpr  );  check_conversion_back_and_forth( ck, ypbpr  );
  check_conversion_back_and_forth( c, ydbdr  );  check_conversion_back_and_forth( ck, ydbdr  );
  check_conversion_back_and_forth( c, ycgco  );  check_conversion_back_and_forth( ck, ycgco  );
  check_conversion_back_and_forth( c, labCIE    );  check_conversion_back_and_forth( ck,   labCIE  );

  check_conversion_back_and_forth( r, c  );
  check_conversion_back_and_forth( r, ck );
  check_conversion_back_and_forth( r, r  );
  check_conversion_back_and_forth( r, hl );
  check_conversion_back_and_forth( r, hv );
  check_conversion_back_and_forth( r, hi );
  check_conversion_back_and_forth( r, yi );
  check_conversion_back_and_forth( r, yu601 );
  check_conversion_back_and_forth( r, ypbpr  );
  check_conversion_back_and_forth( r, ydbdr  );
  check_conversion_back_and_forth( r, ycgco  );
  check_conversion_back_and_forth( r, labCIE    );


  check_conversion_back_and_forth( hl,     c  );  check_conversion_back_and_forth( hv,     c  );
  check_conversion_back_and_forth( hl,     ck );  check_conversion_back_and_forth( hv,     ck );
  check_conversion_back_and_forth( hl,     r  );  check_conversion_back_and_forth( hv,     r  );
  check_conversion_back_and_forth( hl,     hl );  check_conversion_back_and_forth( hv,     hl );
  check_conversion_back_and_forth( hl,     hv );  check_conversion_back_and_forth( hv,     hv );
  check_conversion_back_and_forth( hl,     hi );  check_conversion_back_and_forth( hv,     hi );
  check_conversion_back_and_forth( hl,     yi );  check_conversion_back_and_forth( hv,     yi );
  check_conversion_back_and_forth( hl,  yu601 );  check_conversion_back_and_forth( hv,  yu601 );
  check_conversion_back_and_forth( hl, ypbpr  );  check_conversion_back_and_forth( hv, ypbpr  );
  check_conversion_back_and_forth( hl, ydbdr  );  check_conversion_back_and_forth( hv, ydbdr  );
  check_conversion_back_and_forth( hl, ycgco  );  check_conversion_back_and_forth( hv, ycgco  );
  check_conversion_back_and_forth( hl, labCIE    );  check_conversion_back_and_forth( hv,   labCIE  );

  check_conversion_back_and_forth( yi,     c  );  check_conversion_back_and_forth( yu601,     c  );
  check_conversion_back_and_forth( yi,     ck );  check_conversion_back_and_forth( yu601,     ck );
  check_conversion_back_and_forth( yi,     r  );  check_conversion_back_and_forth( yu601,     r  );
  check_conversion_back_and_forth( yi,     hl );  check_conversion_back_and_forth( yu601,     hl );
  check_conversion_back_and_forth( yi,     hv );  check_conversion_back_and_forth( yu601,     hv );
  check_conversion_back_and_forth( yi,     hi );  check_conversion_back_and_forth( yu601,     hi );
  check_conversion_back_and_forth( yi,     yi );  check_conversion_back_and_forth( yu601,     yi );
  check_conversion_back_and_forth( yi,  yu601 );  check_conversion_back_and_forth( yu601,  yu601 );
  check_conversion_back_and_forth( yi, ypbpr  );  check_conversion_back_and_forth( yu601, ypbpr  );
  check_conversion_back_and_forth( yi, ydbdr  );  check_conversion_back_and_forth( yu601, ydbdr  );
  check_conversion_back_and_forth( yi, ycgco  );  check_conversion_back_and_forth( yu601, ycgco  );
  check_conversion_back_and_forth( yi,   labCIE  );  check_conversion_back_and_forth( yu601,   labCIE  );


  check_conversion_back_and_forth( ypbpr, c  );  check_conversion_back_and_forth( ydbdr, c  );  check_conversion_back_and_forth( ycgco, c  );
  check_conversion_back_and_forth( ypbpr, ck );  check_conversion_back_and_forth( ydbdr, ck );  check_conversion_back_and_forth( ycgco, ck );
  check_conversion_back_and_forth( ypbpr, r  );  check_conversion_back_and_forth( ydbdr, r  );  check_conversion_back_and_forth( ycgco, r  );
  check_conversion_back_and_forth( ypbpr, hl );  check_conversion_back_and_forth( ydbdr, hl );  check_conversion_back_and_forth( ycgco, hl );
  check_conversion_back_and_forth( ypbpr, hv );  check_conversion_back_and_forth( ydbdr, hv );  check_conversion_back_and_forth( ycgco, hv );
  check_conversion_back_and_forth( ypbpr, hi );  check_conversion_back_and_forth( ydbdr, hi );  check_conversion_back_and_forth( ycgco, hi );
  check_conversion_back_and_forth( ypbpr, yi );  check_conversion_back_and_forth( ydbdr, yi );  check_conversion_back_and_forth( ycgco, yi );
  check_conversion_back_and_forth( ypbpr, yu601 );  check_conversion_back_and_forth( ydbdr, yu601 );  check_conversion_back_and_forth( ycgco, yu601 );

  check_conversion_back_and_forth( ypbpr, labCIE );  check_conversion_back_and_forth( ydbdr, labCIE  );  check_conversion_back_and_forth( ycgco, labCIE  );

  check_conversion_back_and_forth( ypbpr, ypbpr  );  check_conversion_back_and_forth( ydbdr, ypbpr  );  check_conversion_back_and_forth( ycgco, ypbpr  );
  check_conversion_back_and_forth( ypbpr, ydbdr  );  check_conversion_back_and_forth( ydbdr, ydbdr  );  check_conversion_back_and_forth( ycgco, ydbdr  );
  check_conversion_back_and_forth( ypbpr, ycgco  );  check_conversion_back_and_forth( ydbdr, ycgco  );  check_conversion_back_and_forth( ycgco, ycgco  );

  check_conversion_back_and_forth( ypbpr,  labCIE   );  check_conversion_back_and_forth( ydbdr,   labCIE  );  check_conversion_back_and_forth( ycgco,    labCIE );

  //check_conversion_pass( c,  ck,  r ); check_conversion_pass(  c, ck, hl ); check_conversion_pass(  c, ck, hv );
  //check_conversion_pass( ck, ck,  r ); check_conversion_pass(  c, ck, hl ); check_conversion_pass(  c, ck, hv );
 }
