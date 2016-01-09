#ifndef color_cmy_trait_bound_uint8
#define color_cmy_trait_bound_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/bound/332.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::cmy_uint8 >
      : public ::color::_internal::utility::bound::bound332< unsigned >
      {
      };

   }
 }

#endif
