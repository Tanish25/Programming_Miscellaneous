#include <iostream>
using namespace std;
int main()
{
    int n;int i,j;
    cin>>n;
    int arr[n][n];

    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            arr[j][0]=1;
            if(j<i)
                {arr[j][i]=0;continue;}
            if(j==i)
                {arr[j][i]=1;continue;}
            if(i!=0){arr[j][i]=arr[j-1][i-1]+arr[j-1][i];}
        }


    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]==0)
            {
               cout<<" ";
               continue;
            }

                cout<<arr[i][j]<<" ";

        }

        cout<<endl;
    }


 return 0;
}
