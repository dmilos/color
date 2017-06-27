#ifndef color_gray_trait_container_uint
#define color_gray_trait_container_uint

#include "../../category.hpp"

#include "../../../_internal/utility/container/unsigned.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct container< ::color::category::gray_uint8 >
      : public ::color::_internal::utility::container::Unsigned< std::uint8_t,  std::uint8_t,  typename ::color::trait::index< ::color::category::gray_uint8 >::instance_type,  1, 8  >
      {
      };

    template< >
     struct container< ::color::category::gray_uint16 >
      : public ::color::_internal::utility::container::Unsigned< std::uint16_t, std::uint16_t,  typename ::color::trait::index< ::color::category::gray_uint16 >::instance_type, 1, 16 >
      {
      };

    template< >
     struct container< ::color::category::gray_uint32 >
      : public ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint32_t,  typename ::color::trait::index< ::color::category::gray_uint32 >::instance_type, 1, 32 >
      {
      };

    template< >
     struct container< ::color::category::gray_uint64 >
      : public ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint64_t,  typename ::color::trait::index< ::color::category::gray_uint64 >::instance_type, 1, 64 >
      {
      };


   }
 }

#endif
