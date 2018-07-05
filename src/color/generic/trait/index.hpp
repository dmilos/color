#ifndef color_trait_index
#define color_trait_index

// ::color::trait::index< category >

#include "../../_internal/utility/type/index.hpp"

namespace color
 {
  namespace trait
   {

    template< typename category_name >
     struct index
      : public ::color::_internal::utility::type::index< std::size_t >
      {
       public:

         typedef ::color::_internal::utility::type::index< std::size_t > utility_type;

         typedef typename utility_type::instance_type              instance_type;

         typedef typename utility_type::const_type                    const_type, instance_const_type;

         typedef typename utility_type::return_image_type       return_image_type;
         typedef typename utility_type::return_original_type    return_original_type;

         typedef typename utility_type::model_type             model_type;
         typedef typename utility_type::input_type             input_type;
         typedef typename utility_type::output_type           output_type;
      };

   }
 }

#endif
