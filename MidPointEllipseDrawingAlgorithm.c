//Mid Point Ellipse Drawing Algorithm

#include<stdio.h>
#include<graphics.h>
#include<math.h>

void main()
{
  long d1,d2;
  int i,gd,gm,x,y,x0,y0;
  long rx,ry,rxsq,rysq,tworxsq,tworysq,dx,dy;
  clrscr();
  printf("Enter the X radius and Y radius of the ellipse:\n");
  scanf("%ld%ld",&rx,&ry);
  printf("\nEnter the center (x,y) of the ellipse:\n");
  scanf("%d%d",&x0,&y0);
  detectgraph(&gd,&gm);
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  cleardevice();
  rxsq=rx*rx;
  rysq=ry*ry;
  tworxsq=2*rxsq;
  tworysq=2*rysq;
  x=0;
  y=ry;
  d1=rysq-rxsq*ry+(0.25*rxsq);
  dx=tworysq*x;
  dy=tworxsq*y;
  do
  {
    putpixel(x0+x,y0+y,WHITE);
    putpixel(x0-x,y0-y,WHITE);
    putpixel(x0+x,y0-y,WHITE);
    putpixel(x0-x,y0+y,WHITE);
    if(d1<0)
    {
      x=x+1;
      y=y;
      dx=dx+tworysq;
      d1=d1+dx+rysq;
    }
    else
    {
      x=x+1;
      y=y-1;
      dx=dx+tworysq;
      dy=dy-tworxsq;
      d1=d1+dx-dy+rysq;
    }
    delay(10);
  }
  while(dx<dy);
  d2=rysq*(x+0.5)*(x+0.5)+rxsq*(y-1)*(y-1)-(rxsq*rysq);
  do
  {
    putpixel(x0+x,y0+y,WHITE);
    putpixel(x0-x,y0-y,WHITE);
    putpixel(x0+x,y0-y,WHITE);
    putpixel(x0-x,y0+y,WHITE);
    if(d2>0)
    {
      x=x;
      y=y-1;
      dy=dy-tworxsq;
      d2=d2-dy+rxsq;
    }
    else
    {
      x=x+1;
      y=y-1;
      dx=dx+tworysq;
      dy=dy-tworxsq;
      d2=d2+dx-dy+rxsq;
    }
  }
  while(y>0);
  getch();
  closegraph();
}
