#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	float x,y,x1,y1,r,di;

	initgraph(&gd,&gm,"C:\\Tc\\BGI");

	cout<<"Enter the starting co-ordinates of a center:";
	cin>>x1>>y1;
	cout<<"Enter the value of radius:";
	cin>>r;

	x = 0;
	y = r;

	di = (5/4) - r;

    while(x<=y)
	{
		if(di<0)
		{
			di=di+2*x+3;
			x = x+1;
			y = y;
		}
		else
		{
			di=di+2*(x-y)+5;
			x = x+1;
			y = y-1;
 		}
		delay(100);

		putpixel(x1+x,y1+y,RED);
		putpixel(x1-x,y1+y,RED);
		putpixel(x1+x,y1-y,RED);
		putpixel(x1-x,y1-y,RED);
		putpixel(x1+y,y1+x,RED);
		putpixel(x1+y,y1-x,RED);
		putpixel(x1-y,y1+x,RED);
		putpixel(x1-y,y1-x,RED);
 	}
	getch();
	closegraph();
	return 0;
}


