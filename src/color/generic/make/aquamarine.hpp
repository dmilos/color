#ifndef  color_generic_make_aquamarine
#define color_generic_make_aquamarine

// ::color::make::aquamarine( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void aquamarine( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      aquamarine()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::aquamarine( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct aquamarine /*: public ::color::constant:: */ {};

      template< typename category_name >
       struct make<::color::constant::aquamarine, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::aquamarine       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::aquamarine<category_type>( ).container();
          }

        };

     }

  }

#endif
