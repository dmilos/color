#ifndef color__internal_utility_type_traitP
#define color__internal_utility_type_traitP

// ::color::_internal::utility::type::traitP

#include <cstdint>

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace type
       {

        template < typename type_name >
         struct traitP // for types that are packet in other types packed 
          {
           public:
             typedef  type_name       instance_type;     //!< Something that must instacible

             typedef  instance_type  const   const_return_type; //!< Will be returned but must be constant
             typedef  instance_type  const   return_type;       //!< May or may not be able to modify or to have property with effect of real modification
             typedef  instance_type  const&  const_input_type;
             typedef  instance_type       &  input_type;        //!< Input parameter. Must be modifiable.
          };

       }
     }
   }
 }

#endif