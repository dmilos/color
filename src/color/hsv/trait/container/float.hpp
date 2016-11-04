#ifndef color_hsv_trait_container_float
#define color_hsv_trait_container_float

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::hsv_float >
      : public  ::color::_internal::utility::container::array< float, 3 >
      {
      };

    template< >
     struct container< ::color::category::hsv_double >
      : public  ::color::_internal::utility::container::array< double, 3 >
      {
      };

    template< >
     struct container< ::color::category::hsv_ldouble >
      : public  ::color::_internal::utility::container::array< long double, 3 >
      {
      };

   }
 }

#endif
