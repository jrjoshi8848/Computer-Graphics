#include <stdio.h>
#include"draw.cpp"

struct Point3D 
{
    double x;
    double y;
    double z;
};

struct Point2D 
{
    double x;
    double y;
};

void parallelProjection(struct Point3D point3d[], struct Point point2d[],int s) 
{
    int gd=DETECT,gm;
    cout<<"\nBefore Projetion:";
     for(int i=0;i<s;i++)
    {
        cout<<"\npoint"<<i<<"\t\tx="<<point3d[i].x<<"\t\ty="<<point3d[i].y<<"\t\tz="<<point3d[i].z;
    }
    initgraph(&gd,&gm,NULL);
    setcolor(GREEN);
    for(int i=0;i<s;i++)
    {
    point2d[i].x = point3d[i].x;
    point2d[i].y = point3d[i].y;
    }
    cout<<"\nAfter Projection:";
    print(point2d,s);
    setcolor(RED);
    drawObject(point2d,s);
    getch();
    closegraph();
}

int main() 
{
    int i,n;
    struct Point3D myp3d[100];
    struct Point myPoint2D[100];      
    cout<<"Enter point count:";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"cordinates of p"<<i<<" :";
        cin>>myp3d[i].x>>myp3d[i].y>>myp3d[i].z;
    } 

    parallelProjection(myp3d,myPoint2D,n);


    return 0;
}


