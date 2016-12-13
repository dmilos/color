#ifndef color_YCgCo_YCgCo_
#define color_YCgCo_YCgCo_


#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"
#include "./constant.hpp"


namespace color
 {

  template< typename type_name >
   using YCgCo = ::color::model< typename ::color::category::YCgCo< type_name > >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"


#endif
