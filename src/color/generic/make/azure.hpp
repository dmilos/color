#ifndef  color_generic_make_azure
#define color_generic_make_azure

// ::color::make::azure( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void azure( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      azure()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::azure( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {
      namespace _internal
       {
        struct azure_type{};
       }

      using  azure_type = ::color::constant::base< ::color::constant::_internal::azure_type >;
      using  azure_t    = ::color::constant::azure_type;
      using  azure      = ::color::constant::azure_type;

      template< typename category_name >
       struct make<::color::constant::azure, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::azure       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::azure<category_type>( ).container();
          }

        };

     }

  }

#endif
