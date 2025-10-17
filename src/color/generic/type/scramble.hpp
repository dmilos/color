#ifndef color_generic_type_scramble
#define color_generic_type_scramble

// ::color::type::scramble2<0,1>
// ::color::type::scramble3<0,1,2>
// ::color::type::scramble4<0,1,2,3>
// ::color::type::scramble5<0,1,2,3,4>

namespace color
 {
  namespace type
   {

    template< unsigned ... index >
     struct scrambleX
     {
     };

    template< unsigned first_position, unsigned second_position >
     using scramble2 = scrambleX< first_position, second_position >;

    template< unsigned first_position, unsigned second_position, unsigned third_position >
     using scramble3 = scrambleX< first_position, second_position, third_position >;

    template< unsigned first_position, unsigned second_position, unsigned third_position , unsigned fourth_position >
     using scramble4  = scrambleX< first_position, second_position, third_position, fourth_position >;

    template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position, unsigned fifth_position >
     using scramble5  = scrambleX< first_position, second_position, third_position, fourth_position, fifth_position >;

   }
 }

#endif
