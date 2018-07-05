#ifndef color_luv_trait_bound_int
#define color_luv_trait_bound_int

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"

#include "./constrain.hpp"

namespace color
 {
  namespace trait
   {

    template<>
     struct bound< ::color::category::luv_int8  >
      : public ::color::_internal::luv::bound::constrain< std::int16_t,  typename ::color::trait::index< ::color::category::luv_int8 >::instance_type >
      {
      };

    template<>
     struct bound< ::color::category::luv_int16 >
      : public ::color::_internal::luv::bound::constrain< std::int16_t,  typename ::color::trait::index< ::color::category::luv_int16 >::instance_type >
      {
      };

    template<>
     struct bound< ::color::category::luv_int32 >
      : public ::color::_internal::luv::bound::constrain< std::int32_t,  typename ::color::trait::index< ::color::category::luv_int32 >::instance_type >
      {
      };

    template<>
     struct bound< ::color::category::luv_int64 >
      : public ::color::_internal::luv::bound::constrain< std::int64_t,  typename ::color::trait::index< ::color::category::luv_int64 >::instance_type >
      {
      };


   }
 }

#endif
