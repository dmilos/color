#ifdef color_yuv_trait_index
#define color_yuv_trait_index

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"

namespace color
 {
  namespace trait
   {

    template< typename tag_name, ::color::constant::yuv::reference_enum reference_number >
     struct index< ::color::category::yuv< tag_name, reference_number > >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif
