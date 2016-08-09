#ifndef color_gray_trait_container_bool
#define color_gray_trait_container_bool

#include "../../category.hpp"

#include "../../../_internal/utility/container/boolean.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::gray_bool >
      : public  ::color::_internal::utility::container::boolean< unsigned >
      {
      };

   }
 }

#endif