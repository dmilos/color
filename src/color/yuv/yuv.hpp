#ifndef color_yuv_yuv_
#define color_yuv_yuv_

#include "../generic/type/type.hpp"

#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"
#include "./constant.hpp"


namespace color
 {

  template< typename type_name, ::color::constant::yuv::reference_enum reference_number = ::color::constant::yuv::BT_709_entity >
   using yuv = ::color::model< typename ::color::category::yuv< type_name, reference_number > >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"


#endif
