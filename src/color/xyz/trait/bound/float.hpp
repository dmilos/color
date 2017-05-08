#ifndef color_xyz_trait_bound_float
#define color_xyz_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::xyz_float >
      : public ::color::_internal::xyz::bound::scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::xyz_double >
      : public ::color::_internal::xyz::bound::scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::xyz_ldouble >
      : public ::color::_internal::xyz::bound::scalar< unsigned, long double >
      {
      };

   }
 }

#endif
