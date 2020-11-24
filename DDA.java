//DDA line drwing algorithm program:
#include<graphics.h>
#include<stdio.h>
#include<math.h>
int main()
{
  int gd,gm,x,y,pixel,x1,x2,y1,y2,dx,dy;
  detectgraph(&gd,&gm);
  initgraph(&gd,&gm,"C://TurboC3//BGI");
  printf("Enter the value of x1 : ");
  scanf("%d",&x1);
  printf("Enter the value of y1 : ");
  scanf("%d",&y1);
  printf("Enter the value of x2 : ");
  scanf("%d",&x2);
  printf("Enter the value of y2 : ");
  scanf("%d",&y2);
  dx=abs(x1-x2);
  dy=abs(y1-y2);
  if(dx>=dy)
    pixel=dx;
  else
    pixel=dy;
  dx=dx/pixel;
  dy=dy/pixel;
  x=x1;
  y=y1;
  while(pixel--)
  {
    putpixel(x,y,WHITE);
    x=x+dx;
    y=y+dy;
    delay(100);
  }
  getch();
  closegraph();
  return 0;
}
