#include<stdio.h>
int main()
{
    char str[10],str2[10];
    gets(str); char temp;
    int q;
    scanf("%d",&q);
    int p[q],x[q],y[q];
    for(int i=0;i<q;i++)
        scanf("%d %d %d",&p[i],&x[i],&y[i]);
    for(int i=0;i<q;i++)
    {
        switch(p[i])
        {
        case 1:
            temp=str[(x[i]-1)];
            str[(x[i]-1)]=str[(y[i]-1)];
            str[(y[i]-1)]=temp;
            printf("%s",str);
            printf("\n");
            break;
        case 2:
            for(int j=0;j<10;j++)
            {
                str2[j]=str[9-j];
            }
            printf("%s",str);
                printf("\n");
            printf("%s",str2);
                printf("\n");
            for(int j=0;j<10;j++)
            {
                str[j]=str2[j];
            }
            printf("%s",str);
                printf("\n");
            printf("%s",str2);
                printf("\n");
            break;


        }
    }
    printf("%s",str);
    return 0;
}
