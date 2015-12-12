#ifndef color__internal_index
#define color__internal_index
// color::_internal::index< category >

namespace color
 {
  namespace _internal
   {

    template< typename category_name >
     class index
      {
       public:
         typedef unsigned               instance_type;      //!< Instance
         
         typedef instance_type const&   return_const_type;  //!< Return type that can not be changed. Might or might not be reference
         typedef instance_type      &   return_type;        //!< Return type that you can change. Effect might or might be in effect
       //typedef instance_type      &   return_ref_type;    //!< Return type that you can change. Must have effect.

         typedef instance_type const&   input_const_type, param_const_input_type;   //!< Input type that can not be changed
         typedef instance_type const&   input_type,       param_input_type;         //!< Input type that can be change. Effect might or might be in effect. Prefer NOT.
         typedef instance_type      &   output_type,      param_output_type;        //!< Output type that can be changed. Must have effect.
     };

   }
 }

#endif
