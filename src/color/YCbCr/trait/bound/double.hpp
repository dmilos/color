#ifndef color_YCbCr_trait_bound_double
#define color_YCbCr_trait_bound_double

#include "../../category.hpp"

#include "../../../_internal/utility/bound/YCbCr.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::YCbCr_double >
      : public ::color::_internal::utility::bound::YCbCr_scalar< unsigned, double >
      {
      };

   }
 }

#endif