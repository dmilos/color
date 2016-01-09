#ifndef color_yuv_trait_container_float
#define color_yuv_trait_container_float

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::yuv_float >
      : public  ::color::_internal::utility::container::array< float, 3 >
      {
      };

   }
 }

#endif