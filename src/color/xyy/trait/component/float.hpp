#ifndef color_xyy_trait_component_float
#define color_xyy_trait_component_float

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::xyy_float >
      : public ::color::_internal::utility::component::array< float, typename ::color::trait::index< ::color::category::xyy_float >::instance_type >
      {
      };

    template< >
     struct component< ::color::category::xyy_double >
      : public ::color::_internal::utility::component::array< double, typename ::color::trait::index< ::color::category::xyy_double >::instance_type >
      {
      };

    template< >
     struct component< ::color::category::xyy_ldouble >
      : public ::color::_internal::utility::component::array< long double, typename ::color::trait::index< ::color::category::xyy_ldouble >::instance_type>
      {
      };


   }
 }

#endif