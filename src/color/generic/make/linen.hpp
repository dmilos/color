#ifndef  color_generic_make_linen
#define color_generic_make_linen

// ::color::make::linen( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void linen( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      linen()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::linen( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {
      namespace _internal
       {
        struct linen_type{};
       }

      using  linen      = ::color::constant::base< ::color::constant::_internal::linen_type >;
      using  linen_t    = ::color::constant::linen;
      using  linen_type = ::color::constant::linen;

      template< typename category_name >
       struct make<::color::constant::linen, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::linen       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::linen<category_type>( ).container();
          }

        };

     }

  }

#endif
