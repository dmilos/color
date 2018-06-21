#ifndef color_xyz_category
#define color_xyz_category
// ::color::category::xyz<tag>




namespace color
 {
  namespace category
   {

    template< typename tag_name/*, reference_name */ >
     struct xyz
      {
       typedef void tag_type;
      };

    using xyz_bool    = ::color::category::xyz< bool    >;
    using xyz_uint8   = ::color::category::xyz< std::uint8_t   >;
    using xyz_uint16  = ::color::category::xyz< std::uint16_t  >;
  //using xyz_uint24  = ::color::category::xyz< uint24  >;
    using xyz_uint32  = ::color::category::xyz< std::uint32_t  >;
  //using xyz_uint48  = ::color::category::xyz< uint48  >;
    using xyz_uint64  = ::color::category::xyz< std::uint64_t  >;
    using xyz_float   = ::color::category::xyz< float   >;
    using xyz_double  = ::color::category::xyz< double  >;
    using xyz_ldouble = ::color::category::xyz< long double >;

   }
 }

#endif
