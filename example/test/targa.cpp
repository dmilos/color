#include <istream>

typedef unsigned char targa_header_struct[18];

int targa_get_width( targa_header_struct header )
 {
  return int(header[12]) + 256*int( header[13] );
 }

int targa_get_height( targa_header_struct header )
 {
  return int(header[14]) + 256*int( header[15] );
 }

int targa_get_depth( targa_header_struct header )
 {
  return int(header[16]);
 }

void targa_make_gray_header( int width, int height, targa_header_struct header )
 {
   header[ 0] = 0;
   header[ 1] = 0;
   header[ 2] = 3;
   header[ 3] = 0;
   header[ 4] = 0;
   header[ 5] = 0;
   header[ 6] = 0;
   header[ 7] = 0;

   header[ 8] = 0;
   header[ 9] = 0;
   header[10] = 0;
   header[11] = 0;

   header[12] = (unsigned char) (width & 0x00FF);
   header[13] = (unsigned char) ((width & 0xFF00) / 256);
   header[14] = (unsigned char) (height & 0x00FF);
   header[15] = (unsigned char) ((height & 0xFF00) / 256);

   header[16] = 8;
   header[17] = 32/* + ( 1 << 5 )*/;
 }


void targa_make_header( int width, int height, targa_header_struct header )
 {
   header[ 0] = 0;
   header[ 1] = 0;
   header[ 2] = 2;
   header[ 3] = 0;
   header[ 4] = 0;
   header[ 5] = 0;
   header[ 6] = 0;
   header[ 7] = 0;

   header[ 8] = 0;
   header[ 9] = 0;
   header[10] = 0;
   header[11] = 0;

   header[12] =  (unsigned char)(width & 0x00FF);
   header[13] =  (unsigned char)((width & 0xFF00) / 256);
   header[14] =  (unsigned char)(height & 0x00FF);
   header[15] =  (unsigned char)((height & 0xFF00) / 256);

   header[16] = 32;
   header[17] = 0;
 }

 void targa_make_header24( int width, int height, targa_header_struct header )
 {
   header[ 0] = 0;
   header[ 1] = 0;
   header[ 2] = 2;
   header[ 3] = 0;
   header[ 4] = 0;
   header[ 5] = 0;
   header[ 6] = 0;
   header[ 7] = 0;

   header[ 8] = 0;
   header[ 9] = 0;
   header[10] = 0;
   header[11] = 0;

   header[12] =  (unsigned char)(width & 0x00FF);
   header[13] =  (unsigned char)((width & 0xFF00) / 256);
   header[14] =  (unsigned char)(height & 0x00FF);
   header[15] =  (unsigned char)((height & 0xFF00) / 256);

   header[16] = 24;
   header[17] = 32;
 }


bool targa_load( targa_header_struct & header, std::istream & stream )
 {
  stream.read( (char *)(header), 18 );

  if (stream)
   return true;
  else
   return false;
 }


