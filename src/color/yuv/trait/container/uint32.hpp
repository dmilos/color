#ifndef color_yuv_trait_container_uint32
#define color_yuv_trait_container_uint32

#include "../../category.hpp"

#include "../../../_internal/utility/container/unsigned.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::yuv_uint32 >
      : public  ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint8_t, unsigned, 3,  8 >
      {
      };

   }
 }

#endif