#ifndef color__internal_utility_component_pack_8
#define color__internal_utility_component_pack_8

// ::color::_internal::utility::component::pack8< index_type >

#include "./unsigned.hpp"


namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace component
       {

        struct pack8
         : public ::color::_internal::utility::component::Unsigned< std::uint8_t >
         {
         };

        typedef  ::color::_internal::utility::component::pack8  split2222_t;

        typedef  ::color::_internal::utility::component::pack8  split233_t ;
        typedef  ::color::_internal::utility::component::pack8  split323_t ;
        typedef  ::color::_internal::utility::component::pack8  split332_t ;

        typedef  ::color::_internal::utility::component::pack8  split224_t ;
        typedef  ::color::_internal::utility::component::pack8  split242_t ;
        typedef  ::color::_internal::utility::component::pack8  split422_t ;

       }
     }
   }
 }

#endif