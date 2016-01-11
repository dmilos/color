#ifndef color_gray_trait_index_bool
#define color_gray_trait_index_bool

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct index< ::color::category::gray_bool >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif