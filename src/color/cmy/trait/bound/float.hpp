#ifndef color_cmy_trait_bound_float
#define color_cmy_trait_bound_float

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::cmy_float >
      : public ::color::_internal::utility::bound::general< float, unsigned >
      {
      };

    template< >
     struct bound< ::color::category::cmy_double >
      : public ::color::_internal::utility::bound::general< double, unsigned >
      {
      };

    template< >
     struct bound< ::color::category::cmy_ldouble >
      : public ::color::_internal::utility::bound::general< long double, unsigned >
      {
      };

   }
 }

#endif