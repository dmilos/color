#ifndef color_gray_uint32
#define color_gray_uint32

#include "../_internal/utility/bound/general.hpp"
#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/unsigned.hpp"
#include "../_internal/utility/container/unsigned.hpp"

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
     struct bound< ::color::category::gray_uint32 >
      : public ::color::_internal::utility::bound::general< std::uint32_t, unsigned >
      {
      };

    template< >
     struct index< ::color::category::gray_uint32 >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::gray_uint32 >
      : public ::color::_internal::utility::component::Unsigned< std::uint32_t, unsigned>
      {
      };

    template< >
     struct container< ::color::category::gray_uint32 >
      : public  ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint32_t, unsigned, 1, 32  >
      {
      };

   }
 }

#endif