#ifndef color_rgb_trait_index_scramble3
#define color_rgb_trait_index_scramble3

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"



namespace color
 {
  namespace trait
   {

    template< typename value_name, unsigned first_position, unsigned second_position, unsigned third_position > 
     struct index< ::color::category::rgb<::color::category::rgb_scramble< value_name, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif
