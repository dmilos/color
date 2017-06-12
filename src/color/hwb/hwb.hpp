#ifndef color_hwb_hwb_
#define color_hwb_hwb_

#include "../generic/type/type.hpp"

#include "./category.hpp"
#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"



namespace color
 {

  template< typename type_name >
   using hwb = ::color::model< typename ::color::category::hwb< type_name > >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"


#endif
