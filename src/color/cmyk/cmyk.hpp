#ifndef color_cmyk_cmyk_
#define color_cmyk_cmyk_

#include "../generic/type/type.hpp"

#include "./category.hpp"
#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"



namespace color
 {

  template< typename type_name >
   using cmyk = ::color::model< ::color::category::cmyk< type_name > >;

 }


#include "./check/check.hpp"
#include "./fix/fix.hpp"

#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"


#endif
