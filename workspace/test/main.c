#include <gba.h>

int AgbMain(){
  u16 *bg = VideoBuffer;
  SetMode( MODE_3 | BG2_ENABLE );
  
  bg[0] = RGB(31, 31, 31);
  
  return 1;
}