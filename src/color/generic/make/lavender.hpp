#ifndef  color_generic_make_lavender
#define color_generic_make_lavender

// ::color::make::lavender( c )

// TODO #include "model.hpp"
#include "../constant/lavender.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void lavender( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      lavender()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::lavender( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      template< typename category_name >
       struct make<::color::constant::lavender_type, category_name >
        {
         typedef category_name                          category_type;
         typedef ::color::constant::lavender_type       constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::lavender<category_type>( ).container();
          }

        };

     }

  }

#endif
