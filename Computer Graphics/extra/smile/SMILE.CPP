//#include<stdio.h>
//#include<conio.h>
#include<iostream>
using namespace std;
//#include<stdlib.h>
#include<math.h>
//#include<dos.h>
#include<graphics.h>
void cirbresen(int x,int y,int r);
void dda(int x1,int y1,int x2,int y2);
void display(int,int,int,int);
int main()
{
 int gd=DETECT,gm,x,y,r;
 initgraph(&gd,&gm,NULL);
 cleardevice();
 cout<<"\n SMILE";
 cirbresen(200,200,100);
 cirbresen(108,100,35);
 cirbresen(292,100,35);
 cirbresen(155,155,10);
 cirbresen(245,150,10);
 dda(185,210,210,210);

delay(10000);return 0;
  getch();
 closegraph();
 }
 void cirbresen(int x,int y,int r)
 {
   float s;
   int x1,y1;
   x1=0,y1=r;
   s=3-(2*r);
   while(x1<=y1)
   {
	if(s<=0)
	 s+=4*x1+6;
	else
	{
	 s+=4*(x1-y1)+10;
	 y1--;
	}
	x1++;
	display(x1,y1,x,y);
	}
 }
	void display(int x1,int y1,int x,int y)
	{
	  putpixel(x1+x,y1+y,WHITE);
	  putpixel(x1+x,y-y1,WHITE);
	  putpixel(x-x1,y1+y,WHITE);
	  putpixel(x-x1,y-y1,WHITE);
	  putpixel(x+y1,y+x1,WHITE);
	  putpixel(x+y1,y-x1,WHITE);
	  putpixel(x-y1,y+x1,WHITE);
	  putpixel(x-y1,y-x1,WHITE);
	}

 void dda(int x1,int y1,int x2,int y2)
 {
   int i,dx,dy,steps;
   float x,y;
   float xinc,yinc;
   dx=x2-x1;
   dy=y2-y1;
   if(abs(dx)>=abs(dy))
	  steps=dx;
   else
	  steps=dy;
   xinc=(float)dx/steps;
   yinc=(float)dy/steps;
   x=x1;
   y=y1;
   putpixel(x,y,WHITE);
   for(i=1;i<=steps;i++)
   {
	x=x+xinc;
	y=y+yinc;
	x1=x+0.5;
	y1=y+0.5;
	putpixel(x1,y1,WHITE);
   }
  }

