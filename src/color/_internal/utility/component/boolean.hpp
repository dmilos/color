#ifndef color__internal_utility_component_boolean
#define color__internal_utility_component_boolean

// ::color::_internal::utility::component::boolean< index_type>

#include "../generic/type/traitp.hpp"





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

        template< typename index_name >
         struct boolean
          {
           public:
             typedef bool             bool_type;
             typedef index_name      index_type;

             typedef ::color::_internal::utility::type::traitC< bool_type >         utility_trait_type;

             typedef typename utility_trait_type::instance_type          instance_type;
             typedef typename utility_trait_type::const_type             const_type;
             typedef typename utility_trait_type::return_image_type      return_image_type;
             typedef typename utility_trait_type::return_type            return_type;
             typedef typename utility_trait_type::input_const_type       input_const_type;
             typedef typename utility_trait_type::input_type             input_type;

             typedef ::color::_internal::utility::type::index< index_type >   index_trait_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::input_const_type index_input_const_type;
          };

       }
     }
   }
 }

#endif