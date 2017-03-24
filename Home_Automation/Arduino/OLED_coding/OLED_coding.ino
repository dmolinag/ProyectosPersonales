#include "U8glib.h"

U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);

void u8g_prepare(void) 
{
  u8g.setFont(u8g_font_6x10);
  u8g.setFontRefHeightExtendedText();
  u8g.setDefaultForegroundColor();
  u8g.setFontPosTop();
}

const unsigned char mybotic[] PROGMEM =
{
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x92, 0x24, 0x49, 0x92, 0x24,
   0x49, 0x02, 0x01, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03,
   0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0x1c, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x03, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
   0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x03, 0x1c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x03,
   0x0c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x00, 0x00,
   0x00, 0x1a, 0x00, 0x00, 0x00, 0x07, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00,
   0x00, 0x00, 0x03, 0x1c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x03,
   0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x00, 0x00,
   0x00, 0x0c, 0x00, 0x00, 0x00, 0x07, 0x0c, 0x00, 0xa8, 0xaa, 0xaa, 0xaa,
   0x02, 0x00, 0x03, 0x1c, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x03,
   0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x03, 0x1c, 0x00, 0x04,
   0x00, 0x00, 0x00, 0x04, 0x00, 0x07, 0x0c, 0x80, 0x03, 0x20, 0x00, 0x00,
   0x14, 0x00, 0x03, 0x1c, 0x00, 0x87, 0x40, 0x40, 0x20, 0x3c, 0x00, 0x03,
   0x0c, 0x80, 0x45, 0x14, 0x20, 0x02, 0x5c, 0x00, 0x03, 0x1c, 0xc0, 0x05,
   0x2c, 0x20, 0x0e, 0xf8, 0x00, 0x07, 0x0c, 0xe0, 0x23, 0x1f, 0x81, 0x0f,
   0xfc, 0x00, 0x03, 0x1c, 0xc0, 0x27, 0x3c, 0x11, 0x1f, 0xd8, 0x00, 0x03,
   0x0c, 0xe0, 0x05, 0x0a, 0x20, 0x05, 0xfc, 0x00, 0x03, 0x1c, 0xc0, 0x05,
   0x80, 0x20, 0x44, 0x58, 0x00, 0x07, 0x0c, 0xc0, 0x03, 0x21, 0x80, 0x20,
   0x1c, 0x00, 0x03, 0x1c, 0x00, 0x07, 0x0a, 0x00, 0x0a, 0x38, 0x00, 0x03,
   0x0c, 0x00, 0x3c, 0x00, 0x00, 0xc0, 0x2f, 0x00, 0x03, 0x1c, 0x00, 0x60,
   0x00, 0x00, 0x80, 0x04, 0x00, 0x07, 0x0c, 0x00, 0xc0, 0xff, 0xff, 0x7f,
   0x00, 0x00, 0x03, 0x1c, 0x00, 0x84, 0xff, 0xff, 0x1f, 0x04, 0x00, 0x03,
   0x0c, 0x00, 0x00, 0x55, 0x55, 0x15, 0x02, 0x00, 0x03, 0x1c, 0x00, 0x50,
   0x54, 0x55, 0xa5, 0x02, 0x00, 0x07, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x03, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
   0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x10, 0x02,
   0x20, 0x00, 0x20, 0x04, 0x00, 0x07, 0x0c, 0x44, 0x04, 0x40, 0x00, 0x08,
   0x05, 0x00, 0x03, 0x1c, 0x04, 0x10, 0x88, 0x00, 0x10, 0x05, 0x00, 0x03,
   0x0c, 0x10, 0xc9, 0x45, 0x22, 0x8a, 0x2a, 0x02, 0x03, 0x1c, 0x20, 0x12,
   0x89, 0x14, 0x10, 0x11, 0x04, 0x07, 0x0c, 0x94, 0x89, 0x44, 0xc9, 0x4c,
   0x89, 0x05, 0x03, 0x1c, 0x20, 0x91, 0x08, 0x89, 0x08, 0x19, 0x05, 0x03,
   0x0c, 0x12, 0x09, 0x14, 0x14, 0x94, 0x00, 0x04, 0x03, 0x1c, 0x54, 0xab,
   0xa0, 0x40, 0x81, 0x8b, 0x00, 0x07, 0x0c, 0x00, 0x40, 0x04, 0x00, 0x00,
   0x00, 0x00, 0x03, 0x1c, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
   0x0c, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x03, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
   0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x80, 0x03, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07,
   0xd8, 0xb6, 0x6d, 0xdb, 0xb6, 0xed, 0x76, 0x5b, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
};

void picture(uint8_t a)
{
  u8g.drawXBMP( 25, 0, 69 , 63, mybotic);
}

void intro(uint8_t a)
{
  u8g.setFont(u8g_font_unifont);
  u8g.drawStr(0, 19, "Welcome");
  u8g.drawStr(0, 38, "to");
  u8g.drawStr(0, 57, "Mybotic :)");
}

