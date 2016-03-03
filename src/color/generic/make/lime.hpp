#ifndef  color_generic_make_lime
#define color_generic_make_lime

// ::color::make::lime( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void lime( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      lime()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::lime( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct lime /*: public ::color::constant:: */ {};

      template< typename category_name >
       struct make<::color::constant::lime, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::lime       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::lime<category_type>( ).container();
          }

        };

     }

  }

#endif
