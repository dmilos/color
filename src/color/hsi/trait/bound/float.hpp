#ifndef color_hsi_trait_bound_float
#define color_hsi_trait_bound_float

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsi_float >
      : public ::color::_internal::utility::bound::hsi_scalar< unsigned, float >
      {
      };

   }
 }

#endif