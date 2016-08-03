#ifndef  color_generic_make_crimson
#define color_generic_make_crimson

// ::color::make::crimson( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void crimson( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      crimson()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::crimson( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {
      namespace _internal
       {
        struct crimson_type{};
       }

      using  crimson_type = ::color::constant::base< ::color::constant::_internal::crimson_type >;
      using  crimson_t    = ::color::constant::crimson_type;
      using  crimson      = ::color::constant::crimson_type;

      template< typename category_name >
       struct make<::color::constant::crimson, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::crimson       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::crimson<category_type>( ).container();
          }

        };

     }

  }

#endif
