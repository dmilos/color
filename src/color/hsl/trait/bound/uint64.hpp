#ifndef color_hsl_trait_bound_uint64
#define color_hsl_trait_bound_uint64

#include "../../category.hpp"

#include "../../../_internal/utility/bound/intrinsic.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsl_uint64 >
      : public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 16, unsigned >
      {
      };

   }
 }

#endif