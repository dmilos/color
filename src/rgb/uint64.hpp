#ifndef color_rgb_uint64
#define color_rgb_uint64

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/unsigned.hpp"
#include "../_internal/utility/container/unsigned.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct index< ::color::category::rgb_uint64 >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::rgb_uint64 >
      : public ::color::_internal::utility::component::Unsigned< /* uint64_t*/unsigned long, 16, unsigned>
      {
      };

    template< >
     struct container< ::color::category::rgb_uint64 >
      : public  ::color::_internal::utility::container::Unsigned< /* uint64_t*/unsigned long, /* uint8_t*/ unsigned char,  unsigned,  3, 16 >
      {
      };

   }
 }

#endif