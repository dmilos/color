#ifndef  color_generic_make_purple
#define color_generic_make_purple

// ::color::make::purple( c )

// TODO #include "model.hpp"
#include "../constant/purple.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void purple( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      purple()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::purple( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      template< typename category_name >
       struct make<::color::constant::purple_type, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::purple_type       constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & container )
          {
           container = ::color::make::purple<category_type>( ).container();
          }
        };

      template< typename category_name >
       struct make<::color::constant::x11::purple_type, category_name >
        {
         typedef category_name                        category_type;
         typedef ::color::model<category_type>           model_type;
         typedef ::color::rgb<double>                      rgb_type;
         typedef ::color::constant::x11::purple_type  constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & container )
          {
           static model_type  s_model{ rgb_type{ 0.63, 0.13, 0.94 } };

           container = s_model.container();
          }
        };

     }

  }

#endif
