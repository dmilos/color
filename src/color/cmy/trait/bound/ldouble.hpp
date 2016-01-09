#ifndef color_cmy_trait_bound_ldouble
#define color_cmy_trait_bound_ldouble

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::cmy_ldouble >
      : public ::color::_internal::utility::bound::general< long double, unsigned >
      {
      };

   }
 }

#endif