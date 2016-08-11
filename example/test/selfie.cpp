#include <iostream>
#include <iomanip>

#include "color/color.hpp"

template< typename category_name >
 void test_make()
  {
   color::rgb< long double> r;

   color::model< category_name > mc;
   color::model< category_name > mo;

   color::make::black      ( r ); mc = r; color::make::black      ( mo ); if( false == (mo==mc) ) std::cout << "black     ( " << (mo==mc) << " ); ";
   color::make::white      ( r ); mc = r; color::make::white      ( mo ); if( false == (mo==mc) ) std::cout << "white     ( " << (mo==mc) << " ); ";
   color::make::red        ( r ); mc = r; color::make::red        ( mo ); if( false == (mo==mc) ) std::cout << "red       ( " << (mo==mc) << " ); ";
   color::make::lime       ( r ); mc = r; color::make::lime       ( mo ); if( false == (mo==mc) ) std::cout << "lime      ( " << (mo==mc) << " ); ";
   color::make::blue       ( r ); mc = r; color::make::blue       ( mo ); if( false == (mo==mc) ) std::cout << "blue      ( " << (mo==mc) << " ); ";
   color::make::aqua       ( r ); mc = r; color::make::aqua       ( mo ); if( false == (mo==mc) ) std::cout << "aqua      ( " << (mo==mc) << " ); ";
   color::make::cyan       ( r ); mc = r; color::make::cyan       ( mo ); if( false == (mo==mc) ) std::cout << "cyan      ( " << (mo==mc) << " ); ";
   color::make::fuchsia    ( r ); mc = r; color::make::fuchsia    ( mo ); if( false == (mo==mc) ) std::cout << "fuchsia   ( " << (mo==mc) << " ); ";
   color::make::gray50     ( r ); mc = r; color::make::gray50     ( mo ); if( false == (mo==mc) ) std::cout << "gray50    ( " << (mo==mc) << " ); ";
   color::make::green      ( r ); mc = r; color::make::green      ( mo ); if( false == (mo==mc) ) std::cout << "green     ( " << (mo==mc) << " ); ";
   color::make::magenta    ( r ); mc = r; color::make::magenta    ( mo ); if( false == (mo==mc) ) std::cout << "magenta   ( " << (mo==mc) << " ); ";
   color::make::maroon     ( r ); mc = r; color::make::maroon     ( mo ); if( false == (mo==mc) ) std::cout << "maroon    ( " << (mo==mc) << " ); ";
   color::make::navy       ( r ); mc = r; color::make::navy       ( mo ); if( false == (mo==mc) ) std::cout << "navy      ( " << (mo==mc) << " ); ";
   color::make::olive      ( r ); mc = r; color::make::olive      ( mo ); if( false == (mo==mc) ) std::cout << "olive     ( " << (mo==mc) << " ); ";
   color::make::orange     ( r ); mc = r; color::make::orange     ( mo ); if( false == (mo==mc) ) std::cout << "orange    ( " << (mo==mc) << " ); ";
   color::make::purple     ( r ); mc = r; color::make::purple     ( mo ); if( false == (mo==mc) ) std::cout << "purple    ( " << (mo==mc) << " ); ";
   color::make::silver     ( r ); mc = r; color::make::silver     ( mo ); if( false == (mo==mc) ) std::cout << "silver    ( " << (mo==mc) << " ); ";
   color::make::teal       ( r ); mc = r; color::make::teal       ( mo ); if( false == (mo==mc) ) std::cout << "teal      ( " << (mo==mc) << " ); ";
   color::make::violet     ( r ); mc = r; color::make::violet     ( mo ); if( false == (mo==mc) ) std::cout << "violet    ( " << (mo==mc) << " ); ";
   color::make::yellow     ( r ); mc = r; color::make::yellow     ( mo ); if( false == (mo==mc) ) std::cout << "yellow    ( " << (mo==mc) << " ); ";

   color::make::aquamarine ( r ); mc = r; color::make::aquamarine ( mo ); if( false == (mo==mc) ) std::cout << "aquamarine( " << (mo==mc) << " ); ";
   color::make::azure      ( r ); mc = r; color::make::azure      ( mo ); if( false == (mo==mc) ) std::cout << "azure     ( " << (mo==mc) << " ); ";
   color::make::beige      ( r ); mc = r; color::make::beige      ( mo ); if( false == (mo==mc) ) std::cout << "beige     ( " << (mo==mc) << " ); ";
   color::make::bisque     ( r ); mc = r; color::make::bisque     ( mo ); if( false == (mo==mc) ) std::cout << "bisque    ( " << (mo==mc) << " ); ";
   color::make::brown      ( r ); mc = r; color::make::brown      ( mo ); if( false == (mo==mc) ) std::cout << "brown     ( " << (mo==mc) << " ); ";
   color::make::chocolate  ( r ); mc = r; color::make::chocolate  ( mo ); if( false == (mo==mc) ) std::cout << "chocolate ( " << (mo==mc) << " ); ";
   color::make::coral      ( r ); mc = r; color::make::coral      ( mo ); if( false == (mo==mc) ) std::cout << "coral     ( " << (mo==mc) << " ); ";
   color::make::crimson    ( r ); mc = r; color::make::crimson    ( mo ); if( false == (mo==mc) ) std::cout << "crimson   ( " << (mo==mc) << " ); ";
   color::make::gainsboro  ( r ); mc = r; color::make::gainsboro  ( mo ); if( false == (mo==mc) ) std::cout << "gainsboro ( " << (mo==mc) << " ); ";
   color::make::gold       ( r ); mc = r; color::make::gold       ( mo ); if( false == (mo==mc) ) std::cout << "gold      ( " << (mo==mc) << " ); ";
   color::make::indigo     ( r ); mc = r; color::make::indigo     ( mo ); if( false == (mo==mc) ) std::cout << "indigo    ( " << (mo==mc) << " ); ";
   color::make::ivory      ( r ); mc = r; color::make::ivory      ( mo ); if( false == (mo==mc) ) std::cout << "ivory     ( " << (mo==mc) << " ); ";
   color::make::khaki      ( r ); mc = r; color::make::khaki      ( mo ); if( false == (mo==mc) ) std::cout << "khaki     ( " << (mo==mc) << " ); ";
   color::make::lavender   ( r ); mc = r; color::make::lavender   ( mo ); if( false == (mo==mc) ) std::cout << "lavender  ( " << (mo==mc) << " ); ";
   color::make::linen      ( r ); mc = r; color::make::linen      ( mo ); if( false == (mo==mc) ) std::cout << "linen     ( " << (mo==mc) << " ); ";
   color::make::moccasin   ( r ); mc = r; color::make::moccasin   ( mo ); if( false == (mo==mc) ) std::cout << "moccasin  ( " << (mo==mc) << " ); ";
   color::make::orchid     ( r ); mc = r; color::make::orchid     ( mo ); if( false == (mo==mc) ) std::cout << "orchid    ( " << (mo==mc) << " ); ";
   color::make::peru       ( r ); mc = r; color::make::peru       ( mo ); if( false == (mo==mc) ) std::cout << "peru      ( " << (mo==mc) << " ); ";
   color::make::pink       ( r ); mc = r; color::make::pink       ( mo ); if( false == (mo==mc) ) std::cout << "pink      ( " << (mo==mc) << " ); ";
   color::make::plum       ( r ); mc = r; color::make::plum       ( mo ); if( false == (mo==mc) ) std::cout << "plum      ( " << (mo==mc) << " ); ";
   color::make::salmon     ( r ); mc = r; color::make::salmon     ( mo ); if( false == (mo==mc) ) std::cout << "salmon    ( " << (mo==mc) << " ); ";
   color::make::sienna     ( r ); mc = r; color::make::sienna     ( mo ); if( false == (mo==mc) ) std::cout << "sienna    ( " << (mo==mc) << " ); ";
   color::make::snow       ( r ); mc = r; color::make::snow       ( mo ); if( false == (mo==mc) ) std::cout << "snow      ( " << (mo==mc) << " ); ";
   color::make::tan        ( r ); mc = r; color::make::tan        ( mo ); if( false == (mo==mc) ) std::cout << "tan       ( " << (mo==mc) << " ); ";
   color::make::thistle    ( r ); mc = r; color::make::thistle    ( mo ); if( false == (mo==mc) ) std::cout << "thistle   ( " << (mo==mc) << " ); ";
   color::make::tomato     ( r ); mc = r; color::make::tomato     ( mo ); if( false == (mo==mc) ) std::cout << "tomato    ( " << (mo==mc) << " ); ";
   color::make::turquoise  ( r ); mc = r; color::make::turquoise  ( mo ); if( false == (mo==mc) ) std::cout << "turquoise ( " << (mo==mc) << " ); ";
   color::make::wheat      ( r ); mc = r; color::make::wheat      ( mo ); if( false == (mo==mc) ) std::cout << "wheat     ( " << (mo==mc) << " ); ";

   std::cout << std::endl;
  }

