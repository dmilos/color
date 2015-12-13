#ifndef color__internal_index
#define color__internal_index
// color::_internal::index< category >

#include "./utility/type/index.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename category_name >
     struct index
      : public ::color::_internal::utility::type::index< unsigned >
      {
       public:

         typedef ::color::_internal::utility::type::index< unsigned > utility_type;

         typedef typename utility_type::instance_type              instance_type;

         typedef typename utility_type::const_type const_type;

         typedef typename utility_type::return_image_type       return_image_type;
         typedef typename utility_type::return_original_type    return_original_type;

         typedef typename utility_type::input_const_type      input_const_type;
         typedef typename utility_type::input_type            input_type;
         typedef typename utility_type::output_type           output_type;
     };

   }
 }

#endif
