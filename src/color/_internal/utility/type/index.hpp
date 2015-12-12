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
         class index
          {
           public:
             typedef index_name             instance_type;

             typedef instance_type const    const_type;
             typedef instance_type const&   return_const_type;
             typedef instance_type      &   return_type;
             typedef instance_type const&   input_const_type;
             typedef instance_type      &   input_type;
         };

     }
    }
   }
 }

#endif
