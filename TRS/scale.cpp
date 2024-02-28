#include"draw.cpp"
void scalePoint(struct Point point[],int s, double scaleX, double scaleY) 
{
    int gd=DETECT,gm;
    cout<<"\nBefore Scaling:";
    setcolor(GREEN);
    print(point,s);
    initgraph(&gd,&gm,NULL);
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