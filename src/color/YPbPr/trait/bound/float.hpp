#ifndef color_YPbPr_trait_bound_float
#define color_YPbPr_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct bound< ::color::category::YPbPr_float< reference_number > >
      : public ::color::_internal::YPbPr::bound::scalar< unsigned, float >
      {
      };

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct bound< ::color::category::YPbPr_double<reference_number> >
      : public ::color::_internal::YPbPr::bound::scalar< unsigned, double >
      {
      };

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct bound< ::color::category::YPbPr_ldouble<reference_number> >
      : public ::color::_internal::YPbPr::bound::scalar< unsigned, long double >
      {
      };

   }
 }

#endif
