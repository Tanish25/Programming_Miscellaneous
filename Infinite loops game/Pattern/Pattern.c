#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[((2*n)-1)][((2*n)-1)];
    int i,j;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
             if(j<i)
             {
                 arr[i][j]=n-j;
                 arr[i][(((2*n)-2)-j)]=n-j;
                 arr[(((2*n)-2)-i)][j]=n-j;
                 arr[(((2*n)-2)-i)][(((2*n)-2)-j)]=n-j;
                 continue;
             }
             arr[i][j]=n-i;
             arr[i][(((2*n)-2)-j)]=n-i;
             arr[(((2*n)-2)-i)][j]=n-i;
             arr[(((2*n)-2)-i)][(((2*n)-2)-j)]=n-i;
        }
    }
     for(i=0;i<((2*n)-1);i++)
    {
        for(j=0;j<((2*n)-1);j++)
            printf("%d",arr[i][j]);
        printf("\n");
    }
    return 0;
}


/*
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
*/
