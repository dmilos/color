#ifndef color_YCgCo_trait_bound_uint16
#define color_YCgCo_trait_bound_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::YCgCo_uint8  >
      : public ::color::_internal::utility::bound::general< std::uint8_t, typename ::color::trait::index< ::color::category::YCgCo_uint8 >::instance_type >
      {
      };

    template< >
     struct bound< ::color::category::YCgCo_uint16 >
      : public ::color::_internal::utility::bound::general< std::uint16_t, typename ::color::trait::index< ::color::category::YCgCo_uint16 >::instance_type >
      {
      };

    template< >
     struct bound< ::color::category::YCgCo_uint32 >
      : public ::color::_internal::utility::bound::general< std::uint32_t, typename ::color::trait::index< ::color::category::YCgCo_uint32 >::instance_type >
      {
      };

    template< >
     struct bound< ::color::category::YCgCo_uint64 >
      : public ::color::_internal::utility::bound::general< std::uint64_t, typename ::color::trait::index< ::color::category::YCgCo_uint64 >::instance_type >
      {
      };

   }
 }

#endif
