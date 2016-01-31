#ifndef color_rgb_rgb_
#define color_rgb_rgb_

#include "../_internal/model.hpp"
#include "../generic/type/type.hpp"

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
   using rgb = ::color::_internal::model< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, 0, 1, 2 > > >;

  template< typename value_name >
   using bgr = ::color::_internal::model< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, 2, 1, 0 > > >;

  template< typename value_name >
   using bgra = ::color::_internal::model< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, 2, 1, 0, 3 > > >;

  template< typename value_name >
   using abgr = ::color::_internal::model< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, 3, 2, 1, 0 > > >;

  template< typename value_name >
   using rgba = ::color::_internal::model< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, 0, 1, 2, 3 > > >;

  template< typename value_name >
   using argb = ::color::_internal::model< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, 1, 2, 3, 0 > > >;


   //using rgb< ::color::type::split233_t  > = ::color::_internal::model< ::color::category::rgb< ::color::category::rgb_split233   > >;
   //using rgb< ::color::type::split332_t  > = ::color::_internal::model< ::color::category::rgb< ::color::category::rgb_split332   > >;
   //using rgb< ::color::type::split442_t  > = ::color::_internal::model< ::color::category::rgb< ::color::category::rgb_split442   > >;
   //using rgb< ::color::type::split556_t  > = ::color::_internal::model< ::color::category::rgb< ::color::category::rgb_split556   > >;
   //using rgb< ::color::type::split655_t  > = ::color::_internal::model< ::color::category::rgb< ::color::category::rgb_split655   > >;
   //using rgb< ::color::type::splitAAA2_t > = ::color::_internal::model< ::color::category::rgb< ::color::category::rgb_splitAAA2  > >;

 }

#endif
