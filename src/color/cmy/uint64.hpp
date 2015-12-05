#ifndef color_cmy_uint64
#define color_cmy_uint64

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/unsigned.hpp"
#include "../_internal/utility/container/unsigned.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct index< ::color::category::cmy_uint64 >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::cmy_uint64 >
      : public ::color::_internal::utility::component::Unsigned< std::uint16_t, 16, unsigned>
      {
      };

    template< >
     struct container< ::color::category::cmy_uint64 >
      : public  ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint16_t, unsigned, 3, 16 >
      {
      };

   }
 }

#endif