void u8g_box_frame(uint8_t a) 
{
  u8g.drawStr( 0, 0, "drawBox");
  u8g.drawBox(5,10,20,10);
  u8g.drawBox(10+a,15,30,7);
  u8g.drawStr( 0, 30, "drawFrame");
  u8g.drawFrame(5,10+30,20,10);
  u8g.drawFrame(10+a,15+30,30,7);
}

void u8g_disc_circle(uint8_t a) 
{
  u8g.drawStr( 0, 0, "drawDisc");
  u8g.drawDisc(10,18,9);
  u8g.drawDisc(24+a,16,7);
  u8g.drawStr( 0, 30, "drawCircle");
  u8g.drawCircle(10,18+30,9);
  u8g.drawCircle(24+a,16+30,7);
}

void u8g_r_frame(uint8_t a) 
{
  u8g.drawStr( 0, 0, "drawRFrame/Box");
  u8g.drawRFrame(5, 10,40,30, a+1);
  u8g.drawRBox(50, 10,25,40, a+1);
}

void u8g_string(uint8_t a) 
{
  u8g.drawStr270(30,31-a, "0/360");
  u8g.drawStr(30+a,31, "90");
  u8g.drawStr90(30,31+a, "180");
  u8g.drawStr180(30-a,31, "270");
}

void u8g_line(uint8_t a) 
{
  u8g.drawStr( 0, 0, "drawLine");
  u8g.drawLine(7+a, 10, 40, 55);
  u8g.drawLine(7+a*2, 10, 60, 55);
  u8g.drawLine(7+a*3, 10, 80, 55);
  u8g.drawLine(7+a*4, 10, 100, 55);
}

void u8g_triangle(uint8_t a) 
{
  uint16_t offset = a;
  u8g.drawStr( 0, 0, "drawTriangle");
  u8g.drawTriangle(14,7, 45,30, 10,40);
  u8g.drawTriangle(14+offset,7-offset, 45+offset,30-offset, 57+offset,10-offset);
  u8g.drawTriangle(57+offset*2,10, 45+offset*2,30, 86+offset*2,53);
  u8g.drawTriangle(10+offset,40+offset, 45+offset,30+offset, 86+offset,53+offset);
}

void u8g_extra_page(uint8_t a)
{
  if ( u8g.getMode() == U8G_MODE_HICOLOR || u8g.getMode() == U8G_MODE_R3G3B2) {
    /* draw background (area is 128x128) */
    u8g_uint_t r, g, b;
    b = a << 5;
    for( g = 0; g < 64; g++ )
    {
      for( r = 0; r < 64; r++ )
      {
	u8g.setRGB(r<<2, g<<2, b );
	u8g.drawPixel(g, r);
      }
    }
    u8g.setRGB(255,255,255);
    u8g.drawStr( 66, 0, "Color Page");
  }
  else if ( u8g.getMode() == U8G_MODE_GRAY2BIT )
  {
    u8g.drawStr( 66, 0, "Gray Level");
    u8g.setColorIndex(1);
    u8g.drawBox(0, 4, 64, 32);    
    u8g.drawBox(70, 20, 4, 12);
    u8g.setColorIndex(2);
    u8g.drawBox(0+1*a, 4+1*a, 64-2*a, 32-2*a);
    u8g.drawBox(74, 20, 4, 12);
    u8g.setColorIndex(3);
    u8g.drawBox(0+2*a, 4+2*a, 64-4*a, 32-4*a);
    u8g.drawBox(78, 20, 4, 12);
  }
  else
  {
    u8g.drawStr( 0, 12, "setScale2x2");
    u8g.setScale2x2();
    u8g.drawStr( 0, 6+a, "setScale2x2");
    u8g.undoScale();
  }
}


uint8_t draw_state = 0;

void draw(void) 
{
  u8g_prepare();
  switch(draw_state >> 3) {
    case 0: picture(draw_state&7); break;
    case 1: intro(draw_state&7); break;
    case 2: u8g_box_frame(draw_state&7); break;
    case 3: u8g_disc_circle(draw_state&7); break;
    case 4: u8g_r_frame(draw_state&7); break;
    case 5: u8g_string(draw_state&7); break;
    case 6: u8g_line(draw_state&7); break;
    case 7: u8g_triangle(draw_state&7); break;
    case 8: u8g_extra_page(draw_state&7); break;
  }
}

void setup(void) 
{
#if defined(ARDUINO)
  pinMode(13, OUTPUT);           
  digitalWrite(13, HIGH);  
#endif
}

void loop(void) 
{
  
  // picture loop  
  u8g.firstPage();  
  do 
  {
    draw();
  } while( u8g.nextPage() );
  
  // increase the state
  draw_state++;
  if ( draw_state >= 9*8 )
    draw_state = 0;
}


