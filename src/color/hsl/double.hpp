#ifndef color_hsl_double
#define color_hsl_double

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
     struct bound< ::color::category::hsl_double >
      : public ::color::_internal::utility::bound::hsl_scalar< unsigned, double >
      {
      };

    template< >
     struct index< ::color::category::hsl_double >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::hsl_double >
      : public ::color::_internal::utility::component::array< double, unsigned>
      {
      };

    template< >
     struct container< ::color::category::hsl_double >
      : public  ::color::_internal::utility::container::array< double, 3 >
      {
      };

   }
 }

#endif