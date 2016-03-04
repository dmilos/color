#ifndef  color_generic_make_gold
#define color_generic_make_gold

// ::color::make::gold( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void gold( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      gold()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::gold( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct gold /*: public ::color::constant::_base */ {};
      using  gold_t    = ::color::constant::gold;
      using  gold_type = ::color::constant::gold;

      template< typename category_name >
       struct make<::color::constant::gold, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::gold       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::gold<category_type>( ).container();
          }

        };

     }

  }

#endif
