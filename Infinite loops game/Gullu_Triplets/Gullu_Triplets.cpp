#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    for(int k=1;k<n;k++)
    {


    for(int i=1;i<n;i++)
    {

        for(int j=1;j<=i;j++)
        {
            if(((j*j)+(i*i)-(k*k))%n==0)
            {cout<<j<<i<<k<<endl;c++;}
        }
    }
    }
    cout<<c;
    return 0;
}
