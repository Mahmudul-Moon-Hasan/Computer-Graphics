#include<bits/stdc++.h>
#include <graphics.h>
using namespace std;

int plotpoints(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,RED);
    putpixel(xc-x,yc+y,RED);
    putpixel(xc+x,yc-y,RED);
    putpixel(xc-x,yc-y,RED);
    delay(100);
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\TC\\BGI");

    int xc,yc,a,b;

    int p,x,y,px,py,a2,b2;

    printf("Enter The Radius Value:\n");
    scanf("%d%d",&a,&b);

    printf("Enter The Center Values:\n");
    scanf("%d%d",&xc,&yc);

    a2=2*a*a;
    b2=2*b*b;

    ///REGION 1

    x=0;
    y=b;

    plotpoints(xc,yc,x,y);

    p=(b*b-a*a*b+(a*a)/4);
    px=0;
    py=a2*y;

    while(px<py)
    {
        x=x+1;
        px=px+b2;

        if(p>=0)
            y=y-1;
            py=py-a2;

        if(p<0)
            p=p+b*b+px;
        else
            p=p+b*b+px-py;
        plotpoints(xc,yc,x,y);

        ///REGION 2
        p=(b*b*(x+1/2)*(x+1/2)+a*a*(y-1)*(y-1)-a*a*b*b);

        while(y>0)
        {
            y=y-1;
            py=py-a2;

            if(p<=0)
            {
                x=x+1;
                px=px+b2;
            }
            if(p>0)
                p=p+a*a-py;
            else
                p=p+a*a-py+px;

            plotpoints(xc,yc,x,y);
        }
    }
    getch();

    return(0);
}
