#ifndef color_yuv_trait_component_uint
#define color_yuv_trait_component_uint

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::yuv::reference_enum reference_number >
     struct component< ::color::category::yuv_uint8< reference_number > >
      : public ::color::_internal::utility::component::array< std::uint8_t >
      {
      };

    template< ::color::constant::yuv::reference_enum reference_number >
     struct component< ::color::category::yuv_uint16<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint16_t >
      {
      };

    template< ::color::constant::yuv::reference_enum reference_number >
     struct component< ::color::category::yuv_uint32<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint32_t >
      {
      };

    template< ::color::constant::yuv::reference_enum reference_number >
     struct component< ::color::category::yuv_uint64<reference_number> >
      : public ::color::_internal::utility::component::array< std::uint64_t >
      {
      };

   }
 }

#endif
