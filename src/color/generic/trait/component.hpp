#ifndef color_trait_component
#define color_trait_component

// ::color::trait::component< category >

#include "./index.hpp" //!< non-homogen formats

namespace color
 {
  namespace trait
   {

    template< typename category_name , unsigned index_size = 0 >
     struct component
      {
       public:
         typedef unsigned char          instance_type;
         typedef instance_type  const   const_type;

         typedef instance_type  const   return_image_type;
         typedef instance_type          return_type;
         typedef instance_type  const&  return_original_type;

         typedef instance_type const&   model_type;
         typedef instance_type      &   input_type;

         typedef instance_type const*   pointer_const_type;
         typedef instance_type      *   pointer_type;

         // typedef ::color::trait::index< category_name >      index_trait_type;
         // typedef typename index_trait_type::instance_type    index_instance_type;
         // typedef typename index_trait_type::model_type index_input_const_type;

      };

   }
 }

#endif
