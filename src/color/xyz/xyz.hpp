#ifndef color_xyz_xyz_
#define color_xyz_xyz_

#include "../generic/type/type.hpp"

#include "./category.hpp"
#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"



namespace color
 {

  template< typename type_name/*, typename reference_name */>
   using xyz = ::color::model< typename ::color::category::xyz< type_name/*, reference_name */ > >;

 }





#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"


#endif
