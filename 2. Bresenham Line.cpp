#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main( )
{
	int i,gd=DETECT,gm,di;
	float x1,y1,x2,y2,dx,dy;

	initgraph(&gd,&gm,"C:\\Tc\\BGI");

	cout<<"Enter the value of x1 and y1 : ";
	cin>>x1>>y1;
	cout<<"Enter the value of x2 and y2: ";
	cin>>x2>>y2;

    dx=x2-x1;
	dy=y2-y1;

	di=2*dy-dx;

    while(x1<x2)
	{
		if(di>=0)
		{
			putpixel(x1,y1,RED);
            x1=x1+1;
			y1=y1+1;
			di=di+2*dy-2*dx;
			delay(100);
		}
		else
		{
			putpixel(x1,y1,RED);
			x1=x1+1;
			y1=y1;
			di=di+2*dy;
			delay(100);
		}
	}
    getch();

	return 0;
}

