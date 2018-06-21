#ifndef color__internal_utility_component_pack_64
#define color__internal_utility_component_pack_64

// ::color::_internal::utility::component::pack_64< index_type >

#include "./unsigned.hpp"


namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace component
       {

        struct pack64
         : public ::color::_internal::utility::component::Unsigned< std::uint32_t >
         {
         };

        typedef  ::color::_internal::utility::component::pack64  splitGGGG_t;

        typedef  ::color::_internal::utility::component::pack64  splitIIIA_t;
        typedef  ::color::_internal::utility::component::pack64  splitAIII_t;

        typedef  ::color::_internal::utility::component::pack64  splitKKK6_t;
        typedef  ::color::_internal::utility::component::pack64  split6KKK_t;

       }
     }
   }
 }

#endif