#ifndef color_cmyk_uint16
#define color_cmyk_uint16

#include "../_internal/utility/bound/intrinsic.hpp"
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
     struct bound< ::color::category::cmyk_uint16 >
      : public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 4, unsigned >
      {
      };

    template< >
     struct index< ::color::category::cmyk_uint16 >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::cmyk_uint16 >
      : public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned>
      {
      };

    template< >
     struct container< ::color::category::cmyk_uint16 >
      : public  ::color::_internal::utility::container::Unsigned< std::uint16_t, std::uint8_t,  unsigned, 4,  4 >
      {
      };

   }
 }

#endif