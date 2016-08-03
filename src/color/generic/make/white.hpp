#ifndef  color_generic_make_white
#define color_generic_make_white

// ::color::make::white( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void white( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      white()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::white( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {
      namespace _internal
       {
        struct white_type{};
       }

      using  white_type = ::color::constant::base< ::color::constant::_internal::white_type >;
      using  white_t    = ::color::constant::white_type;
      using  white      = ::color::constant::white_type;

      template< typename category_name >
       struct make<::color::constant::white, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::white       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::white<category_type>( ).container();
          }

        };

     }

  }

#endif
