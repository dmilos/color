#ifndef color_gray_uint16
#define color_gray_uint16

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/unsigned.hpp"
#include "../_internal/utility/container/unsigned.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct index< ::color::category::gray_uint16 >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::gray_uint16 >
      : public ::color::_internal::utility::component::Unsigned< /* uint16*/unsigned , 16, unsigned>
      {
      };

    template< >
     struct container< ::color::category::gray_uint16 >
      : public  ::color::_internal::utility::container::Unsigned< /* uint16*/unsigned, /* uint8*/ unsigned char,  unsigned,  1, 16  >
      {
      };

   }
 }

#endif