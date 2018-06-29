#ifndef color_lab__internal_reformat
#ifndef color_lab__internal_reformat

// ::color::_internal::lab::convert< >(   )

#include "../_internal/reformat.hpp"
#include "../category.hpp"


namespace color
 {
  namespace _internal
   {

    namespace lab
     {

      template
       <
         typename type_name
       >
      type_name clamp( type_name const& value, type_name const& min, type_name const& max )
       {
        if( value < min ) return min;
        if( max  < value ) return max;
        return value;
       }

      template
       <
         typename left_name
        ,typename right_name
       >
       struct convert
        {
         public:
           static left_name process( right_name const& right )
            {
             return left_name( right );
            }
        };

      template<> struct convert<std::uint8_t,float>
        {
         static left_name process( right_name const& right )
          {
           return left_name( ::color::_internal::lab::clamp<float>( right, 0, 255 ) + 128 );
          }
        };

      template<> struct convert<std::uint8_t,double>
        {
         static left_name process( right_name const& right )
          {
           return left_name( ::color::_internal::lab::clamp<double>( right, 0, 255 ) + 128 );
          }
        };

      template<> struct convert<std::uint8_t,long double>
        {
         static left_name process( right_name const& right )
          {
           return left_name( ::color::_internal::lab::clamp<long double>( right, 0, 255 ) + 128 );
          }
        };

      template<> struct convert<float,std::uint8_t>
        {
         static left_name process( right_name const& right )
          {
           return left_name( right - float(128) );
          }
        };

      template<> struct convert<double,std::uint8_t>
        {
         static left_name process( right_name const& right )
          {
           return left_name( right - double(128) );
          }
        };

      template<> struct convert<long double,std::uint8_t>
        {
         static left_name process( right_name const& right )
          {
           return left_name( right - (long double)(128) );
          }
        };

     }
   }
 }

#endif



