#ifndef color_yuv_float
#define color_yuv_float

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/array.hpp"
#include "../_internal/utility/container/array.hpp"
#include "../_internal/utility/bound/yuv.hpp"

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
     struct bound< ::color::category::yuv_float >
      : public ::color::_internal::utility::bound::yuv_float< unsigned, float >
      {
      };

    template< >
     struct index< ::color::category::yuv_float >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::yuv_float >
      : public ::color::_internal::utility::component::array< float, unsigned >
      {
      };

    template< >
     struct container< ::color::category::yuv_float >
      : public  ::color::_internal::utility::container::array< float, 3 >
      {
      };

   }
 }

#endif