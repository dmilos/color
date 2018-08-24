#ifndef color_LabCH_LabCH_
#define color_LabCH_LabCH_

#include "../generic/type/type.hpp"

#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"


namespace color
 {

  template< typename type_name >
   using LabCH = ::color::model< typename ::color::category::LabCH< type_name > >;

 }


#include "./check/check.hpp"
#include "./fix/fix.hpp"

#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"


#endif
