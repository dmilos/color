#ifndef color_hsl_ldouble
#define color_hsl_ldouble

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/array.hpp"
#include "../_internal/utility/container/array.hpp"

namespace color
 {
  namespace _internal
   {

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