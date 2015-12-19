#ifndef color_hsl_uint64
#define color_hsl_uint64

#include "../_internal/utility/bound/intrinsic.hpp"
#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/unsigned.hpp"
#include "../_internal/utility/container/unsigned.hpp"

#include "../_internal/bound.hpp"
#include "../_internal/index.hpp"
#include "../_internal/component.hpp"
#include "../_internal/container.hpp"

#include "../_internal/container.hpp"


namespace color
 {
  namespace _internal
   {

    template< >
     struct bound< ::color::category::hsl_uint64 >
      : public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 8, unsigned >
      {
      };

    template< >
     struct index< ::color::category::hsl_uint64 >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::hsl_uint64 >
      : public ::color::_internal::utility::component::Unsigned< std::uint16_t, 16, unsigned>
      {
      };

    template< >
     struct container< ::color::category::hsl_uint64 >
      : public  ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint16_t, unsigned, 3, 16 >
      {
      };

   }
 }

#endif