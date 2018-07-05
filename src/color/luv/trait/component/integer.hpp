#ifndef color_lab_trait_component_int
#define color_lab_trait_component_int

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template<  >
     struct component< ::color::category::lab_int8  >
      : public ::color::_internal::utility::component::array< std::int8_t >
      {
      };

    template< >
     struct component< ::color::category::lab_int16 >
      : public ::color::_internal::utility::component::array< std::int16_t >
      {
      };

    template<  >
     struct component< ::color::category::lab_int32 >
      : public ::color::_internal::utility::component::array< std::int32_t >
      {
      };

    template<  >
     struct component< ::color::category::lab_int64 >
      : public ::color::_internal::utility::component::array< std::int64_t >
      {
      };

   }
 }

#endif
