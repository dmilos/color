#ifndef color_YPbPr_YPbPr_
#define color_YPbPr_YPbPr_


#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"
#include "./constant.hpp"


namespace color
 {
  
  template< typename type_name, ::color::constant::YPbPr::reference_enum reference_number = ::color::constant::YPbPr::BT_709_entity >
   using YPbPr = ::color::model< ::color::category::YPbPr< type_name, reference_number > >;

 }


#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"


#endif
