#ifndef color_YPbPr_trait_bound_double
#define color_YPbPr_trait_bound_double

#include "../../category.hpp"

#include "../../../_internal/utility/bound/YPbPr.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::YPbPr_double >
      : public ::color::_internal::utility::bound::YPbPr_scalar< unsigned, double >
      {
      };

   }
 }

#endif