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

        // Referent type trait point
        template < typename type_name >
         struct traitC // for types in container
          {
           public:
             typedef  type_name               instance_type;     //!< Something that must instacible

             typedef  type_name      const    const_type, instance_const_type; //!< constant instance

             typedef  instance_type      &   original_type;  //!< Original object.

             typedef  instance_type      *   pointer_type;
             typedef  instance_type const*   pointer_const_type;

             typedef  instance_type  const&   return_image_type,       image_type;  //!< Return type that can not be changed. Might or might not be reference
             typedef  instance_type           return_type,         pretender_type;  //!< Return type that can be changed, but without effect.
             typedef  original_type           return_original_type;                 //!< Return original object with ability to modify them directly.


             typedef  instance_type  const&      model_type;  //!< Input type that can NOT be changed
             typedef  instance_type              input_type;  //!< Input type that can be change. Effect might or might be visible to outside. Prefer NOT.
             typedef  instance_type       &     output_type;  //!< Output type that can be changed. Must have outside effect.
             typedef  instance_type       &   transmit_type;  //!< Input and output at the same time.

             typedef  model_type             param_model_type;  //!< Input type that can NOT be changed
             typedef  instance_type          param_input_type;  //!< Input type that can be change. Effect might or might be in visible to outside. Prefer NOT.
             typedef  output_type           param_output_type;  //!< Output type that can be changed. Must have outside effect.
             typedef  transmit_type       param_transmit_type;  //!< Input and output at the same time.
             typedef  original_type       param_original_type;  //!< Really original object.
          };

       }
     }
   }
 }

#endif
