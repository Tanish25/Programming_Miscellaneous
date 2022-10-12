#include <iostream>
using namespace std;
int f=0;
int n;int a;int c=0;
int prime(int k)
{
    for(int z=2;z<k;z++)
    {
        if(k%z==0)
        {
            c=1;
            break;
        }

    }
    return c;
}
int main()
{

    cin>>n;

    while(n%2==0)
    {
        f++;
        n=n/2;

    }
    if(f!=0)
        cout<<"2- "<<f<<endl;
        f=0;
    while(n%3==0)
          {
              f++;
    n=n/3;
          }
             if(f!=0)
        cout<<"3- "<<f<<endl;
          f=0;
   for(int i=1;n!=1;i++)
   {
       a=((6*i)-1);
       if(prime(a)==0)
       {
             while(n%a==0)
          {
              f++;
    n=n/a;
          }
             if(f!=0)
        cout<<a<<"- "<<f<<endl;
          f=0;


       }
         a=((6*i)+1);
       if(prime(a)==0)
       {
             while(n%a==0)
          {
              f++;
    n=n/a;
          }
               if(f!=0)
        cout<<a<<"- "<<f<<endl;
          f=0;


       }

   }

    return 0;
}

//time limit is exceeding
