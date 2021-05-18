#ifndef color_hsv_hsv_
#define color_hsv_hsv_

#include "../generic/type/type.hpp"

#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"



namespace color
 {

  template< typename type_name >
   using hsv = ::color::model< ::color::category::hsv< type_name > >;

 }

#include "./check/check.hpp"
#include "./fix/fix.hpp"


#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"
#include "./operation/operation.hpp"

#endif
