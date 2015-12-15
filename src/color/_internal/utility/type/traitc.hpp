#ifndef color__internal_utility_type_traitC
#define color__internal_utility_type_traitC

// ::color::_internal::utility::type::traitC

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace type
       {

        template < typename type_name >
         struct traitC // for types in container
          {
           public:
             typedef  type_name       instance_type;     //!< Something that must instacible

             typedef  instance_type  const    const_type;

             typedef  instance_type  const&   return_const_type;     //!< Will be returned but must be constant
             typedef  instance_type           return_type;           //!< May be able to modify with/out effect of real modification
           //typedef  instance_type       &   return_original_type;  //!< Return original object wit ability to modify them

             typedef  instance_type  const&   input_const_type;
             typedef  instance_type       &   input_type;        //!< Input parameter. Modifiable but might have no external effect
           //typedef  instance_type       &   output_type;       //!< Output parameter. Must be modifiable.
          };

       }
     }
   }
 }

#endif