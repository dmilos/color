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
             typedef  type_name               instance_type;

             typedef  instance_type  const    const_type;

             typedef  instance_type  const    return_image_type;
             typedef  instance_type           return_type;
           //typedef  instance_type       &   return_original_type;

             typedef  instance_type  const&   model_type;
             typedef  instance_type           input_type;
           //typedef  instance_type       &   output_type;

          };

       }
     }
   }
 }

#endif
