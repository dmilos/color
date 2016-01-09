#ifndef color_cmy_trait_container_double
#define color_cmy_trait_container_double

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::cmy_double >
      : public  ::color::_internal::utility::container::array< double, 3 >
      {
      };

   }
 }

#endif