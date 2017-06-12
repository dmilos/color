#ifdef color_hwb_trait_index
#define color_hwb_trait_index

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"



namespace color
 {
  namespace trait
   {

    template< typename tag_name >
     struct index< ::color::category::hwb< tag_name > >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif
