#ifndef color_YPbPr_trait_container_uint32
#define color_YPbPr_trait_container_uint32

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::YPbPr_uint32 >
      : public ::color::_internal::utility::container::array< std::uint32_t, 3 >
      {
      };

   }
 }

#endif
