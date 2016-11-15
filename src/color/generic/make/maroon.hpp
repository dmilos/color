#ifndef  color_generic_make_maroon
#define color_generic_make_maroon

// ::color::make::maroon( c )

// TODO #include "model.hpp"
#include "../constant/maroon.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void maroon( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      maroon()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::maroon( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      template< typename category_name >
       struct make< ::color::constant::maroon_type, category_name >
        {
         typedef category_name                        category_type;
         typedef ::color::constant::maroon_type       constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & container )
          {
           container = ::color::make::maroon<category_type>( ).container();
          }
        };

      template< typename category_name >
       struct make< ::color::constant::x11::maroon_type, category_name >
        {
         typedef category_name                        category_type;
         typedef ::color::model<category_type>           model_type;
         typedef ::color::rgb<double>                      rgb_type;
         typedef ::color::constant::x11::maroon_type  constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & container )
          {
           static model_type  s_model{ rgb_type{ 0.69, 0.19, 0.38 } };

           container = s_model.container();
          }
        };

     }

  }

#endif
