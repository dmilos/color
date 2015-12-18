#ifndef color_xyz_uint8
#define color_xyz_uint8

#include "../_internal/utility/bound/332.hpp"
#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/cnent332.hpp"
#include "../_internal/utility/container/cner332.hpp"

#include "../_internal/bound.hpp"
#include "../_internal/index.hpp"
#include "../_internal/component.hpp"
#include "../_internal/container.hpp"


namespace color
 {
  namespace _internal
   {
       
    template< >
     struct bound< ::color::category::xyz_uint8 >
      : public ::color::_internal::utility::bound::bound332< unsigned >
      {
      };

    template< >
     struct index< ::color::category::xyz_uint8 >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::xyz_uint8 >
      : public ::color::_internal::utility::component::cnent332< unsigned >
      {
      };

    template< >
     struct container< ::color::category::xyz_uint8 >
      : public  ::color::_internal::utility::container::cner332<  unsigned  >
      {
      };

   }
 }

#endif