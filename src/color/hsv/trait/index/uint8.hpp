#ifndef color_hsv_trait_index_uint8
#define color_hsv_trait_index_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct index< ::color::category::hsv_uint8 >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif
