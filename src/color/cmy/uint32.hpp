#ifndef color_cmy_uint32
#define color_cmy_uint32

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/unsigned.hpp"
#include "../_internal/utility/container/unsigned.hpp"

//#include "../_internal/bound.hpp"
#include "../_internal/index.hpp"
#include "../_internal/component.hpp"
#include "../_internal/container.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct index< ::color::category::cmy_uint32 >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::cmy_uint32 >
      : public ::color::_internal::utility::component::Unsigned< std::uint8_t,   8, unsigned>
      {
      };

    template< >
     struct container< ::color::category::cmy_uint32 >
      : public  ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint8_t,  unsigned, 3,  8 >
      {
      };

   }
 }

#endif