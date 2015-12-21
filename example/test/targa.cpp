
typedef unsigned char targa_header_struct[18];

void targa_make_header(int height, int width, targa_header_struct header)
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

   header[12] =  (width & 0x00FF);
   header[13] =  (width & 0xFF00) / 256;
   header[14] =  (height & 0x00FF);
   header[15] =  (height & 0xFF00) / 256;

   header[16] = 32;
   header[17] = 0;
 }
 