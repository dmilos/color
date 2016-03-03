#ifndef  color_generic_make_blue
#define color_generic_make_blue

// ::color::make::blue( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void blue( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      blue()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::blue( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct blue /*: public ::color::constant:: */ {};

      template< typename category_name >
       struct make<::color::constant::blue, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::blue       color_type;

         typedef ::color::trait::container<category_type>       container_type;

         inline static void process( container_type & m )
          {
           m = ::color::make::blue<category_type>( ).container();
          }

        };

     }

  }

#endif
