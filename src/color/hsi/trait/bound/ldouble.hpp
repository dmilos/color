#ifndef color_hsi_trait_bound_ldouble
#define color_hsi_trait_bound_ldouble

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsi_ldouble >
      : public ::color::_internal::utility::bound::hsi_scalar< unsigned, long double >
      {
      };

   }
 }

#endif