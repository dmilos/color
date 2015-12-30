#ifndef color_generic_init
#define color_generic_init

// ::color::make::white( c )

#include "./index.hpp"
#include "./container.hpp"
#include "./component.hpp"


 namespace color
  {
   namespace _internal
    {

     template< typename category_name >
      void init
       (
          typename ::color::_internal::container< category_name >::output_type                                    container
        , std::initializer_list< typename ::color::_internal::component< category_name >::instance_type > const&  ilist
       )
       {
        typedef ::color::_internal::container< category_name >                      container_trait_type;

        typedef typename ::color::_internal::index< category_name >::instance_type     index_type;

        auto ili = ilist.begin();
        index_type index=0;
        for( ; index < std::min( container_trait_type::size(), ilist.size() ) ; ++index, ++ili )
         {
          container_trait_type::set( container, index, *ili );
         }
       };

    }
  }

#endif
