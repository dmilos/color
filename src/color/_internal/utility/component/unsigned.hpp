#ifndef color__internal_utility_component_unsigned
#define color__internal_utility_component_unsigned

// ::color::_internal::utility::component::Unsigned< unsigned_name>

#include "../type/traitp.hpp"
#include "../type/index.hpp"

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace component
       {

        template< typename unsigned_name >
         struct Unsigned
          {
           public:
             typedef unsigned_name      unsigned_type;

             typedef ::color::_internal::utility::type::traitP< unsigned_type >         utility_trait_type;

             typedef typename utility_trait_type::instance_type          instance_type;
             typedef typename utility_trait_type::const_type             const_type;
             typedef typename utility_trait_type::return_image_type      return_image_type;
             typedef typename utility_trait_type::return_type            return_type;
             typedef typename utility_trait_type::model_type              model_type;
             typedef typename utility_trait_type::input_type             input_type;
          };

       }
     }
   }
 }

#endif
