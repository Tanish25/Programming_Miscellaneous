#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];int sum=0;int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sum=sum-arr[0];
    int sum2=0;
    for(int j=1;j<n;j++)
    {
        sum2=sum2+arr[j-1];
        sum=sum-arr[j];
        if(sum2==sum)
        {
            c=1;
            cout<<"equillibrium found at position-"<<j+1;
            break;
        }
    }
    if(c==0)
        cout<<"not found";

    return 0;
}
