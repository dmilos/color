#ifndef color_generic_init
#define color_generic_init

#include <initializer_list>


// ::color::make::white( c )

 namespace color
  {
   namespace _internal
    {

     template< typename category_name >
      void init
       (
          typename ::color::_internal::trait< category_name >::container_type                               & container
        , std::initializer_list< typename ::color::_internal::trait< category_name >::component_type > const&  ilist
        )
       {
        typedef ::color::_internal::trait< category_name > trait_type;

        typedef typename trait_type::container_trait_type container_trait_type;
        typedef typename trait_type::index_type           index_type;

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
