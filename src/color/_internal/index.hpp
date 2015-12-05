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
         typedef unsigned               instance_type;
         typedef instance_type const&   const_return_type;
         typedef instance_type      &   return_type;
         typedef instance_type const&   const_input_type;
         typedef instance_type      &   input_type;
     };

   }
 }

#endif
