#ifndef color_xyz_uint8
#define color_xyz_uint8

#include "../_internal/utility/bound/split3.hpp"
#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/pack8.hpp"
#include "../_internal/utility/container/split3.hpp"

#include "../generic/trait/bound.hpp"
#include "../generic/trait/index.hpp"
#include "../generic/trait/component.hpp"
#include "../generic/trait/container.hpp"





namespace color
 {
  namespace trait
   {
       
    template< >
     struct bound< ::color::category::xyz_uint8 >
      : public ::color::_internal::utility::bound::split332
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
      : public  ::color::_internal::utility::container::split332
      {
      };

   }
 }

#endif