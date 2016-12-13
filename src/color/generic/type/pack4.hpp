#ifndef color_type_pack4
#define color_type_pack4

// ::color::type::pack4

namespace color
 {
  namespace type
   {

    template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
     struct pack4{};

    typedef  ::color::type::pack4<  2,  2,  2,  2 >  split2222_t;

    typedef  ::color::type::pack4<  4,  4,  4,  4 >  split4444_t;

    typedef  ::color::type::pack4<  5,  5,  5,  1 >  split5551_t;
    typedef  ::color::type::pack4<  1,  5,  5,  5 >  split1555_t;

    typedef  ::color::type::pack4<  6,  6,  6,  6 >  split6666_t;

    typedef  ::color::type::pack4<  8,  8,  8,  8 >  split8888_t;

    typedef  ::color::type::pack4<  2, 10, 10, 10 >  split2AAA_t;
    typedef  ::color::type::pack4< 10, 10, 10,  2 >  splitAAA2_t;

    typedef  ::color::type::pack4< 16, 16, 16, 16 >  splitGGGG_t;

   }
 }

#endif
