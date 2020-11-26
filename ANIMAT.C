#include<graphics.h>
#include<conio.h>

void main()
{
  int gd = DETECT, gm,i;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  for(i=0;i<=225;i++)
  {
   cleardevice();
   line(0,350,700,350);
   line(0,450,700,450);
   line(70+i,400,20+i,400); //AB
   line(50+i,400,30+i,410); //EC
   line(50+i,400,30+i,390); //ED
   line(20+i,400,13+i,395); //BF
   delay(10);
  }
  for(i=0;i<=400;i++)
  {
   cleardevice();
   line(0,350,700,350);
   line(0,450,700,450);
   line(305+i,365-i,270+i,400-i);
   line(291+i,379-i,270+i,379-i);
   line(291+i,379-i,291+i,400-i);
   line(270+i,400-i,263+i,400-i);
   delay(10);
  }
  getch();
  closegraph();
}
