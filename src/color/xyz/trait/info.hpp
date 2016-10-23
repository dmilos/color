#ifndef color_xyz_trait_info
#define color_xyz_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template <> struct info< ::color::category::xyz_uint8 >    {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::xyz_uint16 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::xyz_uint32 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::xyz_uint64 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::xyz_float >    {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::xyz_double >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::xyz_ldouble >  {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };

   }
 }

#endif
