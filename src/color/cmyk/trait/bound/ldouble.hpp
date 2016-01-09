#ifndef color_cmyk_trait_bound_ldouble
#define color_cmyk_trait_bound_ldouble

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::cmyk_ldouble >
      : public ::color::_internal::utility::bound::general< long double, unsigned >
      {
      };

   }
 }

#endif