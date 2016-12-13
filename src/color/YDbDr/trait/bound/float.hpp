#ifndef color_YDbDr_trait_bound_float
#define color_YDbDr_trait_bound_float

#include "../../category.hpp"

#include "../../../_internal/utility/bound/YDbDr.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::YDbDr_float >
      : public ::color::_internal::utility::bound::YDbDr_scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::YDbDr_double >
      : public ::color::_internal::utility::bound::YDbDr_scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::YDbDr_ldouble >
      : public ::color::_internal::utility::bound::YDbDr_scalar< unsigned, long double >
      {
      };

   }
 }

#endif