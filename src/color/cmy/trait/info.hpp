#ifndef color_cmy_trait_info
#define color_cmy_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

  //template <> struct info< ::color::category::cmy_bool >     {  public: enum { implemented_enum = false}; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::cmy_uint8 >    {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::cmy_uint16 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::cmy_uint32 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::cmy_uint64 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::cmy_float >    {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::cmy_double >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::cmy_ldouble >  {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };

   }
 }

#endif
