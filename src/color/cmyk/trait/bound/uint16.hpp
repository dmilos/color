#ifndef color_cmyk_trait_bound_uint16
#define color_cmyk_trait_bound_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/bound/intrinsic.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::cmyk_uint16 >
      : public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 4, unsigned >
      {
      };

   }
 }

#endif