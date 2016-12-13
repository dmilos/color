#ifndef color_YDbDr_trait_info
#define color_YDbDr_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template <> struct info< ::color::category::YDbDr_uint8 >    {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::YDbDr_uint16 >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::YDbDr_uint32 >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::YDbDr_uint64 >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::YDbDr_float >    {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::YDbDr_double >   {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::YDbDr_ldouble >  {  public: enum { implemented_entity = true }; enum {  meaningful_entity = true }; };

   }
 }

#endif
