#ifndef  color_generic_make_khaki
#define color_generic_make_khaki

// ::color::make::khaki( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void khaki( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      khaki()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::khaki( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct khaki /*: public ::color::constant:: */ {};

      template< typename category_name >
       struct make<::color::constant::khaki, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::khaki       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::khaki<category_type>( ).container();
          }

        };

     }

  }

#endif
