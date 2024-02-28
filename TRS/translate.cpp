#include"draw.cpp"
void translatePoint(struct Point point[],int s, double tx, double ty) 
{
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