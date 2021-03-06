#include <MeggyJrSimple.h>    

int sx=4; //seccond x value (dot)
int sy=7; //seccond y value (dot)
int s=0; //secconds counter
int m=0; //minutes 1 place counter
int mb=0; //minute tens place counter
int h=1; // hour ones place counter
int hb=0; //hour tens place counter
int c=0; // counter (advances dot every seccond)
int bc=2; //border color
int dc=1; //dot color
int cc=0; //Not used

void setup()  
{
   MeggyJrSimpleSetup(); 
   Serial.begin (9600);  
}

void loop ()

{
  Serial.print ("s is ");
  Serial.println (s);
  Serial.print ("h is ");
  Serial.println (h);
  Serial.print ("mb is ");
  Serial.println (mb);
  Serial.print ("m is ");
  Serial.println (m);
  Serial.println (); 
CheckButtonsPress();

if(Button_Right)
    { 
     bc++;
    }
 if(Button_Left)
    { 
      bc--;
    }
 if(Button_B)
    { 
     dc--;
    }
 if(Button_A)
    { 
      dc++;
    }

CheckButtonsDown();

 if(Button_Up)
    { 
      m++;
      s=0;
      sx=3;
      sy=7;
    }
  
  if(Button_Down)
    { 
      m--;
      s=0;
      sx=3;
      sy=7;
    }
// advances dot around the screen once a minute 
if (c==20)
 if (sy==7)
   if (sx<7)
    {
      sx++;
    }
if (c==20)
  if (sx==7) 
    if (sy>0)
    {
      sy--;
    } 
if (c==20)
  if (sy==0) 
    if (sx>0)
    {
      sx--;
    }
if (c==20)
  if (sx==0) 
    if (sy>-1)
    {
      sy++;
    }
if (c==20)
  if (sx==0) 
    if (sy==7)
    {
      sx=1;
    }
//adds 1 minute every time dot goes around once
if (s==480)
  {
    s=0;
    m++;
  }
//makes hours + minutes go down when time is set
if (m<0)
  {
    mb--;
    m=9;
  }
if (mb<0)
  {
    h--;
    mb=5;
    m=9;
  }
if (h<0)
  {
    hb--;
    h=9;
    mb=5;
    m=9;
  }
if (hb<0)
  {
    hb=1;
    mb=0;
    m=0;
  }
if (hb==2)
  if (h==4)
    if (m==1)
    {
      hb=0;
      h=0;
      mb=0;
      m=1;
    }
if (hb==0)
  if (h==0)
    if (m==0)
      if(mb==0)
    {
      hb=2;
      h=4;
      mb=0;
      m=0;
    }

//advances time
if (m==10)
  {
    m=0;
    mb++;
  }
if (mb==6)
  {
    mb=0;
    h++;
  }
if (h==10)
  {
    h=0;
    hb++;
    m=0;
    mb=0;
  }

//displays time as pix
if(h==1)
  {
   DrawPx(3,2,1);
  }
if(h==2)
  {
   DrawPx(3,3,1);
  }
if(h==3)
  {
   DrawPx(3,3,1);
   DrawPx(3,2,1);
  }
if(m==1)
  {
   DrawPx(5,2,1);
  }
if(m==2)
  {
   DrawPx(5,3,1);
  }
if(m==3)
  {
   DrawPx(5,2,1);
   DrawPx(5,3,1);
  }
if(m==4)
  {
   DrawPx(5,4,1);
  }
if(m==5)
  {
   DrawPx(5,4,1);
   DrawPx(5,2,1);
  }
if(m==6)
  {
   DrawPx(5,4,1);
   DrawPx(5,3,1);
  }
if(m==7)
  {
   DrawPx(5,4,1);
   DrawPx(5,3,1);
   DrawPx(5,2,1);
  }
if(m==8)
  {
   DrawPx(5,5,1);
  }
if(m==9)
  {
   DrawPx(5,5,1);
   DrawPx(5,2,1);
  }
if(mb==1)
  {
   DrawPx(4,2,1);
  }
if(mb==2)
  {
   DrawPx(4,3,1);
  }
if(mb==3)
  {
   DrawPx(4,2,1);
   DrawPx(4,3,1);
  }
if(mb==4)
  {
   DrawPx(4,4,1);
  }
if(mb==5)
  {
   DrawPx(4,4,1);
   DrawPx(4,2,1);
  }
if(mb==6)
  {
   DrawPx(4,4,1);
   DrawPx(4,3,1);
  }
if(h==1)
  {
   DrawPx(3,2,1);
  }
if(h==2)
  {
   DrawPx(3,3,1);
  }
if(h==3)
  {
   DrawPx(3,3,1);
   DrawPx(3,2,1);
  }
if(h==4)
  {
   DrawPx(3,4,1);
  }
if(h==5)
  {
   DrawPx(3,4,1);
   DrawPx(3,2,1);
  }
if(h==6)
  {
   DrawPx(3,4,1);
   DrawPx(3,3,1);
  }
if(h==7)
  {
   DrawPx(3,4,1);
   DrawPx(3,3,1);
   DrawPx(3,2,1);
  }
if(h==8)
  {
   DrawPx(3,5,1);
  }
if(h==9)
  {
   DrawPx(3,5,1);
   DrawPx(3,2,1);
  }
if(hb==1)
  {
   DrawPx(2,2,1);
  }
if(hb==2)
  {
   DrawPx(2,3,1);
  }
//if(cc==4)
if(bc>15)
   {
    bc=1;
   }
if(bc<1)
   {
    bc=15;
   }
//if(cc==4)
if(dc>15)
   {
    dc=1;
    }
if(dc<1)
   {
    dc=15;
    }
  DrawPx(5,0,bc);
  DrawPx(7,6,bc);
  DrawPx(7,5,bc);
  DrawPx(7,4,bc);
  DrawPx(7,3,bc);
  DrawPx(7,2,bc);
  DrawPx(7,1,bc);
  DrawPx(0,6,bc);
  DrawPx(0,5,bc);
  DrawPx(0,4,bc);
  DrawPx(0,3,bc);
  DrawPx(0,2,bc);
  DrawPx(0,1,bc);
  DrawPx(1,0,bc);
  DrawPx(2,0,bc);
  DrawPx(3,0,bc);
  DrawPx(4,0,bc);
  DrawPx(5,0,bc);
  DrawPx(6,0,bc);
  DrawPx(1,7,bc);
  DrawPx(2,7,bc);
  DrawPx(3,7,bc);
  DrawPx(4,7,bc);
  DrawPx(5,7,bc);
  DrawPx(6,7,bc);
  DrawPx(sx,sy,dc);
 if (c>20)
    {
      c=0;
    }
  s++;
  c++;
  cc++;
  DisplaySlate();
  delay(125);
  ClearSlate();
}

