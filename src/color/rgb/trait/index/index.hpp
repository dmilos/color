#ifndef color_rgb_trait_index_index
#define color_rgb_trait_index_index

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"



namespace color
 {
  namespace trait
   {

    template< typename tag_name >
     struct index< ::color::category::rgb< tag_name> >
      : public ::color::_internal::utility::type::index< std::size_t >
      {
      };

   }
 }

#endif
