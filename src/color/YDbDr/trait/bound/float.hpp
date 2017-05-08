#ifndef color_YDbDr_trait_bound_float
#define color_YDbDr_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::YDbDr_float >
      : public ::color::_internal::YDbDr::bound::scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::YDbDr_double >
      : public ::color::_internal::YDbDr::bound::scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::YDbDr_ldouble >
      : public ::color::_internal::YDbDr::bound::scalar< unsigned, long double >
      {
      };

   }
 }

#endif
