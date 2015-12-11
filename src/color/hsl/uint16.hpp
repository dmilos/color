#ifndef color_hsl_uint16
#define color_hsl_uint16

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/cnent556.hpp"
#include "../_internal/utility/container/cner556.hpp"

namespace color
 {
  namespace _internal
   {

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