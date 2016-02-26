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

             typedef  instance_type  const&   return_image_type;
             typedef  instance_type           return_type;
           //typedef  instance_type       &   return_original_type;

             typedef  instance_type  const&   input_const_type;
             typedef  instance_type       &   input_type;
           //typedef  instance_type       &   output_type;

          };

       }
     }
   }
 }

#endif
