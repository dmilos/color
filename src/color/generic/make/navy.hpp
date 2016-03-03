#ifndef  color_generic_make_navy
#define color_generic_make_navy

// ::color::make::navy( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void navy( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      navy()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::navy( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct navy /*: public ::color::constant:: */ {};

      template< typename category_name >
       struct make<::color::constant::navy, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::navy       color_type;

         typedef ::color::trait::container<category_type>       container_type;

         inline static void process( container_type & m )
          {
           m = ::color::make::navy<category_type>( ).container();
          }

        };

     }

  }

#endif
