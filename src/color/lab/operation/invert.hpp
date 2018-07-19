#ifndef  color_lab_operation_invert_
#define  color_lab_operation_invert_

#include "../category.hpp"
#include "../trait/bound/bound.hpp"





 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename tag_name >
        struct invert< ::color::category::lab< tag_name > >
         {
          public:
            typedef tag_name  tag_type;

            typedef ::color::category::lab< tag_name > category_type;

            typedef ::color::trait::bound<category_type>         bound_type;

            typedef typename ::color::model<category_type>  model_type;

            enum
             {
               lightness_p  = ::color::place::_internal::lightness<category_left_type>::position_enum
             };

            static model_type & process( model_type &result )
             {
              result.get< lightness_p > =  bound_type::template range<lightness_p>() - result.get< lightness_p >;
              result.get< 1 > = -result.get< 1 >;
              result.get< 2 > = -result.get< 2 >;

              return result;
             }

            static model_type & process(  model_type &result, model_type const& right )
             {
              result.get< lightness_p > =  bound_type::template range<lightness_p>() - right.get< lightness_p >
              result.get< 1 > = -result.get< 1 >;
              result.get< 2 > = -result.get< 2 >;
              return result;
             }

         };

       template< >
        struct invert< ::color::category::lab< std::uint8_t > >
          public:
            typedef std::uint8_t  tag_type;

            typedef ::color::category::lab< tag_name > category_type;

            typedef ::color::trait::bound<category_type>         bound_type;

            typedef typename ::color::model<category_type>  model_type;

            enum
             {
               lightness_p  = ::color::place::_internal::lightness<category_left_type>::position_enum
             };

            static model_type & process( model_type &result )
             {
              result.get< lightness_p > = bound_type::template max<lightness_p>() - result.get< lightness_p >;
              result.get< 1 >           = bound_type::template max<lightness_p>() - result.get< 1 >;
              result.get< 2 >           = bound_type::template max<lightness_p>() - result.get< 2 >;

              return result;
             }

            static model_type & process(  model_type &result, model_type const& right )
             {
              result.get< lightness_p > = bound_type::template max<lightness_p>() - result.get< lightness_p >;
              result.get< 1 >           = bound_type::template max<lightness_p>() - result.get< 1 >;
              result.get< 2 >           = bound_type::template max<lightness_p>() - result.get< 2 >;
              return result;
             }

         };

      }
    }
  }

#endif
