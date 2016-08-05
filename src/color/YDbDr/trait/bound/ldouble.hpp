#ifndef color_YDbDr_trait_bound_ldouble
#define color_YDbDr_trait_bound_ldouble

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::YDbDr_ldouble >
      : public ::color::_internal::utility::bound::YDbDr_scalar< unsigned, long double >
      {
      };

   }
 }

#endif