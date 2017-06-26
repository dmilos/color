#ifndef color_YCgCo_trait_component_float
#define color_YCgCo_trait_component_float

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::YCgCo_float >
      : public ::color::_internal::utility::component::array< float, typename ::color::trait::index< ::color::category::YCgCo_float >::instance_type >
      {
      };

    template< >
     struct component< ::color::category::YCgCo_double >
      : public ::color::_internal::utility::component::array< double, typename ::color::trait::index< ::color::category::YCgCo_double >::instance_type >
      {
      };

    template< >
     struct component< ::color::category::YCgCo_ldouble >
      : public ::color::_internal::utility::component::array< long double, typename ::color::trait::index< ::color::category::YCgCo_ldouble >::instance_type >
      {
      };

   }
 }

#endif
