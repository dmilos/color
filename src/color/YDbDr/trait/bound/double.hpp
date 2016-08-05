#ifndef color_YDbDr_trait_bound_double
#define color_YDbDr_trait_bound_double

#include "../../category.hpp"

#include "../../../_internal/utility/bound/YDbDr.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::YDbDr_double >
      : public ::color::_internal::utility::bound::YDbDr_scalar< unsigned, double >
      {
      };

   }
 }

#endif