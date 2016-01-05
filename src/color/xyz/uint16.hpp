#ifndef color_xyz_uint16
#define color_xyz_uint16

#include "../_internal/utility/bound/556.hpp"
#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/cnent556.hpp"
#include "../_internal/utility/container/cner556.hpp"

#include "../generic/trait/bound.hpp"
#include "../generic/trait/index.hpp"
#include "../generic/trait/component.hpp"
#include "../generic/trait/container.hpp"

#include "./category.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct bound< ::color::category::xyz_uint16 >
      : public ::color::_internal::utility::bound::bound556< unsigned >
      {
      };

    template< >
     struct index< ::color::category::xyz_uint16 >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::xyz_uint16 >
      : public ::color::_internal::utility::component::cnent556< unsigned>
      {
      };

    template< >
     struct container< ::color::category::xyz_uint16 >
      : public  ::color::_internal::utility::container::cner556<  unsigned  >
      {
      };

   }
 }

#endif