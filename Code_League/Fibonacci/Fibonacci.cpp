#include <iostream>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<","<<b;
    for(int i=3;i<=n;i++)
      {
c=a+b;
    cout<<","<<c;
    a=b;
    b=c;

      }

    return 0;
}
