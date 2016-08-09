#ifndef color_gray_trait_bound_bool
#define color_gray_trait_bound_bool

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::gray_bool >
      : public ::color::_internal::utility::bound::general< bool, unsigned >
      {
      };

   }
 }

#endif