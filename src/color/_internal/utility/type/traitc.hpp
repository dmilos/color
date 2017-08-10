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

             typedef  instance_type  const    const_type; //!< constant instance

             typedef  instance_type  const&   return_image_type;     //!< Return type that can not be changed. Might or might not be reference
             typedef  instance_type           return_type;           //!< Return type that can be changed, but without effect.
             typedef  instance_type       &   return_original_type;  //!< Return original object with ability to modify them

             typedef  instance_type  const& input_const_type, param_const_input_type;   //!< Input type that can NOT be changed
             typedef  instance_type         input_type,       param_input_type;         //!< Input type that can be change. Effect might or might be in visible to outside. Prefer NOT.
             typedef  instance_type       & output_type,      param_output_type;        //!< Output type that can be changed. Must have outside effect.
             typedef  instance_type       & transmit_type,    param_transmit_type;      //!< Input and output at the same time.

          };

       }
     }
   }
 }

#endif
