#ifndef color_yuv_trait_info
#define color_yuv_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template < ::color::constant::yuv::reference_enum reference_number > struct info< ::color::category::yuv_uint8  < reference_number > > {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template < ::color::constant::yuv::reference_enum reference_number > struct info< ::color::category::yuv_uint16 < reference_number > > {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template < ::color::constant::yuv::reference_enum reference_number > struct info< ::color::category::yuv_uint32 < reference_number > > {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template < ::color::constant::yuv::reference_enum reference_number > struct info< ::color::category::yuv_uint64 < reference_number > > {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template < ::color::constant::yuv::reference_enum reference_number > struct info< ::color::category::yuv_float  < reference_number > > {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template < ::color::constant::yuv::reference_enum reference_number > struct info< ::color::category::yuv_double < reference_number > > {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template < ::color::constant::yuv::reference_enum reference_number > struct info< ::color::category::yuv_ldouble< reference_number > > {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };

   }
 }

#endif
