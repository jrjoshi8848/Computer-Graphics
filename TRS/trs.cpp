#include <stdio.h>
#include <math.h>
#include<graphics.h>
#include<iostream>
#include<graphics.h>
#include<iostream>
#include<stdlib.h>
#define PI 3.14
using namespace std;
struct Point 
{
    double x;
    double y;
};
void drawObject(struct Point point[],int s)
{
    for(int i=0;i<s-1;i++)
    {
        line(point[i].x,point[i].y,point[i+1].x,point[i+1].y);
    }
    line(point[s-1].x,point[s-1].y,point[0].x,point[0].y);
}
void print(struct Point point[],int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<"\npoint"<<i<<"\t\tx="<<point[i].x<<"\t\ty="<<point[i].y;
    }
}
void scalePoint(struct Point p[],int s, double scaleX, double scaleY) 
{
    struct Point point[100];
    for(int i=0;i<s;i++)
    point[i]=p[i];
    int gd=DETECT,gm;
    cout<<"\nBefore Scaling:";
    print(point,s);
    initgraph(&gd,&gm,NULL);
    setcolor(GREEN);
    drawObject(point,s);
    for(int i=0;i<s;i++)
    {
    point[i].x *= scaleX;
    point[i].y *= scaleY;
    }
    cout<<"\nAfter Scaling:";
    print(point,s);
    setcolor(RED);
    drawObject(point,s);
    getch();
    closegraph();
}
void rotatePoint(struct Point p[],int s, double angleDegrees) 
{
    struct Point point[100];
    for(int i=0;i<s;i++)
    point[i]=p[i];
    int gd=DETECT,gm;
    printf("\nBefore Rotation:");
    print(point,s);
    initgraph(&gd,&gm,NULL);
    setcolor(GREEN);
    drawObject(point,s);
    double angleRadians = angleDegrees * PI / 180.0;

    double cosTheta = cos(angleRadians);
    double sinTheta = sin(angleRadians);
    for(int i=0;i<s;i++)
    {
    double newX = point[i].x * cosTheta - point[i].y * sinTheta;
    double newY = point[i].x * sinTheta + point[i].y * cosTheta;

    point[i].x = newX;
    point[i].y = newY;
    }
    printf("\nAfter Rotation:");
    print(point,s);
    setcolor(RED);
    drawObject(point,s);
    getch();
    closegraph();
}
void translatePoint(struct Point p[],int s, double tx, double ty) 
{
    struct Point point[100];
    for(int i=0;i<s;i++)
    point[i]=p[i];
    int gd=DETECT,gm;
    cout<<"\nBefore Translating:";
    print(point,s);
    initgraph(&gd,&gm,NULL);
    setcolor(GREEN);
    drawObject(point,s);
    for(int i=0;i<s;i++)
    {
    point[i].x +=tx;
    point[i].y +=ty;
    }
    cout<<"\nAfter Translating:";
    print(point,s);
    setcolor(RED);
    drawObject(point,s);
    getch();
    closegraph();
}
int main() 
{ 
    int gd=DETECT,gm,n,i,c;
    struct Point myp[100];
    double sx,sy,x,y,ang;

    cout<<"Enter no of points :";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter cordinates of p"<<i<<" :";
        cin>>x>>y;
        myp[i]={x,y};
    }
    p:
    cout<<"\n\nWhat would like to do:\n\n\t1.Translate\n\t2.Rotation\n\t3.Scaling\n\n\tEnter choice :";
    cin>>c;
    switch (c)
    {
    case 1:
    {
            double tx,ty;
            cout<<"Enter Tx & Ty:";
            cin>>tx>>ty;
            translatePoint(myp,n,tx,ty);
            goto p;
    }


    case 2:
    {
            double ang;
            cout<<"\nEnter angle of rotation :";
            cin>>ang;
            rotatePoint(myp,n,ang);
            goto p;
    }
    case 3:
    {
            double sx,sy;
            cout<<"Enter sx & sy:";
            cin>>sx>>sy;
            scalePoint(myp,n,sx,sy);
            goto p;
    }
    case 4:
    exit(0);
    default :
    goto p;

    }


    return 0;
}