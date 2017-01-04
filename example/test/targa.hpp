#ifndef targa_mini_lib
#define targa_mini_lib

typedef unsigned char targa_header_struct[18];
extern int targa_get_width( targa_header_struct header );
extern int targa_get_height( targa_header_struct header );
extern int targa_get_depth( targa_header_struct header );
extern void targa_make_gray_header( int width, int height, targa_header_struct header );
extern void targa_make_header( int width, int height, targa_header_struct header );
extern void targa_make_header24( int width, int height, targa_header_struct header );

extern bool targa_load( targa_header_struct & header, std::istream & stream );

#endif
