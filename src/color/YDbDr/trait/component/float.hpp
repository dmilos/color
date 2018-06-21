#ifndef color_YDbDr_trait_component_float
#define color_YDbDr_trait_component_float

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::YDbDr_float >
      : public ::color::_internal::utility::component::array< float >
      {
      };

    template< >
     struct component< ::color::category::YDbDr_double >
      : public ::color::_internal::utility::component::array< double >
      {
      };

    template< >
     struct component< ::color::category::YDbDr_ldouble >
      : public ::color::_internal::utility::component::array< long double >
      {
      };

   }
 }

#endif