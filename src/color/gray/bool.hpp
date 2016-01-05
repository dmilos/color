#ifndef color_gray_bool
#define color_gray_bool

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/array.hpp"
#include "../_internal/utility/container/bool.hpp"











namespace color
 {
  namespace trait
   {

    template< >
     struct index< ::color::category::gray_bool >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::gray_bool >
      : public ::color::_internal::utility::component::array< bool, unsigned >
      {
      };

    template< >
     struct container< ::color::category::gray_bool >
      : public  ::color::_internal::utility::container::boolean< unsigned >
      {
      };

   }
 }

#endif