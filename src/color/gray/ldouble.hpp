#ifndef color_gray_ldouble
#define color_gray_ldouble

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/array.hpp"
#include "../_internal/utility/container/array.hpp"











namespace color
 {
  namespace trait
   {

    template< >
     struct index< ::color::category::gray_ldouble >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::gray_ldouble >
      : public ::color::_internal::utility::component::array< long double, unsigned>
      {
      };

    template< >
     struct container< ::color::category::gray_ldouble >
      : public  ::color::_internal::utility::container::array< long double, 1 >
      {
      };

   }
 }

#endif
