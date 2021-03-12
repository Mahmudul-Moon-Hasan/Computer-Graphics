#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main( )
{
	int i,gd=DETECT,gm;
	float x,y,x1,y1,x2,y2,dx,dy,step;

	initgraph(&gd,&gm,"C:\\Tc\\BGI");

	cout<<"Enter the value of x1 and y1 : ";
	cin>>x1>>y1;
	cout<<"Enter the value of x2 and y2: ";
	cin>>x2>>y2;

	dx=abs(x2-x1);
	dy=abs(y2-y1);

	if(dx>=dy)
		step=dx;
	else
		step=dy;

	dx=dx/step;
	dy=dy/step;

	for(i=1;i<=step;i++){
        putpixel(x1,y1,RED);
        x1=x1+dx;
        y1=y1+dy;
        delay(100);
	}

	getch();
	return 0;

}

