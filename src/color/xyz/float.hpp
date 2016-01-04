#ifndef color_xyz_float
#define color_xyz_float

#include "../_internal/utility/bound/xyz.hpp"
#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/array.hpp"
#include "../_internal/utility/container/array.hpp"

#include "../_internal/bound.hpp"
#include "../_internal/index.hpp"
#include "../_internal/component.hpp"
#include "../_internal/container.hpp"


namespace color
 {
  namespace _internal
   {

    template< >
     struct bound< ::color::category::xyz_float >
      : public ::color::_internal::utility::bound::xyz_scalar< unsigned, float >
      {
      };

    template< >
     struct index< ::color::category::xyz_float >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::xyz_float >
      : public ::color::_internal::utility::component::array< float, unsigned>
      {
      };

    template< >
     struct container< ::color::category::xyz_float >
      : public  ::color::_internal::utility::container::array< float, 3 >
      {
      };

   }
 }

#endif