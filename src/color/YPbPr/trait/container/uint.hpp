#ifndef color_YPbPr_trait_container_uint
#define color_YPbPr_trait_container_uint

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct container< ::color::category::YPbPr_uint8<reference_number> >
      : public ::color::_internal::utility::container::array< std::uint8_t, 3 >
      {
      };

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct container< ::color::category::YPbPr_uint16<reference_number> >
      : public ::color::_internal::utility::container::array< std::uint16_t, 3 >
      {
      };

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct container< ::color::category::YPbPr_uint32<reference_number> >
      : public ::color::_internal::utility::container::array< std::uint32_t, 3 >
      {
      };

    template< ::color::constant::YPbPr::reference_enum reference_number >
     struct container< ::color::category::YPbPr_uint64<reference_number> >
      : public ::color::_internal::utility::container::array< std::uint64_t, 3 >
      {
      };


   }
 }

#endif
