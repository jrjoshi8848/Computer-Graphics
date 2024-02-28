#include"scale.cpp"

int main() 
{
    int i,n;
    struct Point myp[100];
    double sx,sy,x,y;

    cout<<"Enter no of points :";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter cordinates of p"<<i<<" :";
        cin>>x>>y;
        myp[i]={x,y};
    }

    cout<<"Enter sx & sy:";
    cin>>sx>>sy;
    
    scalePoint(myp,n,sx,sy);
    
    return 0;
}

