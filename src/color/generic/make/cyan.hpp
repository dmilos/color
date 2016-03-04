#ifndef  color_generic_make_cyan
#define color_generic_make_cyan

// ::color::make::cyan( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void cyan( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      cyan()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::cyan( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct cyan /*: public ::color::constant::_base */ {};
      using  cyan_t    = ::color::constant::cyan;
      using  cyan_type = ::color::constant::cyan;

      template< typename category_name >
       struct make<::color::constant::cyan, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::cyan       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::cyan<category_type>( ).container();
          }

        };

     }

  }

#endif
