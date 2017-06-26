#ifndef color_cmy_trait_component_float
#define color_cmy_trait_component_float

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::cmy_float >
      : public ::color::_internal::utility::component::array< float, typename ::color::trait::index< ::color::category::cmy_float >::instance_type >
      {
      };

    template< >
     struct component< ::color::category::cmy_double >
      : public ::color::_internal::utility::component::array< double, typename ::color::trait::index< ::color::category::cmy_double >::instance_type >
      {
      };

    template< >
     struct component< ::color::category::cmy_ldouble >
      : public ::color::_internal::utility::component::array< long double, typename ::color::trait::index< ::color::category::cmy_ldouble >::instance_type >
      {
      };


   }
 }

#endif