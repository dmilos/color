#ifndef color_yiq_double
#define color_yiq_double

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/array.hpp"
#include "../_internal/utility/container/array.hpp"
#include "../_internal/utility/bound/yiq.hpp"

#include "../_internal/bound.hpp"
#include "../_internal/index.hpp"
#include "../_internal/component.hpp"
#include "../_internal/container.hpp"

#include "./category.hpp"



namespace color
 {
  namespace _internal
   {

    template< >
     struct bound< ::color::category::yiq_double >
      : public ::color::_internal::utility::bound::yiq_float< unsigned, double >
      {
      };

    template< >
     struct index< ::color::category::yiq_double >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::yiq_double >
      : public ::color::_internal::utility::component::array< double, unsigned>
      {
      };

    template< >
     struct container< ::color::category::yiq_double >
      : public  ::color::_internal::utility::container::array< double, 3 >
      {
      };

   }
 }

#endif