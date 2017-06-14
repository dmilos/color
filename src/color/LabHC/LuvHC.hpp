#ifndef color_LuvHC_LuvHC_
#define color_LuvHC_LuvHC_

#include "../generic/type/type.hpp"

#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"
#include "./constant.hpp"


namespace color
 {

  template< typename type_name >
   using LuvHC = ::color::model< typename ::color::category::LuvHC< type_name> >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"


#endif
