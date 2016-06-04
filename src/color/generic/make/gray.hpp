#ifndef color_generic_make_gray50
#define color_generic_make_gray50
// ::color::make::gray< category_name > (      ,typename ::color::trait::scalar< category_name >::input_const_type    percent       )
// ::color::make::gray50( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void gray
       (
                  ::color::model< category_name >                            & color_parameter
        ,typename ::color::trait::scalar< category_name >::input_const_type    percent_param
       )
       {
        typedef ::color::trait::bound< category_name > bound_type;
        typedef ::color::trait::container< category_name > container_trait_type;

        typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;
        typedef typename ::color::trait::index< category_name >::instance_type index_type;

        for( index_type index=0; index < container_trait_type::size() ; ++index )
         {
          color_parameter.set( index, ( ( scalar_type(100) - percent_param ) * bound_type::minimum( index ) + percent_param * bound_type::maximum( index ) ) / scalar_type(100) );
         }
       }

     template< typename category_name >
      ::color::model< category_name >
       gray
       (
        typename ::color::trait::scalar< category_name >::input_const_type    percent_param
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
        typename ::color::trait::scalar< category_name >::input_const_type    percent_param
       , category_name                                                        category_param
       )
       {
        typedef ::color::model< category_name > model_type;
        model_type  color_return;
       ::color::make::gray( color_return, percent_param );
        return  color_return;
       }

     template< typename category_name >
      void gray50( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef ::color::trait::bound< category_name > bound_type;

        typedef typename model_type::index_type index_type;

        for( index_type index=0; index < model_type::size() ; ++index )
         {
          color_parameter.set( index, bound_type::minimum( index ) + bound_type::range( index )/2 );
         }
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      gray50()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::gray50( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct gray50 /*: public ::color::constant::_base */ {};
      using  gray50_t    = ::color::constant::gray50;
      using  gray50_type = ::color::constant::gray50;

      template< typename category_name >
       struct make<::color::constant::gray50, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::gray50       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::gray50<category_type>( ).container();
          }

        };

     }

  }

#endif
