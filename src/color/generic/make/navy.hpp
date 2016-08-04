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
      namespace _internal
       {
        struct navy_type{};
       }

      using  navy_type = ::color::constant::base< ::color::constant::_internal::navy_type >;
      using  navy_t    = ::color::constant::navy_type;

      template< typename category_name >
       struct make<::color::constant::navy_type, category_name >
        {
         typedef category_name                      category_type;
         typedef ::color::constant::navy_type       constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::navy<category_type>( ).container();
          }

        };

     }

  }

#endif
