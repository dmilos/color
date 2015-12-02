#ifndef color_rgb_uint32
#define color_rgb_uint32

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/unsigned.hpp"
#include "../_internal/utility/container/unsigned.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct index< ::color::category::rgb_uint32 >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::rgb_uint32 >
      : public ::color::_internal::utility::component::Unsigned< /* uint32*/unsigned , 8, unsigned>
      {
      };

    template< >
     struct container< ::color::category::rgb_uint32 >
      : public  ::color::_internal::utility::container::Unsigned< /* uint32*/unsigned, /* uint8*/ unsigned char,  unsigned,  3, 8 >
      {
      };



   }
 }

#endif