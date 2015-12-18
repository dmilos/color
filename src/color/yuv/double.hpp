#ifndef color_yuv_double
#define color_yuv_double

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
     struct bound< ::color::category::yuv_double >
      : public ::color::_internal::utility::bound::general< double, unsigned >
      {
      };

    template< >
     struct index< ::color::category::yuv_double >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::yuv_double >
      : public ::color::_internal::utility::component::array< double, unsigned >
      {
      };

    template< >
     struct container< ::color::category::yuv_double >
      : public  ::color::_internal::utility::container::array< double, 3 >
      {
      };

   }
 }

#endif