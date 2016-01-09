#ifndef color_yiq_trait_container_float
#define color_yiq_trait_container_float

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::yiq_float >
      : public  ::color::_internal::utility::container::array< float, 3 >
      {
      };

   }
 }

#endif