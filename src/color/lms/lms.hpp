#ifndef color_lms_lms_
#define color_lms_lms_

#include "../generic/type/type.hpp"

#include "./category.hpp"
#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"



namespace color
 {

  template< typename type_name >
   using lms = ::color::model< typename ::color::category::lms< type_name > >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"


#endif
