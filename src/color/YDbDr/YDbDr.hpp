#ifndef color_YDbDr_YDbDr_
#define color_YDbDr_YDbDr_


#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"
#include "./constant.hpp"

namespace color
 {

  template< typename type_name >
   using YDbDr = ::color::model< typename ::color::category::YDbDr< type_name > >;

 }


#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"


#endif
