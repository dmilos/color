#ifndef color__internal_component
#define color__internal_component
// color::_internal::component< category >

#include "./index.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename category_name >
     struct component
      {
       public:
         typedef unsigned char          instance_type;
         typedef instance_type  const   const_type;

         typedef instance_type  const   return_const_type;
         typedef instance_type  const   return_const_ref_type;
         typedef instance_type          return_type;
         typedef instance_type          return_ref_type;

         typedef instance_type const&   input_const_type;
         typedef instance_type      &   input_type;

         typedef ::color::_internal::index< category_name >  index_trait_type;
         typedef typename index_trait_type::instance_type    index_instance_type;
         typedef typename index_trait_type::input_const_type index_input_const_type;

      };

   }
 }

#endif
