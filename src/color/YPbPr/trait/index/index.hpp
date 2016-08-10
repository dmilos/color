#ifdef color_YPbPr_trait_index
#define color_YPbPr_trait_index

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"

namespace color
 {
  namespace trait
   {

    template< typename tag_name, ::color::constant::YPbPr::reference_enum reference_number >
     struct index< ::color::category::YPbPr< tag_name, reference_number > >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif
