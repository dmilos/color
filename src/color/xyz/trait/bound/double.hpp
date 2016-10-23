#ifndef color_xyz_trait_bound_double
#define color_xyz_trait_bound_double

#include "../../category.hpp"

#include "../../../_internal/utility/bound/xyz.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::xyz_double >
      : public ::color::_internal::utility::bound::xyz_scalar< unsigned, double >
      {
      };

   }
 }

#endif