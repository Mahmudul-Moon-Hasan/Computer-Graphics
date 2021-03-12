#include<graphics.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   int xc,yc,x,y;
   float p;
   long a,b;

   cout<<"Enter coordinates of centre : ";
   cin>>xc>>yc;
   cout<<"Enter x,y radius of ellipse: ";
   cin>>a>>b;
   ///Region 1
   p=b*b-a*a*b+a*a/4;
   x=0;y=b;

   while(2.0*b*b*x <= 2.0*a*a*y)
   {
	if(p < 0)
	{
		x++;
		p = p+2*b*b*x+b*b;
	}
	else
	{
		x++;
		y--;
		p = p+2*b*b*x-2*a*a*y-b*b;
	}
	putpixel(xc+x,yc+y,RED);
	putpixel(xc+x,yc-y,RED);
	putpixel(xc-x,yc+y,RED);
	putpixel(xc-x,yc-y,RED);
   }
  ///Region 2
   p=b*b*(x+1/2)*(x+1/2)+a*a*(y-1)*(y-1)-a*a*b*b;
   while(y > 0)
   {
	if(p <= 0)
	{
		x++;
		y--;
		p = p+2*b*b*x-2*a*a*y+a*a;
	}
	else
	{
		y--;
		p = p-2*a*a*y+a*a;
	}
	putpixel(xc+x,yc+y,RED);
	putpixel(xc+x,yc-y,RED);
	putpixel(xc-x,yc+y,RED);
	putpixel(xc-x,yc-y,RED);
	delay(100);
   }
   getch();
   closegraph();

   return 0;
}
