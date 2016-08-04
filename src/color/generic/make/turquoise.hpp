#ifndef  color_generic_make_turquoise
#define color_generic_make_turquoise

// ::color::make::turquoise( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void turquoise( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      turquoise()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::turquoise( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {
      namespace _internal
       {
        struct turquoise_type{};
       }

      using  turquoise_type = ::color::constant::base< ::color::constant::_internal::turquoise_type >;
      using  turquoise_t    = ::color::constant::turquoise_type;

      template< typename category_name >
       struct make<::color::constant::turquoise_type, category_name >
        {
         typedef category_name                           category_type;
         typedef ::color::constant::turquoise_type       constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           auto static s_container = ::color::make::turquoise<category_type>( ).container();
           m = s_container;
          }

        };

     }

  }

#endif
