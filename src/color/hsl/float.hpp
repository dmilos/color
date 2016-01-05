#ifndef color_hsl_float
#define color_hsl_float

#include "../_internal/utility/bound/hsl.hpp"
#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/array.hpp"
#include "../_internal/utility/container/array.hpp"

#include "../generic/trait/bound.hpp"
#include "../generic/trait/index.hpp"
#include "../generic/trait/component.hpp"
#include "../generic/trait/container.hpp"





namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::hsl_float >
      : public ::color::_internal::utility::bound::hsl_scalar< unsigned, float >
      {
      };

    template< >
     struct index< ::color::category::hsl_float >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::hsl_float >
      : public ::color::_internal::utility::component::array< float, unsigned >
      {
      };

    template< >
     struct container< ::color::category::hsl_float >
      : public  ::color::_internal::utility::container::array< float, 3 >
      {
      };

   }
 }

#endif