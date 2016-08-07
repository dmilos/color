#ifndef  color_generic_make_plum
#define color_generic_make_plum

// ::color::make::plum( c )

// TODO #include "model.hpp"
#include "../constant/plum.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void plum( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      plum()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::plum( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      template< typename category_name >
       struct make<::color::constant::plum_type, category_name >
        {
         typedef category_name                      category_type;
         typedef ::color::constant::plum_type       constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::plum<category_type>( ).container();
          }

        };

     }

  }

#endif
