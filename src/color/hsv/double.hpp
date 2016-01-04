#ifndef color_hsv_double
#define color_hsv_double

#include "../_internal/utility/bound/hsv.hpp"
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
     struct bound< ::color::category::hsv_double >
      : public ::color::_internal::utility::bound::hsv_scalar< unsigned, double >
      {
      };

    template< >
     struct index< ::color::category::hsv_double >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::hsv_double >
      : public ::color::_internal::utility::component::array< double, unsigned >
      {
      };

    template< >
     struct container< ::color::category::hsv_double >
      : public  ::color::_internal::utility::container::array< double, 3 >
      {
      };

   }
 }

#endif