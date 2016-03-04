#ifndef  color_generic_make_wheat
#define color_generic_make_wheat

// ::color::make::wheat( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void wheat( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      wheat()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::wheat( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct wheat /*: public ::color::constant::_base */ {};
      using  wheat_t    = ::color::constant::wheat;
      using  wheat_type = ::color::constant::wheat;

      template< typename category_name >
       struct make<::color::constant::wheat, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::wheat       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::wheat<category_type>( ).container();
          }

        };

     }

  }

#endif
