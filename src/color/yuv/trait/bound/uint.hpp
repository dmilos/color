#ifndef color_yuv_trait_bound_uint16
#define color_yuv_trait_bound_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/bound/general.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::yuv::reference_enum reference_number >
     struct bound< ::color::category::yuv_uint8<reference_number> >
      : public ::color::_internal::utility::bound::general< std::uint8_t, typename ::color::trait::index< ::color::category::yuv_uint8<reference_number> >::instance_type >
      {
      };

    template< ::color::constant::yuv::reference_enum reference_number >
     struct bound< ::color::category::yuv_uint16<reference_number> >
      : public ::color::_internal::utility::bound::general< std::uint16_t, typename ::color::trait::index< ::color::category::yuv_uint16<reference_number> >::instance_type >
      {
      };

    template< ::color::constant::yuv::reference_enum reference_number >
     struct bound< ::color::category::yuv_uint32<reference_number> >
      : public ::color::_internal::utility::bound::general< std::uint32_t, typename ::color::trait::index< ::color::category::yuv_uint32<reference_number> >::instance_type >
      {
      };

    template< ::color::constant::yuv::reference_enum reference_number >
     struct bound< ::color::category::yuv_uint64< reference_number> >
      : public ::color::_internal::utility::bound::general< std::uint64_t, typename ::color::trait::index< ::color::category::yuv_uint64<reference_number> >::instance_type >
      {
      };

   }
 }

#endif
