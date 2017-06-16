#ifndef color_LabCH_trait_bound_float
#define color_LabCH_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::LabCH_float >
      : public ::color::_internal::LabCH::bound::scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::LabCH_double >
      : public ::color::_internal::LabCH::bound::scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::LabCH_ldouble >
      : public ::color::_internal::LabCH::bound::scalar< unsigned, long double >
      {
      };

   }
 }

#endif
