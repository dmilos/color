#ifndef color_gray_trait_bound_float
#define color_gray_trait_bound_float

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::gray_float >
      : public ::color::_internal::utility::bound::general< float, unsigned >
      {
      };

    template< >
     struct bound< ::color::category::gray_double >
      : public ::color::_internal::utility::bound::general< double, unsigned >
      {
      };

    template< >
     struct bound< ::color::category::gray_ldouble >
      : public ::color::_internal::utility::bound::general< long double, unsigned >
      {
      };


   }
 }

#endif