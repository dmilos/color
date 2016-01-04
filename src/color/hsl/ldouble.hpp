#ifndef color_hsl_ldouble
#define color_hsl_ldouble

#include "../_internal/utility/bound/hsl.hpp"
#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/array.hpp"
#include "../_internal/utility/container/array.hpp"

#include "../_internal/bound.hpp"
#include "../_internal/index.hpp"
#include "../_internal/component.hpp"
#include "../_internal/container.hpp"


namespace color
 {
  namespace _internal
   {

    template< >
     struct bound< ::color::category::hsl_ldouble >
      : public ::color::_internal::utility::bound::hsl_scalar< unsigned, long double >
      {
      };

    template< >
     struct index< ::color::category::hsl_ldouble >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::hsl_ldouble >
      : public ::color::_internal::utility::component::array< long double, unsigned>
      {
      };

    template< >
     struct container< ::color::category::hsl_ldouble >
      : public  ::color::_internal::utility::container::array< long double, 3 >
      {
      };

   }
 }

#endif