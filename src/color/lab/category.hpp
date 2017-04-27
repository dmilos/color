#ifndef color_lab_category
#define color_lab_category
// ::color::category::lab<tag>




namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct lab
      {
       typedef void category_name;
      };

    using lab_bool    = ::color::category::lab< bool    >;
    using lab_uint8   = ::color::category::lab< std::uint8_t   >;
    using lab_uint16  = ::color::category::lab< std::uint16_t  >;
  //using lab_uint24  = ::color::category::lab< uint24  >;
    using lab_uint32  = ::color::category::lab< std::uint32_t  >;
  //using lab_uint48  = ::color::category::lab< lab_uint48  >;
    using lab_uint64  = ::color::category::lab< std::uint64_t  >;
    using lab_float   = ::color::category::lab< float   >;
    using lab_double  = ::color::category::lab< double  >;
    using lab_ldouble = ::color::category::lab< long double >;

   }
 }

#endif
