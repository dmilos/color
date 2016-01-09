#ifndef color_yiq_trait_container_uint32
#define color_yiq_trait_container_uint32

#include "../../category.hpp"

#include "../../../_internal/utility/container/unsigned.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::yiq_uint32 >
      : public  ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint8_t, unsigned, 3,  8 >
      {
      };

   }
 }

#endif