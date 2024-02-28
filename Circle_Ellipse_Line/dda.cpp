#include <graphics.h>
#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;
 
int main( )
{
float x,y,x0,y0,xm,ym,dx,dy,s;
int i,gd=DETECT,gm;
cout<<"Enter the value of x0 and y0 : ";
cin>>x0>>y0;
cout<<"Enter the value of xmax and ymax: ";
cin>>xm>>ym;
 
dx=abs(xm-x0);
dy=abs(ym-y0);
 
if(dx>=dy)
s=dx;
else
s=dy;
 
dx=dx/s;
dy=dy/s;
 
x=x0;
y=y0;
initgraph(&gd,&gm,NULL);
 setcolor(RED);
for(int i=0;i<s;i++)
{
    putpixel(x,y,5);
    x=x+dx;
    y=y+dy;
}
getche();
closegraph();
return 0;
}