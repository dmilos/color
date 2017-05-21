#ifndef color_lms_lms_
#define color_lms_lms_

#include "../generic/type/type.hpp"

#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"
#include "./constant/constant.hpp"


namespace color
 {

  template< typename type_name, ::color::constant::lms::reference_enum reference_number = ::color::constant::lms::von_Kries_D65_entity  >
   using lms = ::color::model< typename ::color::category::lms< type_name, reference_number > >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"


#endif
