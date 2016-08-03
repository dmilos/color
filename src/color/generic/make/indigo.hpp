#ifndef  color_generic_make_indigo
#define color_generic_make_indigo

// ::color::make::indigo( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void indigo( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      indigo()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::indigo( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {
      namespace _internal
       {
        struct indigo_type{};
       }

      using  indigo_type = ::color::constant::base< ::color::constant::_internal::indigo_type >;
      using  indigo_t    = ::color::constant::indigo_type;
      using  indigo      = ::color::constant::indigo_type;

      template< typename category_name >
       struct make<::color::constant::indigo, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::indigo       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::indigo<category_type>( ).container();
          }

        };

     }

  }

#endif
