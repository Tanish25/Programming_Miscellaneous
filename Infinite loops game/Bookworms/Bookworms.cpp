#include <iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int n;
    cin>>n;
    float x,y;
    int p1,p2;
    int l=m-n;
    cin>>x>>y;
    p1=60*x;
    p2=90*y;
    y+=1;
    m=m-60;
    l=l-90;
    p2+=l*y;
    for(int i=61;i<180;i=i+30,m=m-30)
    {
        if(x>=0)
        x=x-0.5;
        p1+=30*x;
    }
    for(;m>30;m=m-30)
    {
        if(x>=0)
        x=x-1;
        p1+=30*x;
    }
        x=x-1;
        p1+=m*x;
        cout<<"A read "<<(p1/500)<<" books and "<<(p1%500)<<" pages\n";
        cout<<"B read "<<(p2/500)<<" books and "<<(p2%500)<<" pages\n";
        if(p1>=p2)
            cout<<"A is the winner";
        else
            cout<<"B is the winner";
    return 0;
}



/*
p2=(l*y+l-90);
p1=30*(6*x-5);

