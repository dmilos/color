#ifndef color_LuvCH_trait_bound_float
#define color_LuvCH_trait_bound_float

#include "../../../generic/trait/bound.hpp"
#include "../../category.hpp"
#include "./scalar.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::LuvCH_float >
      : public ::color::_internal::LuvCH::bound::scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::LuvCH_double >
      : public ::color::_internal::LuvCH::bound::scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::LuvCH_ldouble >
      : public ::color::_internal::LuvCH::bound::scalar< unsigned, long double >
      {
      };

   }
 }

#endif
