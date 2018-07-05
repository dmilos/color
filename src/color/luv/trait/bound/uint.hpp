#ifndef color_luv_trait_bound_uint16
#define color_luv_trait_bound_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"

#include "./positive.hpp"

namespace color
 {
  namespace trait
   {

    template<>
     struct bound< ::color::category::luv_uint8  >
      : public ::color::_internal::luv::bound::positive< std::uint8_t,  typename ::color::trait::index< ::color::category::luv_uint8 >::instance_type >
      {
      };

    template<>
     struct bound< ::color::category::luv_uint16 >
      : public ::color::_internal::luv::bound::positive< std::uint16_t, typename ::color::trait::index< ::color::category::luv_uint16 >::instance_type >
      {
      };

    template<>
     struct bound< ::color::category::luv_uint32 >
      : public ::color::_internal::luv::bound::positive< std::uint32_t, typename ::color::trait::index< ::color::category::luv_uint32 >::instance_type >
      {
      };

    template<>
     struct bound< ::color::category::luv_uint64 >
      : public ::color::_internal::luv::bound::positive< std::uint64_t, typename ::color::trait::index< ::color::category::luv_uint64 >::instance_type >
      {
      };


   }
 }

#endif
