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

void perspectiveProjection(struct Point3D point3d[], struct Point point2d[],int s,double f) 
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
    point2d[i].x = point3d[i].x*f/point3d[i].z;
    point2d[i].y = point3d[i].y*f/point3d[i].z;
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
   double f;
    struct Point3D myp3d[100];
    struct Point myp2d[100];      
    cout<<"points count:";
    cin>>n;
    cout<<"focus :";
    cin>>f;

    for(i=0;i<n;i++)
    {
        cout<<"cordinates of p"<<i<<" :";
        cin>>myp3d[i].x>>myp3d[i].y>>myp3d[i].z;
    } 

    perspectiveProjection(myp3d,myp2d,n,f);


    return 0;
}