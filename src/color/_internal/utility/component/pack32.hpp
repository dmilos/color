#ifndef color__internal_utility_component_pack_32
#define color__internal_utility_component_pack_32

// ::color::_internal::utility::component::pack32< index_type >

#include "./unsigned.hpp"


namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace component
       {

        struct pack32
         : public ::color::_internal::utility::component::Unsigned< std::uint16_t >
         {
         };

        typedef  ::color::_internal::utility::component::pack32  split8888_t;

        typedef  ::color::_internal::utility::component::pack32  splitAAA2_t;
        typedef  ::color::_internal::utility::component::pack32  split2AAA_t;

       }
     }
   }
 }

#endif