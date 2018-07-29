#ifndef color_generic_make_gray50
#define color_generic_make_gray50

// ::color::make::gray< category_name > (      ,typename ::color::trait::scalar< category_name >::model_type    percent       )
// ::color::make::gray50( c )

// TODO #include "model.hpp"
#include "../constant/gray.hpp"

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void gray
       (
                  ::color::model< category_name >                            & color_parameter
        ,typename ::color::trait::scalar< category_name >::model_type    percent_param
       )
       {
        typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;
        typedef ::color::gray<scalar_type>                     gray_type;

        color_parameter = gray_type( { static_cast<scalar_type>( percent_param / scalar_type(100) ) } );
       }

     template< typename category_name >
      ::color::model< category_name >
       gray
       (
        typename ::color::trait::scalar< category_name >::model_type    percent_param
       )
       {
        typedef ::color::model< category_name > model_type;
        model_type  color_return;
       ::color::make::gray( color_return, percent_param );
        return  color_return;
       }

     template< typename category_name >
      ::color::model< category_name >
       gray
       (
        typename ::color::trait::scalar< category_name >::model_type    percent_param
       , category_name                                                        category_param
       )
       {
        typedef ::color::model< category_name > model_type;
        model_type  color_return;
       ::color::make::gray( color_return, percent_param );
        return  color_return;
       }

    }

    namespace constant
     {

      template< typename category_name, std::uintmax_t black_number, std::uintmax_t white_number >
       struct make< ::color::constant::gray_t<black_number,white_number>, category_name >
        {
         typedef category_name                         category_type;
         typedef ::color::model<category_type>            model_type;

         typedef typename ::color::trait::scalar< typename model_type::category_type >::instance_type    scalar_type;
         typedef ::color::gray<scalar_type>                     gray_type;

         typedef ::color::constant::gray_t<black_number,white_number>       constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & container )
          {
           static model_type  s_model{ gray_type{ scalar_type(white_number)/scalar_type(black_number+white_number) } };
           container = s_model.container();
          }
        };

     }

  }

#endif
