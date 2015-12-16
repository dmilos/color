#ifndef color_cmy_uint16
#define color_cmy_uint16

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/cnent556.hpp"
#include "../_internal/utility/container/cner556.hpp"

//#include "../_internal/bound.hpp"
#include "../_internal/index.hpp"
#include "../_internal/component.hpp"
#include "../_internal/container.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct index< ::color::category::cmy_uint16 >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::cmy_uint16 >
      : public ::color::_internal::utility::component::cnent556< unsigned>
      {
      };

    template< >
     struct container< ::color::category::cmy_uint16 >
      : public  ::color::_internal::utility::container::cner556<  unsigned  >
      {
      };

   }
 }

#endif