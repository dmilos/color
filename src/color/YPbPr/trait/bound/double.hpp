#ifndef color_YPbPr_trait_bound_double
#define color_YPbPr_trait_bound_double

#include "../../category.hpp"

#include "../../../_internal/utility/bound/YPbPr.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct bound< ::color::category::YPbPr_double<reference_number> >
      : public ::color::_internal::utility::bound::YPbPr_scalar< unsigned, double >
      {
      };

   }
 }

#endif