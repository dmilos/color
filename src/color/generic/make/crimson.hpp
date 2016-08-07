#ifndef  color_generic_make_crimson
#define color_generic_make_crimson

// ::color::make::crimson( c )

// TODO #include "model.hpp"
#include "../constant/crimson.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void crimson( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      crimson()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::crimson( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      template< typename category_name >
       struct make<::color::constant::crimson_type, category_name >
        {
         typedef category_name                         category_type;
         typedef ::color::constant::crimson_type       constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::crimson<category_type>( ).container();
          }

        };

     }

  }

#endif
