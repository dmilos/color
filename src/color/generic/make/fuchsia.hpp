#ifndef  color_generic_make_fuchsia
#define color_generic_make_fuchsia

// ::color::make::fuchsia( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void fuchsia( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      fuchsia()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::fuchsia( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct fuchsia /*: public ::color::constant:: */ {};

      template< typename category_name >
       struct make<::color::constant::fuchsia, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::fuchsia       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::fuchsia<category_type>( ).container();
          }

        };

     }

  }

#endif
