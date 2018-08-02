#include "U8glib.h"
 int x=57,y=11;
 int xvalue,yvalue,swvalue;
 U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);
#define u8g_logo_width 128
#define u8g_logo_height 64

static unsigned char menue[] U8G_PROGMEM = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xFC,0xDF,0xFF,0x83,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xF8,0x98,0x8F,0xFB,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xE0,0x1F,0xFE,0xDB,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xEC,0xD8,0x8E,0xFB,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xF8,0x9F,0xFF,0xDB,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xE0,0x18,0x00,0xD8,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x18,0x00,0xDE,0x1B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xF8,0xBF,0xDF,0xFF,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xFC,0xBF,0xDF,0xFD,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xFC,0xFF,0xD9,0xCC,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xFC,0xFF,0xFF,0xFF,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xF8,0xE1,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xDE,0x01,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFC,0xFF,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFE,0xD8,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x7C,0xDF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x3C,0xC3,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFE,0xCF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFE,0x1F,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x7E,0xFB,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x1C,0x03,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xDC,0xF3,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEC,0x83,0x1D,0x33,0xC0,0xC1,0x7F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6C,0xF3,0xFF,0xFF,0xC3,0xC1,0x61,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x9F,0x9D,0x7F,0xFF,0xDD,0x7F,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xF3,0xFF,0xFF,0xF3,0xCF,0x61,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xCF,0xC1,0xE3,0xF0,0xE7,0xFF,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xE3,0x7F,0xE3,0xF0,0xC7,0x6E,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFF,0x3C,0xF3,0xD8,0xC7,0x6E,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xF3,0x7F,0xFF,0xDD,0xFD,0xFF,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0x1C,0xBF,0xCF,0x19,0x0E,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0xE0,0x1F,0x0F,0xF7,0xF0,0xFF,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 };

static unsigned char arrow[] U8G_PROGMEM ={
  0x00,0x00,0x18,0x0C,0x7E,0x00,0x00,0x00
  };

  void draw(int alter) {
  if(alter==0)
  {
  u8g.drawXBMP( 0, 0, u8g_logo_width, u8g_logo_height, menue);
  u8g.drawXBMP(x,y,8,8,arrow);
  }
  else if(alter==1)
{
  u8g.setFont(u8g_font_fixed_v0r);
  u8g.drawStr(0,20,"temperature:");
    u8g.drawStr(0,40,"humidity:");
  u8g.setPrintPos(90,30);
  u8g.print(27);
  u8g.setPrintPos(90,50);
  u8g.print(50);
}
      else if(alter==2)
{u8g.setFont(u8g_font_7x13);
  u8g.drawStr(0,20,"weight:");
  u8g.setPrintPos(0,50);
  u8g.print(10.0);
}
      else if(alter==3)
{u8g.setFont(u8g_font_fixed_v0r);
  u8g.drawStr(0,20,"You shall drink");
  u8g.setPrintPos(0,40);
  u8g.print(8);
  u8g.setFont(u8g_font_fixed_v0r);
  u8g.drawStr(0,60,"cups of water this day.");}

}
void ReadStick(int &xvalu,int &yvalu,int &swvalu)
{
xvalu=analogRead(A1);
yvalu=analogRead(A2);
swvalu=analogRead(A0);
  }
  void limitAndJudge()
{
  ReadStick(xvalue,yvalue,swvalue);
  if(yvalue>700)
  {y+=20;x+=29;}
  else if(yvalue<50)
  {y-=20;x-=29;}
  if (y<0)
  y=51;
  if(y>64)
  y=11;
  if(x<50)
  x=115;
  if(x>120)
  x=57;
  }
void setup() {
  
}

void loop() {
  // put your main code here, to run repeatedly:
limitAndJudge();
  if(swvalue>100)
  {
  u8g.firstPage();  
  do {
    draw(0);
  } while( u8g.nextPage() );
  }
  else
     {u8g.firstPage();  
  do {
    if(x==57)draw(1);
    else if(x==86)draw(2);
    else if(x==115)draw(3);
    else draw(0);
  } while( u8g.nextPage() );}
}