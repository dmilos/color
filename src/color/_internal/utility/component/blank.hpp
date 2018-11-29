#ifndef color__internal_utility_component_blank
#define color__internal_utility_component_blank

// ::color::_internal::utility::component::blank< index_type>

#include "../../../generic/type/nothing.hpp"





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

         struct blank
          {
           public:
             typedef ::color::type::nothing_type      blank_type;

             typedef ::color::_internal::utility::type::traitP< blank_type >         utility_trait_type;

             typedef typename utility_trait_type::instance_type          instance_type;
             typedef typename utility_trait_type::const_type             const_type;
             typedef typename utility_trait_type::return_image_type      return_image_type;
             typedef typename utility_trait_type::return_type            return_type;
             typedef typename utility_trait_type::model_type       model_type;
             typedef typename utility_trait_type::input_type             input_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::model_type index_input_const_type;
          };

       }
     }
   }
 }

#endif 