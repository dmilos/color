#ifndef color_gray_uint16
#define color_gray_uint16

#include "../_internal/utility/bound/general.hpp"
#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/unsigned.hpp"
#include "../_internal/utility/container/unsigned.hpp"






#include "./category.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::gray_uint16 >
      : public ::color::_internal::utility::bound::general< std::uint16_t, unsigned >
      {
      };

    template< >
     struct index< ::color::category::gray_uint16 >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::gray_uint16 >
      : public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned>
      {
      };

    template< >
     struct container< ::color::category::gray_uint16 >
      : public  ::color::_internal::utility::container::Unsigned< std::uint16_t, std::uint16_t, unsigned,  1, 16  >
      {
      };

   }
 }

#endif
