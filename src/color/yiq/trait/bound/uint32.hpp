#ifndef color_yiq_trait_bound_uint32
#define color_yiq_trait_bound_uint32

#include "../../category.hpp"

#include "../../../_internal/utility/bound/intrinsic.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::yiq_uint32 >
      : public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 8, unsigned >
      {
      };

   }
 }

#endif