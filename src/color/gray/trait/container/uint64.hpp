#ifndef color_gray_trait_container_uint64
#define color_gray_trait_container_uint64

#include "../../category.hpp"

#include "../../../_internal/utility/container/unsigned.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::gray_uint64 >
      : public ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint64_t, unsigned, 1, 64 > 
      {
      };

   }
 }

#endif