#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
	int gd=DETECT,gm,x1,x2,y1,y2,tx,ty;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");

	cout<<"Enter the first co-ordinate of a line:";
	cin>>x1>>y1;
	cout<<"Enter the second co-ordinate of a line:";
	cin>>x2>>y2;

	line(x1,y1,x2,y2);

	cout<<"Enter the translation vector:";
	cin>>tx>>ty;

	setcolor(RED);
	x1=x1+tx;
	y1=y1+ty;
	x2=x2+tx;
	y2=y2+ty;

	line(x1,y1,x2,y2);
	getch();
	closegraph();

	return 0;
}

