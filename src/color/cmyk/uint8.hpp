#ifndef color_cmyk_uint8
#define color_cmyk_uint8

#include "../_internal/utility/bound/2222.hpp"
#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/cnent2222.hpp"
#include "../_internal/utility/container/cner2222.hpp"

#include "../generic/trait/bound.hpp"
#include "../generic/trait/index.hpp"
#include "../generic/trait/component.hpp"
#include "../generic/trait/container.hpp"





namespace color
 {
  namespace trait
   {
       
    template< >
     struct bound< ::color::category::cmyk_uint8 >
      : public ::color::_internal::utility::bound::bound2222< unsigned >
      {
      };

    template< >
     struct index< ::color::category::cmyk_uint8 >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::cmyk_uint8 >
      : public ::color::_internal::utility::component::cnent2222< unsigned >
      {
      };

    template< >
     struct container< ::color::category::cmyk_uint8 >
      : public  ::color::_internal::utility::container::cner2222<  unsigned  >
      {
      };

   }
 }

#endif