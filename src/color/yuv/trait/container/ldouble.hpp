#ifndef color_yuv_trait_container_ldouble
#define color_yuv_trait_container_ldouble

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::yuv_ldouble >
      : public  ::color::_internal::utility::container::array< long double, 3 >
      {
      };

   }
 }

#endif