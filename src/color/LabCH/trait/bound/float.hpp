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
      : public ::color::_internal::LabCH::bound::scalar< typename ::color::trait::index< ::color::category::LabCH_float >::instance_type, float >
      {
      };

    template< >
     struct bound< ::color::category::LabCH_double >
      : public ::color::_internal::LabCH::bound::scalar< typename ::color::trait::index< ::color::category::LabCH_double >::instance_type, double >
      {
      };

    template< >
     struct bound< ::color::category::LabCH_ldouble >
      : public ::color::_internal::LabCH::bound::scalar< typename ::color::trait::index< ::color::category::LabCH_ldouble >::instance_type, long double >
      {
      };

   }
 }

#endif
