#ifndef color_yiq_ldouble
#define color_yiq_ldouble

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/array.hpp"
#include "../_internal/utility/container/array.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct index< ::color::category::yiq_ldouble >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::yiq_ldouble >
      : public ::color::_internal::utility::component::array< long double, unsigned>
      {
      };

    template< >
     struct container< ::color::category::yiq_ldouble >
      : public  ::color::_internal::utility::container::array< long double, 3 >
      {
      };

   }
 }

#endif