#ifndef color_cmyk_trait_container_float
#define color_cmyk_trait_container_float

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::cmyk_float >
      : public  ::color::_internal::utility::container::array< float, 4 >
      {
      };

    template< >
     struct container< ::color::category::cmyk_double >
      : public  ::color::_internal::utility::container::array< double, 4 >
      {
      };

    template< >
     struct container< ::color::category::cmyk_ldouble >
      : public  ::color::_internal::utility::container::array< long double, 4 >
      {
      };

   }
 }

#endif
