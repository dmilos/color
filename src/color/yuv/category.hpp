#ifndef color_yuv_category
#define color_yuv_category
// ::color::category::yuv<tag,reference>



#include "./constant/reference.hpp"


namespace color
 {
  namespace category
   {

    template< typename tag_name, ::color::constant::yuv::reference_enum reference_number >
     struct yuv
      {
       typedef tag_name tag_type;
      };

    template< ::color::constant::yuv::reference_enum reference_number > using yuv_uint8   = ::color::category::yuv< std::uint8_t , reference_number >;
    template< ::color::constant::yuv::reference_enum reference_number > using yuv_uint16  = ::color::category::yuv< std::uint16_t, reference_number >;
  //template< ::color::constant::yuv::reference_enum reference_number > using yuv_uint24  = ::color::category::yuv< std::uint24_t, reference_number >;
    template< ::color::constant::yuv::reference_enum reference_number > using yuv_uint32  = ::color::category::yuv< std::uint32_t, reference_number >;
  //template< ::color::constant::yuv::reference_enum reference_number > using yuv_uint48  = ::color::category::yuv< std::uint48_t, reference_number >;
    template< ::color::constant::yuv::reference_enum reference_number > using yuv_uint64  = ::color::category::yuv< std::uint64_t, reference_number >;
    template< ::color::constant::yuv::reference_enum reference_number > using yuv_float   = ::color::category::yuv< float        , reference_number >;
    template< ::color::constant::yuv::reference_enum reference_number > using yuv_double  = ::color::category::yuv< double       , reference_number >;
    template< ::color::constant::yuv::reference_enum reference_number > using yuv_ldouble = ::color::category::yuv< long double  , reference_number >;

   }
 }

#endif
