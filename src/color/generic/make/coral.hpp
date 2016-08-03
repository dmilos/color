#ifndef  color_generic_make_coral
#define color_generic_make_coral

// ::color::make::coral( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void coral( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      coral()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::coral( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {
      namespace _internal
       {
        struct coral_type{};
       }

      using  coral_type = ::color::constant::base< ::color::constant::_internal::coral_type >;
      using  coral_t    = ::color::constant::coral_type;
      using  coral      = ::color::constant::coral_type;

      template< typename category_name >
       struct make<::color::constant::coral, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::coral       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::coral<category_type>( ).container();
          }

        };

     }

  }

#endif
