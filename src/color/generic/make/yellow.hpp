#ifndef  color_generic_make_yellow
#define color_generic_make_yellow

// ::color::make::yellow( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void yellow( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      yellow()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::yellow( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct yellow /*: public ::color::constant:: */ {};

      template< typename category_name >
       struct make<::color::constant::yellow, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::yellow       color_type;

         typedef ::color::trait::container<category_type>       container_type;

         inline static void process( container_type & m )
          {
           m = ::color::make::yellow<category_type>( ).container();
          }

        };

     }

  }

#endif
