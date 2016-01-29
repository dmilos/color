#ifndef color_rgb_rgb_
#define color_rgb_rgb_

#include "../_internal/model.hpp"
#include "../generic/type/uint24.hpp"
#include "../generic/type/uint48.hpp"

#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"
#include "./make/make.hpp"
#include "./convert/convert.hpp"



namespace color
 {

  template< typename value_name >
   using rgb = ::color::_internal::model< ::color::category::rgb< ::color::category::rgb_scramble< value_name, 0, 1, 2 > > >;

  template< typename value_name >
   using bgr = ::color::_internal::model< ::color::category::rgb< ::color::category::rgb_scramble< value_name, 2, 1, 0 > > >;

  template< typename value_name >
   using bgra = ::color::_internal::model< ::color::category::rgb< ::color::category::rgba_scramble< value_name, 2, 1, 0, 3 > > >;

  template< typename value_name >
   using abgr = ::color::_internal::model< ::color::category::rgb< ::color::category::rgba_scramble< value_name, 3, 2, 1, 0 > > >;

  template< typename value_name >
   using rgba = ::color::_internal::model< ::color::category::rgb< ::color::category::rgba_scramble< value_name, 0, 1, 2, 3 > > >;

  template< typename value_name >
   using argb = ::color::_internal::model< ::color::category::rgb< ::color::category::rgba_scramble< value_name, 1, 2, 3, 0 > > >;

   // using rgb442  = ::color::_internal::model< TODO >;
   // using rgb556  = ::color::_internal::model< TODO >;
   // using rgb655  = ::color::_internal::model< TODO >;
   // using rgbAAA2 = ::color::_internal::model< TODO >;
 }

#endif
