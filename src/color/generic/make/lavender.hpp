#ifndef  color_generic_make_lavender
#define color_generic_make_lavender

// ::color::make::lavender( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void lavender( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      lavender()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::lavender( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {
      namespace _internal
       {
        struct lavender_type{};
       }

      using  lavender_type = ::color::constant::base< ::color::constant::_internal::lavender_type >;
      using  lavender_t    = ::color::constant::lavender_type;

      template< typename category_name >
       struct make<::color::constant::lavender_type, category_name >
        {
         typedef category_name                          category_type;
         typedef ::color::constant::lavender_type       constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::lavender<category_type>( ).container();
          }

        };

     }

  }

#endif
