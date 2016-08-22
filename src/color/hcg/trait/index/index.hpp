#ifdef color_hcg_trait_index
#define color_hcg_trait_index

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"

namespace color
 {
  namespace trait
   {

    template< typename tag_name >
     struct index< ::color::category::hcg< tag_name > >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif
