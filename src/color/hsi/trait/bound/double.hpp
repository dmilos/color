#ifndef color_hsi_trait_bound_double
#define color_hsi_trait_bound_double

#include "../../category.hpp"

#include "../../../_internal/utility/bound/hsi.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsi_double >
      : public ::color::_internal::utility::bound::hsi_scalar< unsigned, double >
      {
      };

   }
 }

#endif