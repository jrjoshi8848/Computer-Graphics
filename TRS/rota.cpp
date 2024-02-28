#include"draw.cpp"
void rotatePoint(struct Point point[],int s, double angleDegrees) 
{
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