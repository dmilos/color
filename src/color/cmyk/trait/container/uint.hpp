#ifndef color_cmyk_trait_container_uint16
#define color_cmyk_trait_container_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::cmyk_uint8 >
      : public ::color::_internal::utility::container::array< std::uint8_t, 4 >
      {
      };

    template< >
     struct container< ::color::category::cmyk_uint16 >
      : public ::color::_internal::utility::container::array< std::uint16_t, 4 >
      {
      };

    template< >
     struct container< ::color::category::cmyk_uint32 >
      : public ::color::_internal::utility::container::array< std::uint32_t, 4 >
      {
      };

    template< >
     struct container< ::color::category::cmyk_uint64 >
      : public ::color::_internal::utility::container::array< std::uint64_t, 4 >
      {
      };


   }
 }

#endif
