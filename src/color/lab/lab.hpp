#ifndef color_lab_lab_
#define color_lab_lab_

#include "../generic/type/type.hpp"

#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"
#include "./constant.hpp"


namespace color
 {

  template< typename type_name, ::color::constant::lab::reference_enum reference_number = ::color::constant::lab::CIE_entity >
   using lab = ::color::model< typename ::color::category::lab< type_name, reference_number > >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"
#include "./operation/operation.hpp"


#endif
