#ifndef color_yiq_trait_bound_float
#define color_yiq_trait_bound_float

#include "../../category.hpp"

#include "../../../_internal/utility/bound/yiq.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::yiq_float >
      : public ::color::_internal::utility::bound::yiq_scalar< unsigned, float >
      {
      };

    template< >
     struct bound< ::color::category::yiq_double >
      : public ::color::_internal::utility::bound::yiq_scalar< unsigned, double >
      {
      };

    template< >
     struct bound< ::color::category::yiq_ldouble >
      : public ::color::_internal::utility::bound::yiq_scalar< unsigned, long double >
      {
      };

   }
 }

#endif
