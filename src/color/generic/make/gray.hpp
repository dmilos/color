#ifndef color_generic_make_gray50
#define color_generic_make_gray50

// ::color::make::gray50( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

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

      struct gray50 /*: public ::color::constant:: */ {};

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
