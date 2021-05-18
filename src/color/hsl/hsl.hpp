#ifndef color_hsl_hsl_
#define color_hsl_hsl_

#include "../generic/type/type.hpp"

#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"


namespace color
 {

  template< typename type_name >
   using hsl = ::color::model< ::color::category::hsl< type_name > >;

 }


#include "./check/check.hpp"


#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"
#include "./operation/operation.hpp"

#endif
