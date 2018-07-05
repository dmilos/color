#ifndef color_lab_trait_container_int
#define color_lab_trait_container_int

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template< ::color::constant::lab::reference_enum reference_number >
     struct container< ::color::category::lab_int8<reference_number>   >
      : public ::color::_internal::utility::container::array< std::int8_t, 3 >
      {
      };

    template< ::color::constant::lab::reference_enum reference_number >
     struct container< ::color::category::lab_int16<reference_number>  >
      : public ::color::_internal::utility::container::array< std::int16_t, 3 >
      {
      };

    template< ::color::constant::lab::reference_enum reference_number >
     struct container< ::color::category::lab_int32<reference_number>  >
      : public ::color::_internal::utility::container::array< std::int32_t, 3 >
      {
      };

    template< ::color::constant::lab::reference_enum reference_number >
     struct container< ::color::category::lab_int64<reference_number> >
      : public ::color::_internal::utility::container::array< std::int64_t, 3 >
      {
      };

   }
 }

#endif
