#ifndef color_luv_trait_container_int
#define color_luv_trait_container_int

#include "../../category.hpp"

#include "../../../_internal/utility/container/array.hpp"

#include "../../../generic/trait/container.hpp"



namespace color
 {
  namespace trait
   {

    template<>
     struct container< ::color::category::luv_int8   >
      : public ::color::_internal::utility::container::array< std::int8_t, 3 >
      {
      };

    template<>
     struct container< ::color::category::luv_int16  >
      : public ::color::_internal::utility::container::array< std::int16_t, 3 >
      {
      };

    template<>
     struct container< ::color::category::luv_int32  >
      : public ::color::_internal::utility::container::array< std::int32_t, 3 >
      {
      };

    template<>
     struct container< ::color::category::luv_int64 >
      : public ::color::_internal::utility::container::array< std::int64_t, 3 >
      {
      };

   }
 }

#endif