void test_selfie()
 {
  std::cout<< "-- cmy_float"  << std::endl; test_make< color::category::cmy_double>();  std::cout << std::endl;
  std::cout<< "-- cmyk_float" << std::endl; test_make< color::category::cmyk_double>(); std::cout << std::endl;
  std::cout<< "-- hsl_float"  << std::endl; test_make< color::category::hsl_double>();  std::cout << std::endl;
  std::cout<< "-- hsv_float"  << std::endl; test_make< color::category::hsv_double>();  std::cout << std::endl;
  std::cout<< "-- yiq_float"  << std::endl; test_make< color::category::yiq_double>();  std::cout << std::endl;

  std::cout<< "-- yuv609_float"  << std::endl; test_make< color::category::yuv_double<::color::constant::yuv::BT_601_entity> >();  std::cout << std::endl;
  std::cout<< "-- yuv701_float"  << std::endl; test_make< color::category::yuv_double<::color::constant::yuv::BT_709_entity> >();  std::cout << std::endl;

  std::cout<< "-- rgb_float"  << std::endl; test_make< color::category::rgb_double>();  std::cout << std::endl;

  std::cout<< "-- YCbCr_float"  << std::endl; test_make< color::category::YCbCr_double>();  std::cout << std::endl;
  std::cout<< "-- YCgCo_float"  << std::endl; test_make< color::category::YCgCo_double>();  std::cout << std::endl;
  std::cout<< "-- YDbDr_float"  << std::endl; test_make< color::category::YDbDr_double>();  std::cout << std::endl;
  std::cout<< "-- YPbPr_float"  << std::endl; test_make< color::category::YPbPr_double<::color::constant::YPbPr::BT_601_entity> >();  std::cout << std::endl;
  std::cout<< "-- YPbPr_float"  << std::endl; test_make< color::category::YPbPr_double<::color::constant::YPbPr::BT_709_entity> >();  std::cout << std::endl;
  std::cout<< "-- YPbPr_float"  << std::endl; test_make< color::category::YPbPr_double<::color::constant::YPbPr::BT_2020_entity> >();  std::cout << std::endl;
 }

