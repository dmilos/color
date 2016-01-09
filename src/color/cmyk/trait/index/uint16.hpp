#ifndef color_cmyk_trait_index_uint16
#define color_cmyk_trait_index_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct index< ::color::category::cmyk_uint16 >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif
