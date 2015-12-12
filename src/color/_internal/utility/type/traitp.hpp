#ifndef color__internal_utility_type_traitP
#define color__internal_utility_type_traitP

// ::color::_internal::utility::type::traitP

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
             typedef  type_name       instance_type;     //!< Type on an instance

             typedef  instance_type  const    const_type;        //!< Constant instance

             typedef  instance_type  const    return_const_type;     //!< Will be returned but must be constant
             typedef  instance_type           return_type;           //!< May or may not be able to modify or to have property with effect of real modification
           //typedef  instance_type       &   return_original_type;  //!< Return original object with ability to modify them

             typedef  instance_type  const&   input_const_type;  //!< Input parameter. Not able to modify.
             typedef  instance_type           input_type;        //!< Input parameter. Modifiable but with no external effect.
           //typedef  instance_type       &   output_type;       //!< Output parameter. Must be modifiable.
          };

       }
     }
   }
 }

#endif