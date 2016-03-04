#ifndef  color_generic_make_thistle
#define color_generic_make_thistle

// ::color::make::thistle( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void thistle( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      thistle()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::thistle( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct thistle /*: public ::color::constant::_base */ {};
      using  thistle_t    = ::color::constant::thistle;
      using  thistle_type = ::color::constant::thistle;

      template< typename category_name >
       struct make<::color::constant::thistle, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::thistle       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::thistle<category_type>( ).container();
          }

        };

     }

  }

#endif
