#ifndef color_rgb_trait_index_uint64
#define color_rgb_trait_index_uint64

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct index< ::color::category::rgb_uint64 >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif