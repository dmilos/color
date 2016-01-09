#ifndef color_cmyk_trait_index_float
#define color_cmyk_trait_index_float

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct index< ::color::category::cmyk_float >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif