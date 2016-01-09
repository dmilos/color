#ifndef color_yiq_trait_bound_double
#define color_yiq_trait_bound_double

#include "../../category.hpp"

#include "../../../_internal/utility/bound/yiq.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::yiq_double >
      : public ::color::_internal::utility::bound::yiq_scalar< unsigned, double >
      {
      };

   }
 }

#endif