#include"rota.cpp"

int main() 
{ 
    int n,i,gd=DETECT,gm;
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

    cout<<"\nEnter angle of rotation :";
    cin>>ang;
    initgraph(&gd,&gm,NULL);
    rotatePoint(myp,n,ang);
    getch();
    closegraph();
    
    return 0;
}