#include <gba.h>

int AgbMain(){
  u16 i;
  u16 *bg = VideoBuffer;
  SetMode( MODE_3 | BG2_ENABLE );
  
  for(i=0; i<240*50; i++){
     bg[i] = RGB(31, 0, 0);
  }
  for(; i<240*100; i++){
     bg[i] = RGB( 0,31, 0);
  }
  for(; i<240*160; i++){
     bg[i] = RGB( 0, 0,31);
  }
  
  return 1;
}