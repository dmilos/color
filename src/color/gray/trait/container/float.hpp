#ifndef color_gray_trait_container_float
#define color_gray_trait_container_float

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::gray_float >
      : public ::color::_internal::utility::container::array< float, 1 >
      {
      };

    template< >
     struct container< ::color::category::gray_ldouble >
      : public ::color::_internal::utility::container::array< long double, 1 >
      {
      };

    template< >
     struct container< ::color::category::gray_double >
      : public ::color::_internal::utility::container::array< double, 1 >
      {
      };

   }
 }

#endif
