#include <MeggyJrSimple.h>    

int sx=3;
int sy=7;
int s=0;
int m=0;
int mb=0;
int h=1;
int hb=1;

void setup()                    
{
  MeggyJrSimpleSetup();     
}

void loop()
{
  
if (sy==7) 
  if (sx<7)
    {
      sx++;
    }
if (sx==7) 
  if (sy>0)
    {
      sy--;
    } 
if (sy==0) 
  if (sx>0)
    {
      sx--;
    }
if (sx==0) 
  if (sy>-1)
    {
      sy++;
    }
if (sx==0) 
  if (sy==7)
    {
      sx=1;
    }
if (s==24)
  {
    s=0;
    m++;
  }
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
if (h==4)
  if (hb==2)
  {
    h=1;
    hb=0;
    m=0;
    mb=0;
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
  
  DrawPx(5,0,5);
  DrawPx(7,6,5);
  DrawPx(7,7,5);
  DrawPx(7,5,5);
  DrawPx(7,4,5);
  DrawPx(7,3,5);
  DrawPx(7,2,5);
  DrawPx(7,1,5);
  DrawPx(7,0,5);
  DrawPx(0,6,5);
  DrawPx(0,7,5);
  DrawPx(0,5,5);
  DrawPx(0,4,5);
  DrawPx(0,3,5);
  DrawPx(0,2,5);
  DrawPx(0,1,5);
  DrawPx(0,0,5);
  DrawPx(1,0,5);
  DrawPx(2,0,5);
  DrawPx(3,0,5);
  DrawPx(4,0,5);
  DrawPx(5,0,5);
  DrawPx(6,0,5);
  DrawPx(7,0,5);
  DrawPx(1,7,5);
  DrawPx(2,7,5);
  DrawPx(3,7,5);
  DrawPx(4,7,5);
  DrawPx(5,7,5);
  DrawPx(6,7,5);
  DrawPx(7,7,5);
  DrawPx(sx,sy,15);
  s++;
  DisplaySlate();
  delay(25);
  ClearSlate();
}

