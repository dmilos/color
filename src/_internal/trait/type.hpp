#ifndef color__internal_trait_type_common_597b6d30_5e94_49ce_adba_f768f748ef74
#define color__internal_trait_type_common_597b6d30_5e94_49ce_adba_f768f748ef74

// ::color::_internal::trait::type::commonC
// ::color::_internal::trait::type::commonP

#include <cstdint>

namespace color
 {
  namespace _internal
   {
    namespace trait
     {
      namespace type
       {

        template < typename type_name >
         struct commonC // for types in container
          {
           public:
             typedef  type_name       instance_type;     //!< Something that must instacible
  
            typedef  type_type  const&  const_return_type; //!< Will be returned butmust be constant
            typedef  type_type       &  return_type;       //!< May or may not be able to modyfy or to have property with effect of real modification
            typedef  type_type  const&  const_input_type;
            typedef  type_type       &  input_type;
          };

         template < typename type_name >
           struct commonP // for types that are packet in other types packed 
           {
            public:
              typedef  type_name        instance_type;     //!< Something that must instacible

              typedef  type_type  const   const_return_type; //!< Will be returned but must be constant
              typedef  type_type  const   return_type;       //!< May or may not be able to modyfy or to have property with effect of real modification
              typedef  type_type const&   const_input_type;
              typedef  type_type      &   input_type;
           };

       }
     }
   }
 }

#endif