#ifndef  color_generic_make_bisque
#define color_generic_make_bisque

// ::color::make::bisque( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void bisque( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      bisque()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::bisque( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {
      namespace _internal
       {
        struct bisque_type{};
       }

      using  bisque_type = ::color::constant::base< ::color::constant::_internal::bisque_type >;
      using  bisque_t    = ::color::constant::bisque_type;
      using  bisque      = ::color::constant::bisque_type;

      template< typename category_name >
       struct make<::color::constant::bisque, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::bisque       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::bisque<category_type>( ).container();
          }

        };

     }

  }

#endif
