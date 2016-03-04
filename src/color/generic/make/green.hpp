#ifndef  color_generic_make_green
#define color_generic_make_green

// ::color::make::green( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void green( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      green()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::green( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct green /*: public ::color::constant::_base */ {};
      using  green_t    = ::color::constant::green;
      using  green_type = ::color::constant::green;

      template< typename category_name >
       struct make<::color::constant::green, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::green       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::green<category_type>( ).container();
          }

        };

     }

  }

#endif
