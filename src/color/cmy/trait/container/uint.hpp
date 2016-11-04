#ifndef color_cmy_trait_container_uint
#define color_cmy_trait_container_uint

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::cmy_uint8 >
      : public ::color::_internal::utility::container::array< std::uint8_t, 3 >
      {
      };

    template< >
     struct container< ::color::category::cmy_uint16 >
      : public ::color::_internal::utility::container::array< std::uint16_t, 3 >
      {
      };

    template< >
     struct container< ::color::category::cmy_uint32 >
      : public ::color::_internal::utility::container::array< std::uint32_t, 3 >
      {
      };

    template< >
     struct container< ::color::category::cmy_uint64 >
      : public ::color::_internal::utility::container::array< std::uint64_t, 3 >
      {
      };

   }
 }

#endif
