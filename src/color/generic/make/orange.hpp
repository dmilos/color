#ifndef  color_generic_make_orange
#define color_generic_make_orange

// ::color::make::orange( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void orange( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      orange()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::orange( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct orange /*: public ::color::constant::_base */ {};
      using  orange_t    = ::color::constant::orange;
      using  orange_type = ::color::constant::orange;

      template< typename category_name >
       struct make<::color::constant::orange, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::orange       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::orange<category_type>( ).container();
          }

        };

     }

  }

#endif
