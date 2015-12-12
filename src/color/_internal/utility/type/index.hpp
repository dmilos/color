#ifndef color__internal_utility_index
#define color__internal_utility_index

// color::_internal::utility::type::index< index_name >

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace type
       {

        template< typename index_name >
         struct index
          {
           public:
             typedef  index_name             instance_type;   //!< Instance

             typedef  instance_type  const    const_type;

             typedef  instance_type  const&   return_const_type;      //!< Return type that can not be changed. Might or might not be reference
             typedef  instance_type       &   return_type;            //!< Return type that you can change. Effect might or might be in effect
             typedef  instance_type       &   return_original_type;   //!< Return type that you can change. Must have effect.

             typedef instance_type const&   input_const_type, param_const_input_type;   //!< Input type that can not be changed
             typedef instance_type          input_type,       param_input_type;         //!< Input type that can be change. Effect might or might be in visible to outside. Prefer NOT.
             typedef instance_type      &   output_type,      param_output_type;        //!< Output type that can be changed. Must have outside effect.

          };

     }
    }
   }
 }

#endif
