#ifndef color_hcg_trait_bound_double
#define color_hcg_trait_bound_double

#include "../../category.hpp"

#include "../../../_internal/utility/bound/hcg.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hcg_double >
      : public ::color::_internal::utility::bound::hcg_scalar< unsigned, double >
      {
      };

   }
 }

#endif