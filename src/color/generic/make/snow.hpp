#ifndef  color_generic_make_snow
#define color_generic_make_snow

// ::color::make::snow( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void snow( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      snow()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::snow( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {
      namespace _internal
       {
        struct snow_type{};
       }

      using  snow_type = ::color::constant::base< ::color::constant::_internal::snow_type >;
      using  snow_t    = ::color::constant::snow_type;
      using  snow      = ::color::constant::snow_type;

      template< typename category_name >
       struct make<::color::constant::snow, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::snow       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::snow<category_type>( ).container();
          }

        };

     }

  }

#endif
