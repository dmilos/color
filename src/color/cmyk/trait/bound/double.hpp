#ifndef color_cmyk_trait_bound_double
#define color_cmyk_trait_bound_double

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::cmyk_double >
      : public ::color::_internal::utility::bound::general< double, unsigned >
      {
      };

   }
 }

#endif