#ifndef color_YPbPr_trait_bound_float
#define color_YPbPr_trait_bound_float

#include "../../category.hpp"

#include "../../../_internal/utility/bound/YPbPr.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct bound< ::color::category::YPbPr_float< reference_number > >
      : public ::color::_internal::utility::bound::YPbPr_scalar< unsigned, float >
      {
      };

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct bound< ::color::category::YPbPr_double<reference_number> >
      : public ::color::_internal::utility::bound::YPbPr_scalar< unsigned, double >
      {
      };

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct bound< ::color::category::YPbPr_ldouble<reference_number> >
      : public ::color::_internal::utility::bound::YPbPr_scalar< unsigned, long double >
      {
      };


   }
 }

#endif