#include<iostream>
using namespace std;
int main()
{
   int n,r;
   cin>>n>>r;
   for(int i=1;i<=r;i++)
   {
       for(int x=r-1;x>=i;x--)
        cout<<" ";
       for(int j=r;j<=n;j=j+(2r-2))

   }



    return 0;
}



































/*#include <iostream>
 using namespace std;
 int main()
 {
    int n;
    cin>>n;
    cout<<"  ";

    for(int i=3;i<=n;i=i+4)
        cout<<"*   ";
    cout<<endl;
    for(int i=2;i<=n;i=i+2)
        cout<<" *";
    cout<<endl;
    for(int i=1;i<=n;i=i+4)
        cout<<"*   ";
    return 0;
}
*/
