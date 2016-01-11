#ifndef color_gray_trait_container_ldouble
#define color_gray_trait_container_ldouble

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::gray_ldouble >
      : public ::color::_internal::utility::container::array< long double, 1 >
      {
      };

   }
 }

#endif