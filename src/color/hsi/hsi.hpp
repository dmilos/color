#ifndef color_hsi_hsi_
#define color_hsi_hsi_

#include "../generic/type/type.hpp"

#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"


namespace color
 {

  template< typename type_name >
   using hsi = ::color::model< ::color::category::hsi< type_name > >;

 }

#include "./check/check.hpp"
#include "./fix/fix.hpp"


#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"
#include "./operation/operation.hpp"

#endif
