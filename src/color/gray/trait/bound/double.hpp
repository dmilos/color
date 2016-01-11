#ifndef color_gray_trait_bound_double
#define color_gray_trait_bound_double

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::gray_double >
      : public ::color::_internal::utility::bound::general< double, unsigned >
      {
      };

   }
 }

#endif