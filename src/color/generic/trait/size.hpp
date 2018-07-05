#ifndef color_trait_size
#define color_trait_size

// ::color::trait::size< category >

#include "../../_internal/utility/type/size.hpp"

namespace color
 {
  namespace trait
   {

    template< typename category_name >
     struct size
      : public ::color::_internal::utility::type::size< std::size_t >
      {
       public:

         typedef ::color::_internal::utility::type::size< std::size_t > utility_type;

         typedef typename utility_type::instance_type              instance_type;

         typedef typename utility_type::const_type const_type;

         typedef typename utility_type::return_image_type       return_image_type;
         typedef typename utility_type::return_original_type    return_original_type;

         typedef typename utility_type::model_type      model_type;
         typedef typename utility_type::input_type            input_type;
         typedef typename utility_type::output_type           output_type;
      };

   }
 }

#endif
