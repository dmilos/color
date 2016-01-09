#ifndef color_cmyk_trait_index_double
#define color_cmyk_trait_index_double

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct index< ::color::category::cmyk_double >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif