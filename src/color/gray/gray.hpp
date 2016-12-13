#ifndef color_gray_gray
#define color_gray_gray

#include "../generic/type/type.hpp"

#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"



namespace color
 {

  template< typename type_name >
   using gray = ::color::model< ::color::category::gray< type_name > >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"

#include "./operation/operation.hpp"

#endif
