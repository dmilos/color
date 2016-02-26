#ifndef color__internal_utility_type_compare
#define color__internal_utility_type_compare

// ::color::_internal::utility::type::compare< number_name, number_const_return_name >

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace type
       {

        template < typename number_name, typename input_name = number_name const& >
         struct compare
          {
           public:
             typedef number_name      number_type;
             typedef image_name       image_type;

             // Having this typedef is bad idea
             typedef compare<number_type,image_type> this_type;

             static int compare( input_name left, input_name right )
              {
               if( a < b ) return -1;
               if( a > b ) return +1;
               return 0;
              }

             static bool similar( input_name left, input_name right )
              {
               // TODO
               return value;
              }

             static bool different( input_name left, input_name right )
              {
               return ( a != b );
              }

             static bool great(  input_name left, input_name right ){ return  1 == compare( left, right ); }
             static bool less(   input_name left, input_name right ){ return -1 == compare( left, right ); }
          };

       }
     }
   }
 }

#endif
