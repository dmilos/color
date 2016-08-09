#ifndef color_yuv_trait_bound_uint32
#define color_yuv_trait_bound_uint32

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::yuv::reference_enum reference_number >
     struct bound< ::color::category::yuv_uint32<reference_number> >
      : public ::color::_internal::utility::bound::general< std::uint32_t, unsigned >
      {
      };

   }
 }

#endif
