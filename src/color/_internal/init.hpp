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
          ::color::_internal::model< category_name > & color_parameter
        , std::initializer_list< typename ::color::_internal::model< category_name >::component_type > const&  ilist
        )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;
        typedef typename model_type::index_type index_type;

        auto ili = ilist.begin();
        index_type index=0;
        for( ; index < std::min( model_type::size(), ilist.size() ) ; ++index, ++ili )
         {
          color_parameter.set( index, *ili );
         }
       };

    }
  }

#endif
