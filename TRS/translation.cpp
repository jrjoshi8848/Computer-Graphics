#include"translate.cpp"

int main() 
{
    int i,n;
    struct Point myp[100];
    double tx,ty,x,y;

    cout<<"Enter no of points :";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter cordinates of p"<<i<<" :";
        cin>>x>>y;
        myp[i]={x,y};
    }

    cout<<"Enter Tx & Ty:";
    cin>>tx>>ty;
    
    translatePoint(myp,n,tx,ty);
    
    return 0;
}