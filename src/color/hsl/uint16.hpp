#ifndef color_hsl_uint16
#define color_hsl_uint16

#include "../_internal/utility/bound/556.hpp"
#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/cnent556.hpp"
#include "../_internal/utility/container/cner556.hpp"

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
     struct bound< ::color::category::hsl_uint16 >
      : public ::color::_internal::utility::bound::bound556< unsigned >
      {
      };

    template< >
     struct index< ::color::category::hsl_uint16 >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::hsl_uint16 >
      : public ::color::_internal::utility::component::cnent556< unsigned>
      {
      };

    template< >
     struct container< ::color::category::hsl_uint16 >
      : public  ::color::_internal::utility::container::cner556<  unsigned  >
      {
      };

   }
 }

#endif