#ifndef color_rgb_trait_component_float
#define color_rgb_trait_component_float

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"

#include "../index/index.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::rgb_float >
      : public ::color::_internal::utility::component::array< float >
      {
      };

    template< >
     struct component< ::color::category::rgb_double >
      : public ::color::_internal::utility::component::array< double >
      {
      };

    template< >
     struct component< ::color::category::rgb_ldouble >
      : public ::color::_internal::utility::component::array< long double >
      {
      };

   }
 }

#endif
