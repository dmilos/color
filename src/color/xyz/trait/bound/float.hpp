#ifndef color_xyz_trait_bound_float
#define color_xyz_trait_bound_float

#include "../../category.hpp"

#include "../../../_internal/utility/bound/xyz.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::xyz_float >
      : public ::color::_internal::utility::bound::xyz_scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::xyz_double >
      : public ::color::_internal::utility::bound::xyz_scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::xyz_ldouble >
      : public ::color::_internal::utility::bound::xyz_scalar< unsigned, long double >
      {
      };

   }
 }

#endif
